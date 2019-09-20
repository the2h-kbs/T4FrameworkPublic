// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ActionCodeBase.h"
#include "T4ActionCodeEditor.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG_CODE

// ET4ActionType::EditorReload

USTRUCT()
struct T4ENGINE_API FT4EditorReloadAction : public FT4CodeBaseAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	ET4EditorReload ReloadType;

public:
	FT4EditorReloadAction()
		: FT4CodeBaseAction(StaticActionType())
		, ReloadType(ET4EditorReload::None)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::EditorReload; }

	bool Validate(FString& OutMsg) override
	{
		if (ET4EditorReload::None == ReloadType)
		{
			OutMsg = TEXT("Not set ReloadType");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("EditorReloadAction"));
	}
};
