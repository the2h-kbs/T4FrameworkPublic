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
struct FT4GameNPCData;
class UBehaviorTree;
class UBlackboardData;
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

	IT4GameObject* FindBestNearestEnemy(float InMaxDistance); // #34

protected:
	void Reset() override; // #50
	void AIStart() override; // #50

private:
	bool CheckAsyncLoading();

	IT4PacketHandlerSC* GetPacketHandlerSC() const; // #45

private:
	FT4GameDataID NPCGameDataID;
	const FT4GameNPCData* NPCGameData; // #50

	ET4AIDataLoadState AIDataLoadState; // #50

	FT4BlackboardAssetLoader BlackboardAssetLoader;
	FT4BehaviorTreeAssetLoader BehaviorTreeAssetLoader;

	UPROPERTY(transient)
	UBlackboardData* BlackboardDataAsset;

	/* Cached BT component */
	UPROPERTY(transient)
	UBehaviorTree* BehaviorTreeAsset;
};
