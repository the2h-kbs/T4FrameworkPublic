// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
  * #39
 */
#if WITH_EDITOR

class UObject;
class UTexture2D;
class UBlendSpaceBase;
class UAnimSequence;
class UT4AnimSetAsset;
class UT4ContiAsset;
class UT4EntityAsset;

T4ASSET_API UObject* T4AssetEdNew(
	UClass* InAssetClass,
	const FName InCallingContext,
	const FString& InAssetName,
	const FString& InPackagePath
);

T4ASSET_API bool T4AssetEdIsDirty(
	UObject* InCheckObject
); // #56

T4ASSET_API bool T4AssetEdSave(
	UObject* InSaveObject,
	bool bInCheckDirty
);

T4ASSET_API bool T4AssetEdSaveThumbnailImage(
	UObject* InSaveObject,
	UTexture2D* InThumbnail
);

T4ASSET_API bool T4AssetEdEntitySaveThumbnailCameraInfo(
	UT4EntityAsset* InEntityAsset,
	const FRotator& ThumbnailRotation,
	const FVector& ThumbnailLocation
);

T4ASSET_API bool T4AssetEdAnimSetAnimSequenceAddOrUpdate(
	UT4AnimSetAsset* InOutAnimSetAsset,
	const FName& InAnimMontageName,
	const FName& InAnimSequenceName,
	TSoftObjectPtr<UAnimSequence>& InAnimSequence,
	FString& OutErrorMessage
);

T4ASSET_API bool T4AssetEdAnimSetAnimSequenceRemove(
	UT4AnimSetAsset* InOutAnimSetAsset,
	const FName& InAnimMontageName,
	const FName& InAnimSequenceName,
	FString& OutErrorMessage
);

T4ASSET_API bool T4AssetEdAnimSetBaseBlendSpaceAddOrUpdate(
	UT4AnimSetAsset* InOutAnimSetAsset,
	const FName& InBlendSpaceName,
	TSoftObjectPtr<UBlendSpaceBase>& InBlendSpace,
	FString& OutErrorMessage
);

T4ASSET_API bool T4AssetEdAnimSetBaseBlendSpaceRemove(
	UT4AnimSetAsset* InOutAnimSetAsset,
	const FName& InBlendSpaceName,
	FString& OutErrorMessage
);

T4ASSET_API bool T4AssetEdAnimSetAnimMontageBuild(
	UT4AnimSetAsset* InOutAnimSetAsset,
	const FName& InAnimMontageName,
	const FName& InObjectName
);

T4ASSET_API bool T4AssetEdAnimSetBaseBlendSpaceBuild(
	UT4AnimSetAsset* InOutAnimSetAsset
);

T4ASSET_API bool T4AssetEdAnimSetBuild(
	UT4AnimSetAsset* InOutAnimSetAsset,
	FString& OutErrorMessage
);

#endif
