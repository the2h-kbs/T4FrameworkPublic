// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ItemEntityAsset.h"
#include "T4WeaponEntityAsset.generated.h"

/**
  * #35
 */
struct FT4WeaponEntityCustomVersion
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
	FT4WeaponEntityCustomVersion() {}
};

class UStaticMesh;
class USkeletalMesh;
class UPhysicsAsset; // #76
class UMaterialInterface;
USTRUCT()
struct T4ASSET_API FT4EntityItemWeaponMeshData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityItemWeaponMeshData()
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
struct T4ASSET_API FT4EntityWeaponEditorTransientData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityWeaponEditorTransientData()
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
class T4ASSET_API UT4WeaponEntityAsset : public UT4ItemEntityAsset
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	virtual void Serialize(FArchive& Ar) override;
	virtual void PostLoad() override;

	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	//~ End UObject interface

public:
	ET4EntityType GetEntityType() const override { return ET4EntityType::Weapon; }

public:
	UPROPERTY(EditAnywhere)
	FT4EntityItemWeaponMeshData MeshData;

public:
	// #80 : OverrideMaterial Data/ Physics Asset
	// TODO : Transient 설정으로 Editor Dirty 가 발생함으로 다른 방법 고려 필요
	UPROPERTY(EditAnywhere, Transient)
	FT4EntityWeaponEditorTransientData EditorWeaponTransientData;
};
