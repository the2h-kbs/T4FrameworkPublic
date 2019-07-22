// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Public/T4GameplayTypes.h"
#include "T4Framework/Classes/Controller/AI/T4NPCAIController.h"
#include "T4Framework/Public/T4FrameworkAssetLoader.h" // #42
#include "Public/T4GameplayDataTypes.h" // #48
#include "T4GameplayCharacterAIController.generated.h"

/**
  * WARN : AI Controller 는 서버에서만 사용하고, 클라리언트에서는 사용하지 않음에 유의할 것!
  * http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/AIController/
 */
struct FT4NPCAIMemory // #50
{
	FT4NPCAIMemory()
	{
		Reset();
	}

	void Reset()
	{
		InitSpawnLocation = FVector::ZeroVector;
		MoveTargetLocation = FVector::ZeroVector;
		AttackTargetObjectID.SetNone();

		IdleWaitTime = 5.0f;

		bActiveSkill = false;
		SkillPlayTimeLeft = 0.0f;

		bActiveAggressive = false;
		AggressiveClearTimeLeft = 0.0f;

		MoveSpeedType = ET4MoveSpeed::Stand;
	}

	FVector InitSpawnLocation;
	FVector MoveTargetLocation;

	FT4ObjectID AttackTargetObjectID;

	float IdleWaitTime;

	bool bActiveSkill;
	float SkillPlayTimeLeft;

	bool bActiveAggressive;
	float AggressiveClearTimeLeft;

	ET4MoveSpeed MoveSpeedType;
};

struct FT4GameNPCData;
struct FT4GameItemWeaponData; // #50
class UBehaviorTree;
class IT4GameObject;
class IT4PacketHandlerSC;
UCLASS()
class T4GAMEPLAY_API AT4GameplayCharacterAIController : public AT4NPCAIController
{
	GENERATED_UCLASS_BODY()

public:
	void TickActor(
		float InDeltaTime,
		enum ELevelTick InTickType,
		FActorTickFunction& InThisTickFunction
	) override;

public:
	bool Bind(const FT4GameDataID& InNPCGameDataID); // #31, #50

	bool IsAttacking() const; // #50
	bool IsCurrentAggressive() const; // #50

	IT4GameObject* FindNearestEnemyByAttackRange(); // #50
	IT4GameObject* FindNearestEnemyBySensoryRange(); // #34, #50

	bool TryGoToAttackDistance(
		const FVector& InStartLocation,
		const FVector& InEndLocation,
		float InTargetCapsuleRadius,
		FVector& OutTargetLocation
	); // #50

	bool DoRoaming(FVector& OutTargetLocation); // #50
	bool DoNormalAttack(const FT4ObjectID& InTargetGameObjectID); // #50
	bool DoMoveTo(const FVector& InMoveVelocity, bool bForceMaxSpeed); // #52
	bool DoMoveStop(bool bSyncLocation); // #52
	bool DoUpdateMoveSpeed(ET4MoveSpeed InMoveSpeedType); // #52

	bool TakeEffectDamage(
		const FT4GameEffectDataID& InEffectDataID,
		const FT4ObjectID& InAttackerObjectID
	); // #50

	const FT4NPCAIMemory& GetAIMemoryConst() const { return AIMemory; } // #50

	void SetMoveTargetLocation(const FVector& InMoveTargetLocation) // #52
	{
		AIMemory.MoveTargetLocation = InMoveTargetLocation;
	}
	void SetAttackTargetObjectID(const FT4ObjectID& InTargetObjectID) // #52
	{
		AIMemory.AttackTargetObjectID = InTargetObjectID;
	}

protected:
	void NotifyAIReady() override; // #50
	void NotifyAIStart() override; // #50
	void NotifyAIEnd() override; // #50

	void HandleOnHitOverlap(
		const FName& InEventName,
		IT4GameObject* InHitGameObject,
		const FHitResult& InSweepResult
	); // #49

	void ClearHitOverlapEvent(); // #49

	void HandleOnCallbackMoveTo(
		const FVector& InMoveVelocity,
		bool bForceMaxSpeed // #52 : MovementComponet::MaxSpeed 를 사용할지에 대한 Flag, 기본값이 false 로 Velocity 에서 Speed 를 얻는다. 동기화 이슈!!
	); // #42, #34
	void HandleOnCallbackMoveStop(); // #52

private:
	bool CheckAsyncLoading();

	IT4GameObject* FindNearestObject(
		ET4AITargetType InAITargetType,
		float InMaxDistance
	); // #50

	IT4PacketHandlerSC* GetPacketHandlerSC() const; // #45

	float GetMoveSpeedSelected() const; // #50

	void UpdateAggressive();

private:
	FT4GameDataID NPCGameDataID;

	const FT4GameNPCData* NPCGameData; // #50
	const FT4GameItemWeaponData* MainWeaponGameData; // #50

	ET4AIDataLoadState AIDataLoadState; // #50
	FT4BehaviorTreeAssetLoader BehaviorTreeAssetLoader;

	/* Cached BT component */
	UPROPERTY(transient)
	UBehaviorTree* BehaviorTreeAsset;

	FT4NPCAIMemory AIMemory; // #50 : 필요하다면 Blackboard 로 변경하겠지만, 현재는 장점이 없어보인다.

#if (WITH_EDITOR || WITH_SERVER_CODE)
	bool bHitOverlapEventStarted;
	FT4GameSkillDataID UseSkillDataID;
	float HitOverlapEventDelayTimeSec;
	float HitOverlapEventClearTimeLeft;
	FDelegateHandle HitOverlapDelegateHandle; // #49
#endif
};
