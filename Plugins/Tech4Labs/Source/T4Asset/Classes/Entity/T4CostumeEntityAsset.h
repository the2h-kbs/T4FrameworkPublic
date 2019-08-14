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

class USkeletalMesh;

// #37
USTRUCT()
struct T4ASSET_API FT4EntityItemCostumeMeshData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityItemCostumeMeshData()
	{
	}

	UPROPERTY(EditAnywhere, Category = Asset)
	TSoftObjectPtr<USkeletalMesh> SkeletalMeshPath;
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

public:
	UPROPERTY(EditAnywhere, Category = Data)
	FT4EntityItemCostumeMeshData MeshData;
};
