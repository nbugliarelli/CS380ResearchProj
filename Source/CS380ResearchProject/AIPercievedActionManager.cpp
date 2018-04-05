// Fill out your copyright notice in the Description page of Project Settings.

#include "AIPercievedActionManager.h"


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

	myOwner = GetOwner();
	
}


// Called every frame
void UAIPercievedActionManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UAIPercievedActionManager::RecieveAction(PlayerActions action, AActor* actor)
{

}