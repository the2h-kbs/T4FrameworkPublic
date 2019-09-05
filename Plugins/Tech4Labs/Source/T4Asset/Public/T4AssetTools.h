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
class UT4WeaponEntityAsset;
class UT4CostumeEntityAsset;
class UT4CharacterEntityAsset;

namespace T4AssetTool
{
	T4ASSET_API UObject* NewAsset(
		UClass* InAssetClass,
		const FString& InAssetName,
		const FString& InPackagePath
	);

	T4ASSET_API bool IsDirtyAsset(
		UObject* InCheckObject
	); // #56

	T4ASSET_API bool SaveAsset(
		UObject* InSaveObject,
		bool bInCheckDirty
	);

	T4ASSET_API bool SaveThumbnailImage(
		UObject* InSaveObject,
		UTexture2D* InThumbnail
	);

	T4ASSET_API bool SaveThumbnailCameraInfoInEntity(
		UT4EntityAsset* InEntityAsset,
		const FRotator& ThumbnailRotation,
		const FVector& ThumbnailLocation
	);

	// #71
	T4ASSET_API bool AddOrUpdateCompositePartInEntity(
		UT4CharacterEntityAsset* InOutEntityAsset,
		const FName& InPartName,
		TSoftObjectPtr<UT4CostumeEntityAsset>& InCostumeEntitAsset,
		FString& OutErrorMessage
	); 
	T4ASSET_API bool RemoveCompositePartInEntity(
		UT4CharacterEntityAsset* InOutEntityAsset,
		const FName& InPartName,
		FString& OutErrorMessage
	); 
	// ~#71

	// #74
	T4ASSET_API bool AddOrUpdateAttachmentEquipWeaponInEntity(
		UT4CharacterEntityAsset* InOutEntityAsset,
		const FName& InEntityTagName,
		const FName& InEquipPointName,
		TSoftObjectPtr<UT4WeaponEntityAsset>& InWeaponEntitAsset,
		FString& OutErrorMessage
	);
	T4ASSET_API bool RemoveAttachmentEquipWeaponInEntity(
		UT4CharacterEntityAsset* InOutEntityAsset,
		int32 InRemoveArrayIndex,
		FString& OutErrorMessage
	);

	T4ASSET_API bool AddOrUpdateAttachmentStayContiInEntity(
		UT4CharacterEntityAsset* InOutEntityAsset,
		const FName& InEntityTagName,
		TSoftObjectPtr<UT4ContiAsset>& InContiAsset,
		FString& OutErrorMessage
	);
	T4ASSET_API bool RemoveAttachmentStayContiInEntity(
		UT4CharacterEntityAsset* InOutEntityAsset,
		int32 InRemoveArrayIndex,
		FString& OutErrorMessage
	);
	// ~#74

	T4ASSET_API bool AddOrUpdateAnimSeqeunceInfoInAnimSet(
		UT4AnimSetAsset* InOutAnimSetAsset,
		const FName& InAnimMontageName,
		const FName& InAnimSequenceName,
		TSoftObjectPtr<UAnimSequence>& InAnimSequence,
		FString& OutErrorMessage
	);

	T4ASSET_API bool RemoveAnimSeqeunceInfoInAnimSet(
		UT4AnimSetAsset* InOutAnimSetAsset,
		const FName& InAnimMontageName,
		const FName& InAnimSequenceName,
		FString& OutErrorMessage
	);

	T4ASSET_API bool AddOrUpdateBlendSpaceInfoInAnimSet(
		UT4AnimSetAsset* InOutAnimSetAsset,
		const FName& InBlendSpaceName,
		TSoftObjectPtr<UBlendSpaceBase>& InBlendSpace,
		FString& OutErrorMessage
	);

	T4ASSET_API bool RemoveBlendSpaceInfoInAnimSet(
		UT4AnimSetAsset* InOutAnimSetAsset,
		const FName& InBlendSpaceName,
		FString& OutErrorMessage
	);

	T4ASSET_API bool UpdateBlendSpaceInfoInAnimSet(
		UT4AnimSetAsset* InOutAnimSetAsset
	);

	T4ASSET_API bool UpdateAnimSetAsset(
		UT4AnimSetAsset* InOutAnimSetAsset,
		FString& OutErrorMessage
	);

	T4ASSET_API bool SaveAnimSetAsset(
		UT4AnimSetAsset* InAnimSetAsset,
		FString& OutErrorMessage
	); // #69

}

#endif
