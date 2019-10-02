// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ItemEntityAsset.h"
#include "T4CostumeEntityAsset.generated.h"

/**
  * #35, #37
 */
struct FT4CostumeEntityCustomVersion
{
	enum Type
	{
		InitializeVer = 0,

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1,
	};

	T4ASSET_API const static FGuid GUID;

private:
	FT4CostumeEntityCustomVersion() {}
};

class USkeleton;
class UPhysicsAsset; // #76
class USkeletalMesh;

// #80
USTRUCT()
struct T4ASSET_API FT4EntityItemCostumeMeshData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityItemCostumeMeshData()
		: CompositePartName(NAME_None)
		//, bUseDropMesh(true) // #80
	{
	}

	UPROPERTY(EditAnywhere, Category=Default, AssetRegistrySearchable)
	TSoftObjectPtr<USkeleton> SkeletonAsset; // #39

	UPROPERTY(EditAnywhere, Category=Default, AssetRegistrySearchable)
	FName CompositePartName; // #72

	UPROPERTY(EditAnywhere, Category=Default)
	TSoftObjectPtr<USkeletalMesh> SkeletalMeshAsset; // #37

	UPROPERTY(EditAnywhere, Category = Default)
	FT4EntityOverrideMaterialData OverrideMaterialData; // #80

	//UPROPERTY(EditAnywhere)
	//bool bUseDropMesh; // #80
};

// #80
USTRUCT()
struct T4ASSET_API FT4EntityCostumeEditorTransientData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCostumeEditorTransientData()
	{
		Reset();
	}

	void Reset()
	{
#if WITH_EDITOR
		TransientItemOverrideMaterialSlotName = NAME_None; // #80
#endif
	}

	UPROPERTY(VisibleAnywhere, Transient, meta = (DisplayName = "Slot Name"))
	FName TransientItemOverrideMaterialSlotName;

	UPROPERTY(EditAnywhere, Transient, meta = (DisplayName = "Material Asset"))
	TSoftObjectPtr<UMaterialInterface> TransientItemOverrideMaterialAsset;
};

UCLASS(ClassGroup = Tech4Labs, Category = "Tech4Labs")
class T4ASSET_API UT4CostumeEntityAsset : public UT4ItemEntityAsset
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	virtual void Serialize(FArchive& Ar) override;
	virtual void PostLoad() override;

	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	//~ End UObject interface

public:
	ET4EntityType GetEntityType() const override { return ET4EntityType::Costume; }

#if WITH_EDITOR
	virtual USkeletalMesh* GetPrimarySkeletalMeshAsset() const override // #81
	{
		if (MeshData.SkeletalMeshAsset.IsNull())
		{
			return nullptr;
		}
		return MeshData.SkeletalMeshAsset.LoadSynchronous();
	}

	virtual void ResetEditorTransientData() override
	{
		UT4ItemEntityAsset::ResetEditorTransientData();
		EditorTransientCostumeData.Reset();
	} // #73
#endif

public:
	UPROPERTY(EditAnywhere)
	FT4EntityItemCostumeMeshData MeshData;

#if WITH_EDITORONLY_DATA
	// #80 : OverrideMaterial Data/ Physics Asset
	// TODO : Transient 설정으로 Editor Dirty 가 발생함으로 다른 방법 고려 필요
	UPROPERTY(EditAnywhere, Transient)
	FT4EntityCostumeEditorTransientData EditorTransientCostumeData;
#endif
};
