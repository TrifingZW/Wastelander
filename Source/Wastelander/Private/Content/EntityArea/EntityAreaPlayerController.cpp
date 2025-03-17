/* =====================================================================
 * EntityAreaPlayerController.cpp
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: 2024 TrifingZW <TrifingZW@gmail.com>
 * 
 * Copyright (c) 2024 TrifingZW
 * Licensed under MIT License
 * ===================================================================== */

#include "EntityAreaPlayerController.h"

#include <InteractionManager.h>
#include <InventoryManager.h>

AEntityAreaPlayerController::AEntityAreaPlayerController()
{
	// 创建交互管理器实例
	InteractionManager = CreateDefaultSubobject<UInteractionManager>(TEXT("InteractionManager"));
	InteractionManager->SetupAttachment(GetRootComponent()); // 场景组件需要附加

	// 创建库存管理器实例
	InventoryManager = CreateDefaultSubobject<UInventoryManager>(TEXT("InventoryManager"));
}

void AEntityAreaPlayerController::Tick(const float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AEntityAreaPlayerController::BeginPlay()
{
	Super::BeginPlay();
}
