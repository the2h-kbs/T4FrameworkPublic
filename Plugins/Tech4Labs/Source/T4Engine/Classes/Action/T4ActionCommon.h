// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ActionBase.h"
#include "T4ActionCommon.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG

// ET4ActionType::Branch // #54
// ET4ActionType::Conti
// ET4ActionType::Stop

// #54
USTRUCT()
struct T4ENGINE_API FT4BranchAction : public FT4BaseAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	ET4BranchCondition Contition;

	UPROPERTY(EditAnywhere)
	FName ContitionName;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<class UT4ContiAsset> ContiAsset;

	UPROPERTY(EditAnywhere)
	ET4LoadingPolicy LoadingPolicy;

public:
	FT4BranchAction()
		: FT4BaseAction(StaticActionType())
		, Contition(ET4BranchCondition::Default)
		, ContitionName(NAME_None)
		, LoadingPolicy(ET4LoadingPolicy::Default)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Branch; }

	FString ToString() const override
	{
		return FString(TEXT("Action:Branch"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4ContiAction : public FT4BaseAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<class UT4ContiAsset> ContiAsset;

	UPROPERTY(EditAnywhere)
	ET4LoadingPolicy LoadingPolicy;

public:
	FT4ContiAction()
		: FT4BaseAction(StaticActionType())
		, LoadingPolicy(ET4LoadingPolicy::Default)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Conti; }

	FString ToString() const override
	{
		return FString(TEXT("Action:Conti"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4StopAction : public FT4BaseAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool bSameKeyNameRemoveAll; // #20 : primary 가 아닌 Action 도 모두 삭제!

public:
	FT4StopAction()
		: FT4BaseAction(StaticActionType())
		, bSameKeyNameRemoveAll(false)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Stop; }

	FString ToString() const override
	{
		return FString(TEXT("Action:Stop"));
	}
};
