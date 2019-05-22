// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
  * #39
 */
#if WITH_EDITOR

class UObject;
T4ASSETED_API UObject* T4AssetEdNew(
	UClass* InAssetClass,
	const FName InCallingContext,
	const FString& InAssetName,
	const FString& InPackagePath
);

T4ASSETED_API bool T4AssetEdSave(
	UObject* InSaveObject,
	bool bInCheckDirty
);

#endif
