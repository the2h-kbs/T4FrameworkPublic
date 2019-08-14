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

USTRUCT()
struct T4ASSET_API FT4EntityItemWeaponMeshData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityItemWeaponMeshData()
		: MeshType(ET4EntityMeshType::StaticMesh)
	{
	}

	UPROPERTY(EditAnywhere, Category= Asset)
	ET4EntityMeshType MeshType;

	UPROPERTY(EditAnywhere, Category = Asset)
	TSoftObjectPtr<UStaticMesh> StaticMeshPath;

	UPROPERTY(EditAnywhere, Category = Asset)
	TSoftObjectPtr<USkeletalMesh> SkeletalMeshPath;
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
	UPROPERTY(EditAnywhere, Category=Data)
	FT4EntityItemWeaponMeshData MeshData;
};
