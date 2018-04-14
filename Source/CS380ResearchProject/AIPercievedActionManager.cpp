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
    ActionList.push(std::pair<PlayerActions, float>(Action, Time));
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
    int PercentChance = rand() % 100 + 1;
    if (PercentChance > PercentRandomAction)
    {
        
        int HighestPercentNextAction = 0;
        //Do math and such.

        if(HighestPercentNextAction > PercentCertainty)
        {
            //return percieved next action if we can determine one within acceptable margin of error
            return PlayerActions::Block;
        }
    }
    return TakeRandomAction();
}

PlayerActions ActionLogic::TakeRandomAction()
{
    return PlayerActions::Block;
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
    return FrameDelay;
}

void ActionLogic::SetTimeDelay(int x)
{
    FrameDelay = x;
}

int ActionLogic::GetTimeRemembered()
{
    return FramesRemembered;
}

void ActionLogic::SetTimeRemembered(int x)
{
    FramesRemembered = x;
}