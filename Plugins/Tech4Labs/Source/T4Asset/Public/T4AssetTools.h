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
struct FT4EntityCharacterStanceData;
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
	T4ASSET_API void SelectCompositePartTransientDataInEntity(
		UT4CharacterEntityAsset* InOutEntityAsset, 
		const FName& InPartName
	);
	T4ASSET_API bool AddOrUpdateCompositePartInEntity(
		UT4CharacterEntityAsset* InOutEntityAsset,
		const FName& InPartName,
		TSoftObjectPtr<UT4CostumeEntityAsset>& InCostumeEntityAsset,
		FString& OutErrorMessage
	); 
	T4ASSET_API bool RemoveCompositePartInEntity(
		UT4CharacterEntityAsset* InOutEntityAsset,
		const FName& InPartName,
		FString& OutErrorMessage
	); 
	// ~#71

	// #73
	T4ASSET_API void SelectStanceTransientDataInEntity(
		UT4CharacterEntityAsset* InOutEntityAsset,
		const FName& InStanceName
	);
	T4ASSET_API bool AddOrUpdateStanceInEntity(
		UT4CharacterEntityAsset* InOutEntityAsset,
		const FName& InStanceName,
		const FT4EntityCharacterStanceData* InStanceData,
		FString& OutErrorMessage
	);
	T4ASSET_API bool RemoveStanceInEntity(
		UT4CharacterEntityAsset* InOutEntityAsset,
		const FName& InStanceName,
		FString& OutErrorMessage
	);
	// ~#73

	// #74
	T4ASSET_API void SelectEntityTagEquipWeaponTransientDataInCharacterEntity(
		UT4CharacterEntityAsset* InOutEntityAsset,
		const int32 InSelectIndex
	);
	T4ASSET_API bool AddOrUpdateEntityTagEquipWeaponInEntity(
		UT4CharacterEntityAsset* InOutEntityAsset,
		const FName& InEntityTagName,
		const FName& InEquipPointName,
		TSoftObjectPtr<UT4WeaponEntityAsset>& InWeaponEntityAsset,
		FString& OutErrorMessage
	);
	T4ASSET_API bool RemoveEntityTagEquipWeaponInEntity(
		UT4CharacterEntityAsset* InOutEntityAsset,
		int32 InRemoveArrayIndex,
		FString& OutErrorMessage
	);

	T4ASSET_API void SelectEntityTagStayContiTransientDataInEntity(
		UT4CharacterEntityAsset* InOutEntityAsset,
		const int32 InSelectIndex
	);
	T4ASSET_API bool AddOrUpdateEntityTagStayContiInEntity(
		UT4CharacterEntityAsset* InOutEntityAsset,
		const FName& InEntityTagName,
		TSoftObjectPtr<UT4ContiAsset>& InContiAsset,
		FString& OutErrorMessage
	);
	T4ASSET_API bool RemoveEntityTagStayContiInEntity(
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
