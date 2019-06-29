// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "Classes/AI/BTServices/BTService_T4DetectAttackable.h"
#include "Classes/AI/T4GameplayNPCAIController.h"

#include "T4GameplayInternal.h"

/**
  * #50
 */
UBTService_T4DetectAttackable::UBTService_T4DetectAttackable()
{
	NodeName = TEXT("T4DetectAttackable");
	Interval = 1.0f;
}

void UBTService_T4DetectAttackable::TickNode(
	UBehaviorTreeComponent& InOwnerComp,
	uint8* InNodeMemory,
	float InDeltaTime
)
{
	Super::TickNode(InOwnerComp, InNodeMemory, InDeltaTime);
	AT4GameplayNPCAIController* NPCController = Cast<AT4GameplayNPCAIController>(InOwnerComp.GetAIOwner());
	if (nullptr == NPCController)
	{
		return;
	}
	FT4ObjectID TargetGameObjectID;
	IT4GameObject* NewTargetObject = NPCController->FindNearestEnemyByAttackRange();
	if (nullptr != NewTargetObject)
	{
		TargetGameObjectID = NewTargetObject->GetObjectID();
	}
	NPCController->GetAIMemory().AttackTargetObjectID = TargetGameObjectID;
}