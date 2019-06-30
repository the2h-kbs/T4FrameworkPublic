// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Public/T4GameplayTypes.h"
#include "T4Framework/Classes//AI/T4NPCAIController.h"
#include "T4Framework/Public/T4FrameworkAssetLoader.h" // #42
#include "Public/T4GameplayDataTypes.h" // #48
#include "T4GameplayCharacterAIController.generated.h"

/**
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
		NextMoveTargetLocation = FVector::ZeroVector;
		AttackTargetObjectID.SetNone();

		IdleWaitTime = 5.0f;

		bActiveSkill = false;
		SkillPlayTimeLeft = 0.0f;

		bActiveAggressive = false;
		AggressiveClearTimeLeft = 0.0f;

		MoveSpeedType = ET4MoveSpeedType::Stand;
	}

	FVector InitSpawnLocation;
	FVector NextMoveTargetLocation;

	FT4ObjectID AttackTargetObjectID;

	float IdleWaitTime;

	bool bActiveSkill;
	float SkillPlayTimeLeft;

	bool bActiveAggressive;
	float AggressiveClearTimeLeft;

	ET4MoveSpeedType MoveSpeedType;
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
	float GetCurrentMoveSpeed() const; // #50
	bool IsCurrentAggressive() const; // #50

	IT4GameObject* FindNearestEnemyByAttackRange(); // #50
	IT4GameObject* FindNearestEnemyBySensoryRange(); // #34, #50

	bool TryGoToAttackDistance(
		const FVector& InOriginLocation,
		float InTargetCapsuleRadius,
		FVector& OutTargetLocation
	); // #50

	bool TryGoToRoaming(FVector& OutTargetLocation); // #50
	bool TryNormalAttack(const FT4ObjectID& InTargetGameObjectID); // #50

	FT4NPCAIMemory& GetAIMemory() { return AIMemory; } // #50

protected:
	void AIReady() override; // #50
	void AIStart() override; // #50
	void AIEnd() override; // #50

	void HandleOnCallbackMoveTo(const FVector& InMoveVelocity, bool bInForceMaxSpeed); // #42, #34

private:
	bool CheckAsyncLoading();

	IT4GameObject* FindNearestObject(
		ET4AITargetType InAITargetType,
		float InMaxDistance
	); // #50

	IT4PacketHandlerSC* GetPacketHandlerSC() const; // #45

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
};
