/* =====================================================================
 * EntityAreaPlayerController.cpp
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: 2024 TrifingZW <TrifingZW@gmail.com>
 * 
 * Copyright (c) 2024 TrifingZW
 * Licensed under MIT License
 * ===================================================================== */

#include "EntityAreaPlayerController.h"
#include "InteractionManager.h"

AEntityAreaPlayerController::AEntityAreaPlayerController()
{
	// 创建交互管理器实例
	InteractionManager = CreateDefaultSubobject<UInteractionManager>(TEXT("InteractionManager"));
	InteractionManager->SetupAttachment(GetRootComponent());
}

void AEntityAreaPlayerController::Tick(const float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AEntityAreaPlayerController::BeginPlay()
{
	Super::BeginPlay();
}
