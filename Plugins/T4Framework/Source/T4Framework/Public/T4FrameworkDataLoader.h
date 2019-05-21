// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/T4EngineUtils.h"

/**
  *
 */
class FT4BlackboardDataLoader : public FT4AssetLoader
{
public:
	explicit FT4BlackboardDataLoader() {}
	~FT4BlackboardDataLoader() { Reset(); }

	class UBlackboardData* GetBlackboardData() const;
};

class FT4BehaviorTreeDataLoader : public FT4AssetLoader
{
public:
	explicit FT4BehaviorTreeDataLoader() {}
	~FT4BehaviorTreeDataLoader() { Reset(); }

	class UBehaviorTree* GetBehaviorTree() const;
};
