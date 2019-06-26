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
class UBehaviorTree;
class UBlackboardData;
class IT4GameObject;
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
	bool SetTableData(
		const FT4GameDataID& InNPCGameDataID,
		const FSoftObjectPath& InBehaviorTreePath,
		const FSoftObjectPath& InBlackboardDataPath
	); // #31

	IT4GameObject* FindBestNearestEnemy(float InMaxDistance); // #34

protected:
	void Reset() override; // #50

private:
	bool CheckAsyncLoading();

private:
	FT4GameDataID NPCGameDataID;

	bool bAIDataLoaded;

	FT4BlackboardAssetLoader BlackboardAssetLoader;
	FT4BehaviorTreeAssetLoader BehaviorTreeAssetLoader;

	UPROPERTY(transient)
	UBlackboardData* BlackboardDataAsset;

	/* Cached BT component */
	UPROPERTY(transient)
	UBehaviorTree* BehaviorTreeAsset;
};
