// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Classes/Action/T4ActionTypes.h"

/**
  *
 */
#if WITH_EDITOR

struct FSelectedEditorActionInfo
{
public:
	int32 ParentHierarchyIndex;
	int32 ActionArrayIndex;
	int32 ActionHierarchyIndex;

public:
	FSelectedEditorActionInfo()
		: ParentHierarchyIndex(INDEX_NONE)
		, ActionArrayIndex(INDEX_NONE)
		, ActionHierarchyIndex(INDEX_NONE)
	{
	}
};

struct FSelectedEditorActionTypeInfo
{
public:
	ET4ActionType ActionType;
	TMap<int32, FSelectedEditorActionInfo> ActionInfoMap; // int32 = ActionArrayIndex;

public:
	FSelectedEditorActionTypeInfo()
		: ActionType(ET4ActionType::None)
	{
	}
};

#define FSelectedEditorActionTypeMap TMap<ET4ActionType, FSelectedEditorActionTypeInfo>

#endif