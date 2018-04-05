// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "CS380ResearchProjectGameMode.h"
#include "CS380ResearchProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACS380ResearchProjectGameMode::ACS380ResearchProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
