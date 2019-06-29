// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "Classes/AI/BTTasks/BTTask_T4NormalAttack.h"
#include "Classes/AI/T4GameplayNPCAIController.h"

#include "T4GameplayInternal.h"

/**
  * #50
 */
UBTTask_T4NormalAttack::UBTTask_T4NormalAttack(
	const FObjectInitializer& ObjectInitializer
)	: Super(ObjectInitializer)
{
}

EBTNodeResult::Type UBTTask_T4NormalAttack::ExecuteTask(
	UBehaviorTreeComponent& InOwnerComp,
	uint8* InNodeMemory
)
{
	AT4GameplayNPCAIController* NPCController = Cast<AT4GameplayNPCAIController>(InOwnerComp.GetAIOwner());
	if (nullptr == NPCController)
	{
		return EBTNodeResult::Failed;
	}
	if (NPCController->IsAttacking())
	{
		return EBTNodeResult::Succeeded; // 공격중이라, 더이상 진행이 안되도록 처리!
	}
	FT4ObjectID AttackTargetObjectID = NPCController->GetAIMemory().AttackTargetObjectID; // #50
	if (!AttackTargetObjectID.IsValid())
	{
		return EBTNodeResult::Failed;
	}
	bool bResult = NPCController->TryNormalAttack(AttackTargetObjectID);
	if (!bResult)
	{
		return EBTNodeResult::Failed;
	}
	return EBTNodeResult::Succeeded;
}
