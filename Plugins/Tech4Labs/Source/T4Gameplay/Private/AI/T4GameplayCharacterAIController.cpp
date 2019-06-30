// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "Classes/AI/T4GameplayCharacterAIController.h"

#include "Network/Protocol/T4PacketSC_Action.h" // #50
#include "Network/Protocol/T4PacketSC_Status.h"
#include "Network/Protocol/T4PacketSC_Move.h"
#include "Network/Protocol/T4PacketSC.h"

#include "Gameplay/T4GameplayInstance.h"

#include "GameDB/T4GameDB.h"

#include "T4Core/Public/T4CoreMinimal.h"
#include "T4Engine/Public/T4Engine.h"
#include "T4Framework/Public/T4Framework.h"
#include "T4Framework/Classes/AI/Component/T4PathFollowingComponent.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"

#include "T4GameplayInternal.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/AIController/
 */
AT4GameplayCharacterAIController::AT4GameplayCharacterAIController(
	const FObjectInitializer& ObjectInitializer
)	: Super(ObjectInitializer)
	, NPCGameData(nullptr)
	, MainWeaponGameData(nullptr) // #50
	, AIDataLoadState(ET4AIDataLoadState::AIDataLoad_Ready) // #50
{
	check(nullptr != OverridePathFollowingComponent); // #50
	OverridePathFollowingComponent->GetOnCallbackMoveTo().BindUObject(
		this, &AT4GameplayCharacterAIController::HandleOnCallbackMoveTo
	);
}

void AT4GameplayCharacterAIController::TickActor(
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

	// TODO : Used Timer
	FT4NPCAIMemory& NPCAIMemory = GetAIMemory();
	if (NPCAIMemory.bActiveSkill) // #50
	{
		NPCAIMemory.SkillPlayTimeLeft -= InDeltaTime;
		if (0.0f >= NPCAIMemory.SkillPlayTimeLeft)
		{
			NPCAIMemory.bActiveSkill = false;
		}
	}
	if (NPCAIMemory.bActiveAggressive)
	{
		NPCAIMemory.AggressiveClearTimeLeft -= InDeltaTime;
		if (0.0f >= NPCAIMemory.AggressiveClearTimeLeft)
		{
			NPCAIMemory.bActiveAggressive = false;
		}
	}
}

bool AT4GameplayCharacterAIController::CheckAsyncLoading()
{
	if (ET4AIDataLoadState::AIDataLoad_Loading != AIDataLoadState)
	{
		return true;
	}
	if (!GameObjectID.IsValid())
	{
		return false;
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
	check(nullptr != BehaviorTreeAsset);
	{
		IT4GameObject* TargetObject = GetGameObject();
		check(nullptr != TargetObject);
		GetAIMemory().InitSpawnLocation = TargetObject->GetRootLocation();
	}
	if (!RunBehaviorTree(BehaviorTreeAsset))
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("AT4GameplayCharacterAIController : failed to run behavior tree!")
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

void AT4GameplayCharacterAIController::AIReady() // #50
{
	check(nullptr != OverridePathFollowingComponent);
}

void AT4GameplayCharacterAIController::AIStart() // #50
{
	IT4PacketHandlerSC* PacketHandlerSC = GetPacketHandlerSC();
	check(nullptr != PacketHandlerSC);
	check(nullptr != NPCGameData);
	FT4GameDB& GameDB = GetGameDB();
	if (NPCGameData->RawData.MainWeaponDataID.IsValid())
	{
		check(nullptr == MainWeaponGameData);
		MainWeaponGameData = GameDB.GetGameData<FT4GameItemWeaponData>(NPCGameData->RawData.MainWeaponDataID);
		if (nullptr != MainWeaponGameData)
		{
			FT4PacketEquipSC NewPacketSC;
			NewPacketSC.ObjectID = GetGameObjectID();
			NewPacketSC.ItemWeaponDataID = NPCGameData->RawData.MainWeaponDataID;
			NewPacketSC.bMainWeapon = true; // #48

			check(NewPacketSC.ObjectID.IsValid());

			PacketHandlerSC->DoBroadcastPacketForServer(&NewPacketSC);
		}
		else
		{
			UE_LOG(
				LogT4Gameplay,
				Warning,
				TEXT("AT4GameplayCharacterAIController : Failed to MainWeapon Equip. MainWeaponDataID '%s' Not Found."),
				*(NPCGameData->RawData.MainWeaponDataID.ToString())
			);
		}
	}
}

void AT4GameplayCharacterAIController::AIEnd() // #50
{
	// WARN : AsyncLoad 가 걸렸을 수 있음으로 종료 시 명시적으로 Reset 을 호출해야 한다.
	BehaviorTreeAssetLoader.Reset();
}

void AT4GameplayCharacterAIController::HandleOnCallbackMoveTo(
	const FVector& InMoveVelocity,
	bool bInForceMaxSpeed // #50
) // #42, #34
{
	if (!HasGameObject())
	{
		return;
	}
	IT4PacketHandlerSC* PacketHandlerSC = GetPacketHandlerSC();
	check(nullptr != PacketHandlerSC);
	FT4PacketMoveToSC NewPacketSC;
	NewPacketSC.ObjectID = GetGameObjectID();
	NewPacketSC.MoveDirection = InMoveVelocity; // #50
	NewPacketSC.MoveDirection.Normalize();
	NewPacketSC.MoveSpeed = GetCurrentMoveSpeed(); // #50
	NewPacketSC.HeadYawAngle = NewPacketSC.MoveDirection.Rotation().Yaw; // #50 : 이동 방향으로 방향 수정
	NewPacketSC.bForceMaxSpeed = bInForceMaxSpeed; // #50
	PacketHandlerSC->OnBroadcastPacket(&NewPacketSC);
}

bool AT4GameplayCharacterAIController::Bind(
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
			TEXT("AT4GameplayCharacterAIController : Failed to NPCBind. NPCGameDataID '%s' Not Found."),
			*(InNPCGameDataID.ToString())
		);
		return false;
	}

	AIDataLoadState = ET4AIDataLoadState::AIDataLoad_NoData; // #50

	for (;;)
	{
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
		BehaviorTreeAssetLoader.Load(BehaviorTreePath, false, DebugTableName);
		AIDataLoadState = ET4AIDataLoadState::AIDataLoad_Loading; // #50
		break;
	}

	NPCGameDataID = InNPCGameDataID;
	return true;
}

bool AT4GameplayCharacterAIController::IsAttacking() const // #50
{
	return AIMemory.bActiveSkill;
}

float AT4GameplayCharacterAIController::GetCurrentMoveSpeed() const // #50
{
	check(nullptr != NPCGameData);
	switch (AIMemory.MoveSpeedType)
	{
	case ET4MoveSpeedType::Walk:
		return NPCGameData->RawData.WalkSpeed;
	case ET4MoveSpeedType::Run:
		return NPCGameData->RawData.RunSpeed;
	case ET4MoveSpeedType::FastRun:
		return (0.0f < NPCGameData->RawData.FastRunSpeed)
			? NPCGameData->RawData.FastRunSpeed : NPCGameData->RawData.RunSpeed; // Temp
	}
	return 0.0f;
}

bool AT4GameplayCharacterAIController::IsCurrentAggressive() const // #50
{
	check(nullptr != NPCGameData);
	if (NPCGameData->RawData.bAggressive)
	{
		return true;
	}
	return AIMemory.bActiveAggressive;
}

IT4GameObject* AT4GameplayCharacterAIController::FindNearestObject(
	ET4AITargetType InAITargetType,
	float InMaxDistance
) // #50
{
	// TODO : InAITargetType::AITarget_Enemy
	IT4GameObject* OwnerGameObject = GetGameObject();
	if (nullptr == OwnerGameObject)
	{
		return nullptr;
	}
	IT4GameWorld* GameWorld = T4EngineWorldGet(LayerType);
	check(nullptr != GameWorld);
	TArray<IT4GameObject*> TargetObjects;
	bool bResult = GameWorld->QueryNearestObjects(
		OwnerGameObject->GetRootLocation(),
		InMaxDistance, // #50
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

IT4GameObject* AT4GameplayCharacterAIController::FindNearestEnemyByAttackRange() // #34
{
	check(nullptr != NPCGameData);
	if (nullptr == MainWeaponGameData)
	{
		return false;
	}
	IT4GameObject* OwnerGameObject = GetGameObject();
	if (nullptr == OwnerGameObject)
	{
		return nullptr;
	}
	const FT4GameObjectProperty& OwnerObjectProperty = OwnerGameObject->GetPropertyConst();
	// #50 : 대략적인 공격 가능한 거리는 나와 타겟의 Radius 에 무기의 공격거리, 나중에는 더 추가해주어야 한다.
	const float TryAttackDistance = OwnerObjectProperty.CapsuleRadius
								  + MainWeaponGameData->RawData.AttackRange;
	IT4GameObject* TargetObject = FindNearestObject(
		ET4AITargetType::AITarget_Enemy,
		TryAttackDistance
	);
	return TargetObject;
}

IT4GameObject* AT4GameplayCharacterAIController::FindNearestEnemyBySensoryRange() // #34
{
	check(nullptr != NPCGameData);
	IT4GameObject* TargetObject = FindNearestObject(
		ET4AITargetType::AITarget_Enemy,
		NPCGameData->RawData.SensoryRange
	);
	return TargetObject;
}

bool AT4GameplayCharacterAIController::TryGoToAttackDistance(
	const FVector& InOriginLocation,
	float InTargetCapsuleRadius,
	FVector& OutTargetLocation
) // #50
{
	check(nullptr != NPCGameData);
	if (nullptr == MainWeaponGameData)
	{
		return false;
	}
	IT4GameObject* OwnerGameObject = GetGameObject();
	if (nullptr == OwnerGameObject)
	{
		return false;
	}
	const FT4GameObjectProperty& OwnerObjectProperty = OwnerGameObject->GetPropertyConst();
	IT4GameFramework* ServerFramework = T4FrameworkGet(LayerType);
	check(nullptr != ServerFramework);
	IT4GameWorld* GameWorld = ServerFramework->GetGameWorld();
	check(nullptr != GameWorld);
	// #50 : 대략적인 공격 가능한 거리는 나와 타겟의 Radius 에 무기의 공격거리, 나중에는 더 추가해주어야 한다.
	const float TryAttackDistance = InTargetCapsuleRadius
						  	      + OwnerObjectProperty.CapsuleRadius
								  + MainWeaponGameData->RawData.AttackRange;
	if (!GameWorld->GetRandomLocationInNavigableRadius(
		InOriginLocation, 
		TryAttackDistance,
		OutTargetLocation
	))
	{
		return false;
	}
	return true;
}

bool AT4GameplayCharacterAIController::TryGoToRoaming(
	FVector& OutTargetLocation
) // #50
{
	check(nullptr != NPCGameData);
	IT4GameObject* OwnerGameObject = GetGameObject();
	if (nullptr == OwnerGameObject)
	{
		return false;
	}
	const FVector OriginPosition = OwnerGameObject->GetRootLocation();
	const FT4GameObjectProperty& OwnerObjectProperty = OwnerGameObject->GetPropertyConst();
	IT4GameFramework* ServerFramework = T4FrameworkGet(LayerType);
	check(nullptr != ServerFramework);
	IT4GameWorld* GameWorld = ServerFramework->GetGameWorld();
	check(nullptr != GameWorld);
	if (!GameWorld->GetRandomLocationInNavigableRadius(
		OriginPosition,
		NPCGameData->RawData.RomaingRange,
		OutTargetLocation
	))
	{
		return false;
	}
	return true;
}

bool AT4GameplayCharacterAIController::TryNormalAttack(
	const FT4ObjectID& InTargetGameObjectID
) // #50
{
	check(nullptr != NPCGameData);
	if (nullptr == MainWeaponGameData)
	{
		return false;
	}
	if (!MainWeaponGameData->RawData.SkillSetNameID.IsValid())
	{
		return false;
	}
	// TODO : CombaAttack
	FT4GameDB& GameDB = GetGameDB();
	const FT4GameSkillSetData* SkillSetData = GameDB.GetGameData<FT4GameSkillSetData>(
		MainWeaponGameData->RawData.SkillSetNameID
	);
	if (nullptr == SkillSetData)
	{
		return false;
	}
	if (!SkillSetData->RawData.ComboPrimaryAttackNameID.IsValid())
	{
		return false;
	}
	const FT4GameSkillData* SkillData = GameDB.GetGameData<FT4GameSkillData>(
		SkillSetData->RawData.ComboPrimaryAttackNameID
	);
	if (nullptr == SkillData)
	{
		return false;
	}
	IT4PacketHandlerSC* PacketHandlerSC = GetPacketHandlerSC();
	if (nullptr == PacketHandlerSC)
	{
		return false;
	}
	FT4PacketAttackSC NewPacketSC;
	NewPacketSC.ObjectID = GetGameObjectID();
	NewPacketSC.SkillDataID = SkillSetData->RawData.ComboPrimaryAttackNameID;
	NewPacketSC.TargetrObjectID = InTargetGameObjectID;
	check(NewPacketSC.ObjectID.IsValid());
	PacketHandlerSC->DoBroadcastPacketForServer(&NewPacketSC);

	FT4NPCAIMemory& NPCAIMemory = GetAIMemory();
	NPCAIMemory.bActiveSkill = true;
	NPCAIMemory.SkillPlayTimeLeft = SkillData->RawData.DurationSec;
	return true;
}

IT4PacketHandlerSC* AT4GameplayCharacterAIController::GetPacketHandlerSC() const
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
