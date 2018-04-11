// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include <queue>
#include "AIPercievedActionManager.generated.h"



UENUM(BlueprintType)
enum class PlayerActions : uint8
{
	Punch UMETA(DisplayName = "Punch"),
	Kick UMETA(DisplayName = "Kick"),
	Block UMETA(DisplayName = "Block")
};

class ActionLogic
{
public:
    std::queue<std::pair<PlayerActions, float>> ActionList;
    float RollingWindow;
    float Time;

    float GetRollingWindow();
    void SetRollingWindow(float Window);
    void PushAction(PlayerActions Action);
    float GetGameTime();
    void SetGameTime(float time);
    PlayerActions PredictNextMove();
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
