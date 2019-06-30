// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "Classes/AI/BTTasks/BTTask_T4NormalAttack.h"
#include "Classes/AI/T4GameplayCharacterAIController.h"

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
	AT4GameplayCharacterAIController* NPCController = Cast<AT4GameplayCharacterAIController>(InOwnerComp.GetAIOwner());
	if (nullptr == NPCController)
	{
		return EBTNodeResult::Failed;
	}
	if (!NPCController->IsCurrentAggressive())
	{
		return EBTNodeResult::Failed;
	}
	if (NPCController->IsAttacking())
	{
		return EBTNodeResult::Succeeded; // 공격중이라, 더이상 진행이 안되도록 처리!
	}
	FT4NPCAIMemory& AIMemory = NPCController->GetAIMemory();
	FT4ObjectID AttackTargetObjectID = AIMemory.AttackTargetObjectID; // #50
	if (!AttackTargetObjectID.IsValid())
	{
		return EBTNodeResult::Failed;
	}
	AIMemory.MoveSpeedType = ET4MoveSpeedType::Stand;
	bool bResult = NPCController->TryNormalAttack(AttackTargetObjectID);
	if (!bResult)
	{
		return EBTNodeResult::Failed;
	}
	return EBTNodeResult::Succeeded;
}
