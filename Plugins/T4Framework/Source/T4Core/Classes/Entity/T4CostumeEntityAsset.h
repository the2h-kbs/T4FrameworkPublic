// Copyright 2019 Tech4 Labs. All Rights Reserved.

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

	T4CORE_API const static FGuid GUID;

private:
	FT4CostumeEntityCustomVersion() {}
};

class USkeletalMesh;

// #37
USTRUCT(BlueprintType)
struct T4CORE_API FT4EntityItemCostumeMeshData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityItemCostumeMeshData()
	{
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Asset)
	TSoftObjectPtr<USkeletalMesh> SkeletalMeshPath;
};

UCLASS(ClassGroup = Tech4Labs, Category = "Tech4Labs", BlueprintType, Blueprintable)
class T4CORE_API UT4CostumeEntityAsset : public UT4ItemEntityAsset
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
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Data)
	FT4EntityItemCostumeMeshData MeshData;
};
