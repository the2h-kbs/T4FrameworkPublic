// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_T4DetectAttackable.generated.h"

/**
  * #50
 */
class UBehaviorTreeComponent;
UCLASS()
class UBTService_T4DetectAttackable : public UBTService
{
	GENERATED_BODY()

public:
	UBTService_T4DetectAttackable();

protected:
	void TickNode(
		UBehaviorTreeComponent& InOwnerComp, 
		uint8* InNodeMemory, 
		float InDeltaTime
	) override;
};
