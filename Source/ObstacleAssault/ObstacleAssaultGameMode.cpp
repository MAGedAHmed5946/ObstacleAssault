// Copyright Epic Games, Inc. All Rights Reserved.

#include "ObstacleAssaultGameMode.h"
#include "ObstacleAssaultCharacter.h"
#include "UObject/ConstructorHelpers.h"

AObstacleAssaultGameMode::AObstacleAssaultGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
