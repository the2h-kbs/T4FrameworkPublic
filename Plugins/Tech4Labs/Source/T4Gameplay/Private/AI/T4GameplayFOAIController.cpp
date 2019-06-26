// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "Classes/AI/T4GameplayFOAIController.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "T4GameplayInternal.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/AIController/
 */
AT4GameplayFOAIController::AT4GameplayFOAIController(const FObjectInitializer& ObjectInitializer) 
	: Super(ObjectInitializer)
{
}

void AT4GameplayFOAIController::TickActor(
	float InDeltaTime,
	enum ELevelTick InTickType,
	FActorTickFunction& InThisTickFunction
)
{
	Super::TickActor(InDeltaTime, InTickType, InThisTickFunction);
}

bool AT4GameplayFOAIController::SetTableData(
	const FT4GameDataID& InFOGameDataID,
	const FSoftObjectPath& InBehaviorTreePath,
	const FSoftObjectPath& InBlackboardDataPath
)
{
	// #31
	//const TCHAR* DebugTableName = *(InFOGameDataID.ToString());
	//BlackboardAssetLoader.Load(InBlackboardDataPath, false, DebugTableName);
	//BehaviorTreeAssetLoader.Load(InBehaviorTreePath, false, DebugTableName);
	FOGameDataID = InFOGameDataID;
	//bAIDataLoaded = false;
	return true;
}
