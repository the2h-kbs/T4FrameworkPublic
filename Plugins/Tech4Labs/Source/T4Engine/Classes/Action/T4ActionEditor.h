// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ActionBase.h"
#include "T4ActionEditor.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG
USTRUCT()
struct T4ENGINE_API FT4EditorReloadAction : public FT4BaseAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	ET4EditorReload ReloadType;

public:
	FT4EditorReloadAction()
		: FT4BaseAction(StaticActionType())
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
		return FString(TEXT("Action:EditorReload"));
	}
};
