// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ActionBase.h"
#include "T4Action_Common.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG

// ET4ActionType::Conti
// ET4ActionType::Stop

class UT4ActionContiAsset;

USTRUCT()
struct T4ENGINE_API FT4ContiAction : public FT4ObjectAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UT4ActionContiAsset> ContiAsset;

	UPROPERTY(EditAnywhere)
	bool bUsePreloading;

public:
	FT4ContiAction()
		: FT4ObjectAction(StaticActionType())
		, bUsePreloading(true)
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
	bool bNoPrimaryKeyDestroy; // #20 : primary 가 아닌 Action 도 모두 삭제!

public:
	FT4StopAction()
		: FT4ObjectAction(StaticActionType())
		, bNoPrimaryKeyDestroy(false)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Stop; }

	FString ToString() const override
	{
		return FString(TEXT("OAction:Stop"));
	}
};
