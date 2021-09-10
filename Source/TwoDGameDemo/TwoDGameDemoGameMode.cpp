// Copyright Epic Games, Inc. All Rights Reserved.

#include "TwoDGameDemoGameMode.h"
#include "TwoDGameDemoCharacter.h"

ATwoDGameDemoGameMode::ATwoDGameDemoGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ATwoDGameDemoCharacter::StaticClass();	
}
