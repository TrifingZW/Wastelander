/* =====================================================================
 * EntityAreaGameMode.cpp
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: 2024 TrifingZW <TrifingZW@gmail.com>
 * 
 * Copyright (c) 2024 TrifingZW
 * Licensed under MIT License
 * ===================================================================== */

#include "Content/EntityArea/EntityAreaGameMode.h"
#include "EntityAreaPlayerController.h"

AEntityAreaGameMode::AEntityAreaGameMode()
{
	/*// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;*/

	// PlayerControllerClass = AEntityAreaPlayerController::StaticClass();
}
