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
    printf("%d", AL->PredictNextMove());
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

PlayerActions ActionLogic::PredictNextMove()
{
    if (ActionList.empty())
    {
<<<<<<< HEAD
        
        return RunNGram();
    }
    return TakeRandomAction();
}

PlayerActions ActionLogic::RunNGram()
{
    //If list is empty or only one entry
    if(ActionList.size() <= 1)
    {
        return PlayerActions::InsufficentData;
    }

    //Ignore things before reaction time
    auto ListWalker = ActionList.begin();
    while (Time < TimeDelay + ListWalker->second)
    {
        ++ListWalker;
        if (ListWalker == ActionList.end())
        {
            return PlayerActions::InsufficentData;
        }
    }
    PlayerActions Result = RunTriGram(ListWalker);
    if(Result == PlayerActions::InsufficentData)
    {
        Result = RunBiGram(ListWalker);
        if (Result == PlayerActions::InsufficentData)
        {
            Result = RunUniGram(ListWalker);
        }
    }
    return Result;
}

PlayerActions ActionLogic::RunUniGram(std::list<std::pair<PlayerActions, float>>::iterator Start)
{
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
        return PlayerActions::InsufficentData;
    }
    auto BiGram = Start;
    auto BiGram2 = BiGram;
    ++BiGram2;
    PlayerActions Prefix = BiGram2->first;
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
        return PlayerActions::InsufficentData;
    }
    auto TriGram = Start;

    auto TriGram2 = TriGram;
    ++TriGram2;

    auto TriGram3 = TriGram2;
    ++TriGram3;

    PlayerActions Prefix = TriGram3->first;
    PlayerActions Prefix2 = TriGram2->first;
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
    PlayerActions HighestAction = InsufficentData;
    bool TieOccured = false;

    for (int i = 0; i < TOTAL; ++i)
    {
        if (Array[i] >= HighestOccurance)
        {
            if (Array[i] == HighestOccurance)
            {
                TieOccured = true;
            }
            HighestOccurance = Array[i];
            ++NumberOfOccurance;
            HighestAction = static_cast<PlayerActions>(i);
        }
    }
    return HighestAction;
}


PlayerActions ActionLogic::TakeRandomAction()
{
    return PlayerActions::Crouch;
}
int ActionLogic::GetPercentRandomAction()
{
    return PercentRandomAction;
}

void ActionLogic::SetPercentRandomAction(int x)
{
    PercentRandomAction = x;
}

int ActionLogic::GetPercentCertainty()
{
    return PercentCertainty;
}

void ActionLogic::SetPercentCertainty(int x)
{
    PercentCertainty = x;
}

int ActionLogic::GetTimeDelay()
{
    return TimeDelay;
}

void ActionLogic::SetTimeDelay(int x)
{
    TimeDelay = x;
}
=======
        return PlayerActions::Block;
    }
    else
    {
        return ActionList.front().first;
    }
}
>>>>>>> parent of eb7cbd8... Merge branch 'master' of https://github.com/nbugliarelli/CS380ResearchProj
