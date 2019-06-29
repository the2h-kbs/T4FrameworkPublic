// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Framework/Classes//AI/T4AIController.h"
#include "T4Framework/Public/T4FrameworkAssetLoader.h" // #42
#include "Public/T4GameplayDataTypes.h" // #48
#include "T4GameplayNPCAIController.generated.h"

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

		SkillPlayTimeLeft = 0.0f;
	}

	FVector InitSpawnLocation;
	FVector NextMoveTargetLocation;
	FT4ObjectID AttackTargetObjectID;

	float IdleWaitTime;

	float SkillPlayTimeLeft;
};

struct FT4GameNPCData;
struct FT4GameItemWeaponData; // #50
class UBehaviorTree;
class IT4GameObject;
class IT4PacketHandlerSC;
UCLASS()
class T4GAMEPLAY_API AT4GameplayNPCAIController : public AT4AIController
{
	GENERATED_UCLASS_BODY()

public:
	void TickActor(
		float InDeltaTime,
		enum ELevelTick InTickType,
		FActorTickFunction& InThisTickFunction
	) override;

public:
	// IT4GameController
	ET4ControllerType GetType() const override { return ET4ControllerType::NPC; }

public:
	bool Bind(const FT4GameDataID& InNPCGameDataID); // #31, #50

	IT4GameObject* FindNearestEnemyByAttackRange(); // #50
	IT4GameObject* FindNearestEnemyBySensoryRange(); // #34, #50

	bool TryGoToAttackDistance(
		const FVector& InOriginLocation,
		float InTargetCapsuleRadius,
		FVector& OutTargetLocation
	); // #50

	bool IsAttacking(); // #50
	bool TryNormalAttack(const FT4ObjectID& InTargetGameObjectID); // #50

	FT4NPCAIMemory& GetAIMemory() { return AIMemory; } // #50

protected:
	void Reset() override; // #50
	void AIStart() override; // #50

private:
	bool CheckAsyncLoading();

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
