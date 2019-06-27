// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "Classes/AI/T4GameplayFOAIController.h"

#include "GameDB/T4GameDB.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "T4GameplayInternal.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/AIController/
 */
AT4GameplayFOAIController::AT4GameplayFOAIController(const FObjectInitializer& ObjectInitializer) 
	: Super(ObjectInitializer)
	, AIDataLoadState(ET4AIDataLoadState::AIDataLoad_Ready) // #50
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

void AT4GameplayFOAIController::Reset() // #50
{
	// WARN : AsyncLoad 가 걸렸을 수 있음으로 종료 시 명시적으로 Reset 을 호출해야 한다.
	//BlackboardAssetLoader.Reset();
	//BehaviorTreeAssetLoader.Reset();
}

void AT4GameplayFOAIController::AIStart() // #50
{

}

bool AT4GameplayFOAIController::Bind(
	const FT4GameDataID& InFOGameDataID
)
{
	FT4GameDB& GameDB = GetGameDB();
	const FT4GameNPCData* NPCData = GameDB.GetGameData<FT4GameNPCData>(InFOGameDataID);
	if (nullptr == NPCData)
	{
		UE_LOG(
			LogT4Gameplay,
			Warning,
			TEXT("AT4GameplayFOAIController : Failed to FOBind. FOGameDataID '%s' Not Found."),
			*(InFOGameDataID.ToString())
		);
		return false;
	}

	AIDataLoadState = ET4AIDataLoadState::AIDataLoad_NoData; // #50

	// #31
	//const TCHAR* DebugTableName = *(InFOGameDataID.ToString());
	//BlackboardAssetLoader.Load(InBlackboardDataPath, false, DebugTableName);
	//BehaviorTreeAssetLoader.Load(InBehaviorTreePath, false, DebugTableName);
	FOGameDataID = InFOGameDataID;
	return true;
}
