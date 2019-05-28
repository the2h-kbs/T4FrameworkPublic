// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "AssetTypeCategories.h"

/**
  * #39
 */
#if WITH_EDITOR

class UObject;
T4ENGINEED_API UObject* T4EngineEdAssetNew(
	UClass* InAssetClass,
	const FName InCallingContext,
	const FString& InAssetName,
	const FString& InPackagePath
);

T4ENGINEED_API bool T4EngineEdAssetSave(
	UObject* InSaveObject,
	bool bInCheckDirty
);

class UT4ContiAsset;
class UT4EntityAsset;
DECLARE_DELEGATE_TwoParams(FOnT4ContiAssetTypeAction, UT4ContiAsset*, const TSharedPtr<IToolkitHost>&);
DECLARE_DELEGATE_TwoParams(FOnT4EntityAssetTypeAction, UT4EntityAsset*, const TSharedPtr<IToolkitHost>&);

T4ENGINEED_API FOnT4ContiAssetTypeAction& T4EngineEdOnContiAssetTypeActionGet();
T4ENGINEED_API FOnT4EntityAssetTypeAction& T4EngineEdOnEntityAssetTypeActionGet();

T4ENGINEED_API EAssetTypeCategories::Type T4EngineEdAssetCategoryGet(); // #42

#endif
