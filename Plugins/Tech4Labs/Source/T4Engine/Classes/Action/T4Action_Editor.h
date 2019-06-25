// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Action_Base.h"
#include "T4Action_Editor.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG
USTRUCT()
struct T4ENGINE_API FT4EditorReloadAction : public FT4ObjectAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	ET4EditorReloadType ReloadType;

public:
	FT4EditorReloadAction()
		: FT4ObjectAction(StaticActionType())
		, ReloadType(ET4EditorReloadType::None)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::EditorReload; }

	bool Validate(FString& OutMsg) override
	{
		if (ET4EditorReloadType::None == ReloadType)
		{
			OutMsg = TEXT("Not set ReloadType");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("OAction:EditorReload"));
	}
};
