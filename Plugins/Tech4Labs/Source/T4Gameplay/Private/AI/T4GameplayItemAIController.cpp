// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "Classes/AI/T4GameplayItemAIController.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "T4GameplayInternal.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/AIController/
 */
AT4GameplayItemAIController::AT4GameplayItemAIController(const FObjectInitializer& ObjectInitializer) 
	: Super(ObjectInitializer)
{
}

void AT4GameplayItemAIController::TickActor(
	float InDeltaTime,
	enum ELevelTick InTickType,
	FActorTickFunction& InThisTickFunction
)
{
	Super::TickActor(InDeltaTime, InTickType, InThisTickFunction);
}

bool AT4GameplayItemAIController::SetTableData(
	const FT4GameDataID& InItemGameDataID,
	const FSoftObjectPath& InBehaviorTreePath,
	const FSoftObjectPath& InBlackboardDataPath
)
{
	// #31
	//const TCHAR* DebugTableName = *(InItemGameDataID.ToString());
	//BlackboardAssetLoader.Load(InBlackboardDataPath, false, DebugTableName);
	//BehaviorTreeAssetLoader.Load(InBehaviorTreePath, false, DebugTableName);
	ItemGameDataID = InItemGameDataID;
	//bAIDataLoaded = false;
	return true;
}
