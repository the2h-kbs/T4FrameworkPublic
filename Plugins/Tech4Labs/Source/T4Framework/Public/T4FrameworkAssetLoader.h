// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/T4EngineUtils.h"

/**
  *
 */
class FT4BlackboardAssetLoader : public FT4AssetLoader
{
public:
	explicit FT4BlackboardAssetLoader() {}
	~FT4BlackboardAssetLoader() { Reset(); }

	class UBlackboardData* GetBlackboardData() const;
};

class FT4BehaviorTreeAssetLoader : public FT4AssetLoader
{
public:
	explicit FT4BehaviorTreeAssetLoader() {}
	~FT4BehaviorTreeAssetLoader() { Reset(); }

	class UBehaviorTree* GetBehaviorTree() const;
};
