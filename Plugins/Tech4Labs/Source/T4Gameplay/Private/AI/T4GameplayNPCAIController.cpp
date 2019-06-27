// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "Classes/AI/T4GameplayNPCAIController.h"

#include "Network/Protocol/T4PacketSC_Status.h"
#include "Gameplay/T4GameplayInstance.h"

#include "GameDB/T4GameDB.h"

#include "T4Core/Public/T4CoreMinimal.h"
#include "T4Engine/Public/T4Engine.h"
#include "T4Framework/Public/T4Framework.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "T4GameplayInternal.h"

static const FName HomePositionKey(TEXT("HomePosition"));

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/AIController/
 */
AT4GameplayNPCAIController::AT4GameplayNPCAIController(const FObjectInitializer& ObjectInitializer) 
	: Super(ObjectInitializer)
	, NPCGameData(nullptr)
	, AIDataLoadState(ET4AIDataLoadState::AIDataLoad_Ready) // #50
{
}

void AT4GameplayNPCAIController::TickActor(
	float InDeltaTime,
	enum ELevelTick InTickType,
	FActorTickFunction& InThisTickFunction
)
{
	Super::TickActor(InDeltaTime, InTickType, InThisTickFunction);

	if (!CheckAsyncLoading())
	{
		return;
	}

	// advance
}

bool AT4GameplayNPCAIController::CheckAsyncLoading()
{
	if (ET4AIDataLoadState::AIDataLoad_Loading != AIDataLoadState)
	{
		return true;
	}
	if (!TargetObjectID.IsValid())
	{
		return false;
	}
	if (!BlackboardAssetLoader.IsBinded())
	{
		if (!BlackboardAssetLoader.IsLoadCompleted())
		{
			return false;
		}
		BlackboardDataAsset = BlackboardAssetLoader.GetBlackboardData();
		BlackboardAssetLoader.SetBinded();
	}
	if (!BehaviorTreeAssetLoader.IsBinded())
	{
		if (!BehaviorTreeAssetLoader.IsLoadCompleted())
		{
			return false;
		}
		BehaviorTreeAsset = BehaviorTreeAssetLoader.GetBehaviorTree();
		BehaviorTreeAssetLoader.SetBinded();
	}
	check(nullptr != BlackboardDataAsset);
	check(nullptr != BehaviorTreeAsset);
	if (!UseBlackboard(BlackboardDataAsset, Blackboard))
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("AT4GameplayNPCAIController : failed to bind blackboard!")
		);
		return true;
	}
	{
		IT4GameObject* TargetObject = GetTargetObject();
		check(nullptr != TargetObject);
		Blackboard->SetValueAsVector(HomePositionKey, TargetObject->GetRootLocation());
	}
	if (!RunBehaviorTree(BehaviorTreeAsset))
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("AT4GameplayNPCAIController : failed to run behavior tree!")
		);
	}
	else
	{
#if WITH_EDITOR
		if (T4CoreLayer::IsLevelEditor(LayerType))
		{
			// #34 : 게임 모드일 경우만 InitializeComponent 가 되며 Blackboard 가 세팅되어 별도 처리함
			GetBrainComponent()->InitializeComponent();
		}
#endif
	}
	AIDataLoadState = ET4AIDataLoadState::AIDataLoad_Loaded;
	return true;
}

void AT4GameplayNPCAIController::Reset() // #50
{
	// WARN : AsyncLoad 가 걸렸을 수 있음으로 종료 시 명시적으로 Reset 을 호출해야 한다.
	BlackboardAssetLoader.Reset();
	BehaviorTreeAssetLoader.Reset();
}

void AT4GameplayNPCAIController::AIStart() // #50
{
	IT4PacketHandlerSC* PacketHandlerSC = GetPacketHandlerSC();
	if (nullptr == PacketHandlerSC)
	{
		return;
	}
	check(nullptr != NPCGameData);
	if (NPCGameData->RawData.MainWeaponDataID.IsValid())
	{
		FT4PacketEquipSC NewPacketSC;
		NewPacketSC.ObjectID = GetTargetObjectID();
		NewPacketSC.ItemWeaponDataID = NPCGameData->RawData.MainWeaponDataID;
		NewPacketSC.bMainWeapon = true; // #48

		check(NewPacketSC.ObjectID.IsValid());

		PacketHandlerSC->DoBroadcastPacketForServer(&NewPacketSC);
	}
}

bool AT4GameplayNPCAIController::Bind(
	const FT4GameDataID& InNPCGameDataID
)
{
	check(nullptr == NPCGameData);
	FT4GameDB& GameDB = GetGameDB();
	NPCGameData = GameDB.GetGameData<FT4GameNPCData>(InNPCGameDataID);
	if (nullptr == NPCGameData)
	{
		UE_LOG(
			LogT4Gameplay,
			Warning,
			TEXT("AT4GameplayNPCAIController : Failed to NPCBind. NPCGameDataID '%s' Not Found."),
			*(InNPCGameDataID.ToString())
		);
		return false;
	}

	AIDataLoadState = ET4AIDataLoadState::AIDataLoad_NoData; // #50

	for (;;)
	{
		const FSoftObjectPath BlackboardDataPath = NPCGameData->RawData.BlackboardDataPath.ToSoftObjectPath();
		if (!BlackboardDataPath.IsValid())
		{
			// TODO : 없어도 스폰이 되도록 수정 필요!
			UE_LOG(
				LogT4Gameplay,
				Error,
				TEXT("FT4PacketHandlerCS : Failed to NPCBind. BlackboardData Not Found."),
				*(InNPCGameDataID.ToString())
			);
			break;
		}
		const FSoftObjectPath BehaviorTreePath = NPCGameData->RawData.BehaviorTreePath.ToSoftObjectPath();
		if (!BehaviorTreePath.IsValid())
		{
			// TODO : 없어도 스폰이 되도록 수정 필요!
			UE_LOG(
				LogT4Gameplay,
				Error,
				TEXT("FT4PacketHandlerCS : Failed to NPCBind. BehaviorTree Not Found."),
				*(InNPCGameDataID.ToString())
			);
			break;
		}

		// #31
		const TCHAR* DebugTableName = *(InNPCGameDataID.ToString());
		BlackboardAssetLoader.Load(BlackboardDataPath, false, DebugTableName);
		BehaviorTreeAssetLoader.Load(BehaviorTreePath, false, DebugTableName);
		AIDataLoadState = ET4AIDataLoadState::AIDataLoad_Loading; // #50
		break;
	}

	NPCGameDataID = InNPCGameDataID;
	return true;
}

IT4GameObject* AT4GameplayNPCAIController::FindBestNearestEnemy(float InMaxDistance)
{
	// #34
	IT4GameObject* TargetObject = GetTargetObject();
	if (nullptr == TargetObject)
	{
		return nullptr;
	}
	IT4GameWorld* GameWorld = T4EngineWorldGet(LayerType);
	check(nullptr != GameWorld);

	TArray<IT4GameObject*> TargetObjects;
	bool bResult = GameWorld->QueryNearestObjects(
		TargetObject->GetRootLocation(),
		InMaxDistance,
		ET4ControllerType::Player,
		TargetObjects
	);
	if (!bResult)
	{
		return nullptr;
	}

	check(0 < TargetObjects.Num());
	return TargetObjects[0];
}

IT4PacketHandlerSC* AT4GameplayNPCAIController::GetPacketHandlerSC() const
{
	check(ET4LayerType::Max > LayerType);
	IT4GameFramework* GameFramework = T4FrameworkGet(LayerType);
	check(nullptr != GameFramework);
	FT4GameplayInstance* GameplayInstance = FT4GameplayInstance::CastGameplayInstance(
		GameFramework->GetGameplayHandler()
	);
	if (nullptr == GameplayInstance)
	{
		return nullptr;
	}
	return GameplayInstance->GetPacketHandlerSC();
}
