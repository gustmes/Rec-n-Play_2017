// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "GameJam_RecnPlay2017GameMode.h"
#include "GameJam_RecnPlay2017Character.h"
#include "UObject/ConstructorHelpers.h"

AGameJam_RecnPlay2017GameMode::AGameJam_RecnPlay2017GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
