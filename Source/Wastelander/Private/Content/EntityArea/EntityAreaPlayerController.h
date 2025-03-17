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

class UInventoryManager;
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
#pragma region 组件实例
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "交互属性", meta=(EditHide))
	UInteractionManager* InteractionManager = nullptr; // 交互管理器实例

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "库存属性", meta=(EditHide))
	UInventoryManager* InventoryManager = nullptr; // 库存管理器实例
# pragma endregion

	AEntityAreaPlayerController();

	virtual void Tick(float DeltaSeconds) override;

protected:
	virtual void BeginPlay() override;
};
