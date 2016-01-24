// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Dark_Ninja.h"
#include "Dark_NinjaGameMode.h"
#include "Dark_NinjaCharacter.h"

ADark_NinjaGameMode::ADark_NinjaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
