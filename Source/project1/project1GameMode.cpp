// Copyright Epic Games, Inc. All Rights Reserved.

#include "project1GameMode.h"
#include "project1Character.h"
#include "UObject/ConstructorHelpers.h"

Aproject1GameMode::Aproject1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
