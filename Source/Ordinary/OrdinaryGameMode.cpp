// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "OrdinaryGameMode.h"
#include "OrdinaryPawn.h"

AOrdinaryGameMode::AOrdinaryGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AOrdinaryPawn::StaticClass();
}

