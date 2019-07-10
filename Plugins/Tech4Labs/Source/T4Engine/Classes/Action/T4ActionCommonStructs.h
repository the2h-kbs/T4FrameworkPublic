// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ActionBaseStructs.h"
#include "T4ActionCommonStructs.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG

// ET4ActionType::Branch // #54
// ET4ActionType::Conti
// ET4ActionType::Stop

// #54
USTRUCT()
struct T4ENGINE_API FT4ContiData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<class UT4ContiAsset> ContiAsset;

	UPROPERTY(EditAnywhere)
	ET4LoadingPolicy LoadingPolicy;

public:
	FT4ContiData()
		: LoadingPolicy(ET4LoadingPolicy::Default)
	{
	}
};

// #54
USTRUCT()
struct T4ENGINE_API FT4BranchAction : public FT4ObjectAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	ET4BranchCondition Contition;

	UPROPERTY(EditAnywhere)
	TArray<FT4ContiData> ContiDatas;

public:
	FT4BranchAction()
		: FT4ObjectAction(StaticActionType())
		, Contition(ET4BranchCondition::Default)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Branch; }

	FString ToString() const override
	{
		return FString(TEXT("OAction:Branch"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4ContiAction : public FT4ObjectAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FT4ContiData ContiData;

public:
	FT4ContiAction()
		: FT4ObjectAction(StaticActionType())
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Conti; }

	FString ToString() const override
	{
		return FString(TEXT("OAction:Conti"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4StopAction : public FT4ObjectAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool bSameKeyNameRemoveAll; // #20 : primary 가 아닌 Action 도 모두 삭제!

public:
	FT4StopAction()
		: FT4ObjectAction(StaticActionType())
		, bSameKeyNameRemoveAll(false)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Stop; }

	FString ToString() const override
	{
		return FString(TEXT("OAction:Stop"));
	}
};
