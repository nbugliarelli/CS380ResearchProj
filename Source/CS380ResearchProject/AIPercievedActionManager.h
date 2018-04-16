// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include <list>
#include <vector>
#include "AIPercievedActionManager.generated.h"


UENUM(BlueprintType)
enum  PlayerActions
{
    InsufficentData,
    Foward UMETA(DisplayName = "Foward"),
    Backward UMETA(DisplayName = "Backward"),
    Idle UMETA(DisplayName = "Idle"),
    Uppercut UMETA(DisplayName = "Uppercut"),
    Hook UMETA(DisplayName = "Hook"),
    WithinRange UMETA(DisplayName = "WithinRange"),
    Crouch UMETA(DisplayName = "Crouch"),
    Counter UMETA(DisplayName = "Counter"),


    TOTAL
};

class ActionLogic
{
public:
    //Member variables
    std::list<std::pair<PlayerActions, float>> ActionList;
    float RollingWindow = 30.0f;
    float Time;
    int PercentRandomAction;
    int PercentCertainty;
    int TimeDelay;
    int UniGramOccurances[TOTAL] = { 0 };
    int BiGramOccurances[TOTAL] = { 0 };
    int TriGramOccurances[TOTAL] = { 0 };
    int FourGramOccurances[TOTAL] = { 0 };

    //Methods that actually do things
    void PushAction(PlayerActions Action);
    PlayerActions TakeRandomAction();
    PlayerActions PredictNextMove();
    PlayerActions RunNGram();
    PlayerActions RunUniGram(std::list<std::pair<PlayerActions, float>>::iterator Start);
    PlayerActions RunBiGram(std::list<std::pair<PlayerActions, float>>::iterator Start);
    PlayerActions RunTriGram(std::list<std::pair<PlayerActions, float>>::iterator Start);
    PlayerActions TotalArray(int* Array);

    //Getters and setters
    int GetTimeDelay();
    void SetTimeDelay(int x);
    int GetPercentRandomAction();
    void SetPercentRandomAction(int x);
    int GetPercentCertainty();
    float GetRollingWindow();
    void SetRollingWindow(float Window);
    float GetGameTime();
    void SetGameTime(float time);
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CS380RESEARCHPROJECT_API UAIPercievedActionManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAIPercievedActionManager();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	AActor* myOwner;

	UFUNCTION(BlueprintCallable)
	void RecieveAction(PlayerActions action, AActor* actor);

    UFUNCTION(BlueprintCallable)
    void SetGameTime(float Time);
	
};
