// Fill out your copyright notice in the Description page of Project Settings.

#include "AIPercievedActionManager.h"


ActionLogic* AL;

// Sets default values for this component's properties
UAIPercievedActionManager::UAIPercievedActionManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAIPercievedActionManager::BeginPlay()
{
	Super::BeginPlay();

	// ...
    AL = new ActionLogic;
	myOwner = GetOwner();
	
}


// Called every frame
void UAIPercievedActionManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    AL->DropOldPlayerInputs();
    AL->PredictNextMove();
	// ...

}

void UAIPercievedActionManager::RecieveAction(PlayerActions action, AActor* actor)
{
    AL->PushAction(action);
}

void UAIPercievedActionManager::SetGameTime(float Time)
{
    AL->SetGameTime(Time);
    //AL.PushAction(action, Time);
}

PlayerActions UAIPercievedActionManager::GetPreditction()
{
    return AL->GetPredictedNextMove();
}

float UAIPercievedActionManager::GetPercentCertain()
{
    return AL->GetPredictedPercentCertain();
}

void UAIPercievedActionManager::ClearHistory()
{
    AL->ActionList.clear();
}

int UAIPercievedActionManager::GetNgram()
{
    return AL->GetNGramFound();
}

ActionLogic::ActionLogic()
{
    for(int i = 0; i < TOTAL; ++i)
    {
        UniGramOccurances[i] = 0;
    }
    for (int i = 0; i < TOTAL; ++i)
    {
        BiGramOccurances[i] = 0;
    }
    for (int i = 0; i < TOTAL; ++i)
    {
        TriGramOccurances[i] = 0;
    }
}

float ActionLogic::GetRollingWindow()
{
    return RollingWindow;
}

void ActionLogic::SetRollingWindow(float Window)
{
    RollingWindow = Window;
}

void ActionLogic::PushAction(PlayerActions Action)
{
    ActionList.push_front(std::pair<PlayerActions, float>(Action, Time));
}

float ActionLogic::GetGameTime()
{
    return Time;
}

void ActionLogic::SetGameTime(float time)
{
    Time = time;
}

float ActionLogic::GetPredictedPercentCertain()
{
    return PredictedPercentCertain;
}

void ActionLogic::SetPredictedPercentCertain(float x)
{
    PredictedPercentCertain = x;
}

PlayerActions ActionLogic::GetPredictedNextMove()
{
    return PredictedNextMove;
}

void ActionLogic::SetPredictedNextMove(PlayerActions x)
{
    PredictedNextMove = x;
}

int ActionLogic::GetNGramFound()
{
    return NGramFound;
}

void ActionLogic::SetNGramFound(int x)
{
    NGramFound = x;
}

PlayerActions ActionLogic::PredictNextMove()
{
    float Random = (static_cast<float>(rand()) /RAND_MAX);
    if (!ActionList.empty() && Random > PercentRandomAction)
    {
        return RunNGram();
    }
    NGramFound = 0;
    return NoPrediction;
}

PlayerActions ActionLogic::RunNGram()
{
    //If list is empty or only one entry
    if(ActionList.size() <= 1)
    {
        return PlayerActions::NoPrediction;
    }

    //Ignore things before reaction time
    auto ListWalker = ActionList.begin();
    while (Time < TimeDelay + ListWalker->second)
    {
        ++ListWalker;
        if (ListWalker == ActionList.end())
        {
            return PlayerActions::NoPrediction;
        }
    }
    PlayerActions Result = RunTriGram(ListWalker);
    if(Result == PlayerActions::NoPrediction)
    {
        Result = RunBiGram(ListWalker);
        if (Result == PlayerActions::NoPrediction)
        {
            Result = RunUniGram(ListWalker);
        }
    }
    if(Result == NoPrediction)
    {
        NGramFound = 0;
    }
    return Result;
}

PlayerActions ActionLogic::RunUniGram(std::list<std::pair<PlayerActions, float>>::iterator Start)
{
    NGramFound = 1;
    auto UniGram = Start;
    while (UniGram != ActionList.end())
    {
        UniGramOccurances[UniGram->first]++;
        ++UniGram;
    }
    return TotalArray(UniGramOccurances);
}

PlayerActions ActionLogic::RunBiGram(std::list<std::pair<PlayerActions, float>>::iterator Start)
{
    if(ActionList.size() < 2)
    {
        return PlayerActions::NoPrediction;
    }
    NGramFound = 2;
    auto BiGram = Start;
    auto BiGram2 = BiGram;
    ++BiGram2;
    PlayerActions Prefix = BiGram->first;
    while (BiGram2 != ActionList.end())
    {
        if (BiGram2->first == Prefix)
        {
            ++BiGramOccurances[BiGram->first];
        }
        ++BiGram;
        ++BiGram2;
    }
    return TotalArray(BiGramOccurances);
}

PlayerActions ActionLogic::RunTriGram(std::list<std::pair<enum PlayerActions, float>>::iterator Start)
{
    if (ActionList.size() < 3)
    {
        return PlayerActions::NoPrediction;
    }
    NGramFound = 3;
    auto TriGram = Start;

    auto TriGram2 = TriGram;
    ++TriGram2;

    auto TriGram3 = TriGram2;
    ++TriGram3;

    PlayerActions Prefix = TriGram2->first;
    PlayerActions Prefix2 = TriGram->first;
    while (TriGram3 != ActionList.end())
    {
        if (TriGram3->first == Prefix && TriGram2->first == Prefix2)
        {
            ++TriGramOccurances[TriGram->first];
        }
        ++TriGram;
        ++TriGram2;
        ++TriGram3;
    }
    return TotalArray(TriGramOccurances);
}

PlayerActions ActionLogic::TotalArray(int* Array)
{
    int HighestOccurance = 0;
    int NumberOfOccurance = 0;
    PlayerActions HighestAction = NoPrediction;

    for (int i = 0; i < TOTAL; ++i)
    {
        if (Array[i] > 0)
        {
            NumberOfOccurance += Array[i];
            if(Array[i] > HighestOccurance)
            {
                HighestOccurance = Array[i];
                HighestAction = static_cast<PlayerActions>(i);
            }
        }
    }

    float Percent = static_cast<float>(HighestOccurance) / static_cast<float>(NumberOfOccurance);

    for(int i = 0; i < TOTAL; ++i)
    {
        Array[i] = 0;
    }

    if(Percent < PercentCertainty)
    {
        SetPredictedNextMove(NoPrediction);
        SetPredictedPercentCertain(0.0f);
        return NoPrediction;
    }

    SetPredictedNextMove(HighestAction);
    SetPredictedPercentCertain(Percent);

    return HighestAction;
}

void ActionLogic::DropOldPlayerInputs()
{
    while(!ActionList.empty() && ActionList.back().second < Time - RollingWindow)
    {
        ActionList.pop_back();
    }
}

PlayerActions ActionLogic::TakeRandomAction()
{
    int RandomAction =  rand() % (TOTAL - 1) + 1;
    while (RandomAction == WithinRange)
    {
        RandomAction = rand() % (TOTAL - 1) + 1;
    }
    return static_cast<PlayerActions>(RandomAction);
}
float ActionLogic::GetPercentRandomAction()
{
    return PercentRandomAction;
}

void ActionLogic::SetPercentRandomAction(float x)
{
    PercentRandomAction = x;
}

float ActionLogic::GetPercentCertainty()
{
    return PercentCertainty;
}

void ActionLogic::SetPercentCertainty(float x)
{
    PercentCertainty = x;
}

float ActionLogic::GetTimeDelay()
{
    return TimeDelay;
}

void ActionLogic::SetTimeDelay(float x)
{
    TimeDelay = x;
}
