// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIPercievedActionManager.generated.h"

UENUM(BlueprintType)
enum class PlayerActions : uint8
{
	Punch UMETA(DisplayName = "Punch"),
	Kick UMETA(DisplayName = "Kick"),
	Block UMETA(DisplayName = "Block")
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
	
};
