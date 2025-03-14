/* =====================================================================
 * EntityAreaPlayerController.h
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: 2024 TrifingZW <TrifingZW@gmail.com>
 * 
 * Copyright (c) 2024 TrifingZW
 * Licensed under MIT License
 * ===================================================================== */

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "EntityAreaPlayerController.generated.h"

class UInteractionManager;
class UInteractionWidget;

/**
 * 实体区域玩家控制器
 */
UCLASS()
class AEntityAreaPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AEntityAreaPlayerController();

	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "交互实例", meta=(EditHide))
	UInteractionManager* InteractionManager = nullptr; // 交互管理器实例

protected:
	virtual void BeginPlay() override;
};
