// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4EntityAsset.h"
#include "T4ItemEntityAsset.generated.h"

/**
  * #35
 */
class UStaticMesh;
class USkeletalMesh;
class UParticleSystem;
class UMaterialInterface;

USTRUCT()
struct T4ASSET_API FT4EntityItemPhysicalAttribute : public FT4EntityBasePhysicalAttribute
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityItemPhysicalAttribute()
	{
		CapsuleHeight = 50.0f;
		CapsuleRadius = 10.0f;
	}
};

USTRUCT()
struct T4ASSET_API FT4EntityItemRenderingAttribute : public FT4EntityBaseRenderingAttribute
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityItemRenderingAttribute()
	{
	}
};

USTRUCT()
struct T4ASSET_API FT4EntityItemDropMeshData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityItemDropMeshData()
		: MeshType(ET4EntityMeshType::StaticMesh)
	{
	}

	UPROPERTY(EditAnywhere)
	ET4EntityMeshType MeshType;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UStaticMesh> StaticMeshAsset;

	UPROPERTY(EditAnywhere, meta = (DisplayName = "Override Material Data"))
	FT4EntityOverrideMaterialData StaticMeshOverrideMaterialData; // #80

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<USkeletalMesh> SkeletalMeshAsset;

	UPROPERTY(EditAnywhere, meta = (DisplayName = "Override Material Data"))
	FT4EntityOverrideMaterialData SkeletalMeshOverrideMaterialData; // #80

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UParticleSystem> ParticleSystemAsset;
};

// #80
USTRUCT()
struct T4ASSET_API FT4EntityItemEditorTransientData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityItemEditorTransientData()
	{
		Reset();
	}

	void Reset()
	{
#if WITH_EDITOR
		TransientDropMeshOverrideMaterialSlotName = NAME_None; // #80
#endif
	}

	UPROPERTY(VisibleAnywhere, Transient, meta = (DisplayName = "Slot Name"))
	FName TransientDropMeshOverrideMaterialSlotName;

	UPROPERTY(EditAnywhere, Transient, meta = (DisplayName = "Material Asset"))
	TSoftObjectPtr<UMaterialInterface> TransientDropMeshOverrideMaterialAsset;
};

UCLASS(ClassGroup = Tech4Labs, Category = "Tech4Labs")
class T4ASSET_API UT4ItemEntityAsset : public UT4EntityAsset
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	virtual void Serialize(FArchive& Ar) override;
	virtual void PostLoad() override;
	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	//~ End UObject interface

public:
	UPROPERTY(EditAnywhere, meta = (DisplayName = "Mesh Data"))
	FT4EntityItemDropMeshData DropMeshData;

	UPROPERTY(EditAnywhere, meta = (DisplayName = "Physical"))
	FT4EntityItemPhysicalAttribute DropMeshPhysical;

	UPROPERTY(EditAnywhere, meta = (DisplayName = "Rendering"))
	FT4EntityItemRenderingAttribute DropMeshRendering;

public:
	// #80 : OverrideMaterial Data/ Physics Asset
	// TODO : Transient 설정으로 Editor Dirty 가 발생함으로 다른 방법 고려 필요
	UPROPERTY(EditAnywhere, Transient)
	FT4EntityItemEditorTransientData EditorItemTransientData;
};
