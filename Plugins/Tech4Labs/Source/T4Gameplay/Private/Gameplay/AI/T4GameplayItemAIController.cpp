// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "Classes/AI/T4GameplayItemAIController.h"

#include "GameDB/T4GameDB.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"

#include "T4GameplayInternal.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/AIController/
 */
AT4GameplayItemAIController::AT4GameplayItemAIController(const FObjectInitializer& ObjectInitializer) 
	: Super(ObjectInitializer)
	, AIDataLoadState(ET4AIDataLoadState::AIDataLoad_Ready) // #50
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

void AT4GameplayItemAIController::NotifyAIEnd() // #50
{
	// WARN : AsyncLoad 가 걸렸을 수 있음으로 종료 시 명시적으로 Reset 을 호출해야 한다.
	//BlackboardAssetLoader.Reset();
	//BehaviorTreeAssetLoader.Reset();
}

void AT4GameplayItemAIController::NotifyAIStart() // #50
{

}

bool AT4GameplayItemAIController::Bind(
	const FT4GameDataID& InItemGameDataID
)
{
	//FSoftObjectPath BlackboardDataPath;
	//FSoftObjectPath BehaviorTreePath;

	FT4GameDB& GameDB = GetGameDB();
	bool bResult = false;
	if (ET4GameDataType::Item_Weapon == InItemGameDataID.Type)
	{
		const FT4GameItemWeaponData* ItemWeaponData = GameDB.GetGameData<FT4GameItemWeaponData>(InItemGameDataID);
		if (nullptr != ItemWeaponData)
		{
			//BlackboardDataPath = ItemWeaponData->RawData.BlackboardDataPath.ToSoftObjectPath();
			//BehaviorTreePath = ItemWeaponData->RawData.BehaviorTreePath.ToSoftObjectPath();
			bResult = true;
		}
	}
	else
	{
		const FT4GameItemCostumeData* ItemCostumeData = GameDB.GetGameData<FT4GameItemCostumeData>(InItemGameDataID);
		if (nullptr != ItemCostumeData)
		{
			//BlackboardDataPath = ItemCostumeData->RawData.BlackboardDataPath.ToSoftObjectPath();
			//BehaviorTreePath = ItemCostumeData->RawData.BehaviorTreePath.ToSoftObjectPath();
			bResult = true;
		}
	}

	if (!bResult)
	{
		UE_LOG(
			LogT4Gameplay,
			Warning,
			TEXT("AT4GameplayItemAIController :  Failed to ItemBind. ItemGameDataID '%s' Not Found."),
			*(InItemGameDataID.ToString())
		);
		return false;
	}

	AIDataLoadState = ET4AIDataLoadState::AIDataLoad_NoData; // #50

	// #31
	//const TCHAR* DebugTableName = *(InItemGameDataID.ToString());
	//BlackboardAssetLoader.Load(InBlackboardDataPath, false, DebugTableName);
	//BehaviorTreeAssetLoader.Load(InBehaviorTreePath, false, DebugTableName);
	ItemGameDataID = InItemGameDataID;
	return true;
}
