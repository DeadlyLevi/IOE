// Copyright Epic Games, Inc. All Rights Reserved.

#include "IOEGameMode.h"
#include "IOECharacter.h"
#include "UObject/ConstructorHelpers.h"

AIOEGameMode::AIOEGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
