// Copyright Epic Games, Inc. All Rights Reserved.

#include "FightGameGameMode.h"
#include "FightGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFightGameGameMode::AFightGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
