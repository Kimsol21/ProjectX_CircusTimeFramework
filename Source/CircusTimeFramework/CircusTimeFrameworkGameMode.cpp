// Copyright Epic Games, Inc. All Rights Reserved.

#include "CircusTimeFrameworkGameMode.h"
#include "CircusTimeFrameworkCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACircusTimeFrameworkGameMode::ACircusTimeFrameworkGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
