// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TCC3GameMode.h"
#include "TCC3Character.h"
#include "UObject/ConstructorHelpers.h"

ATCC3GameMode::ATCC3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
