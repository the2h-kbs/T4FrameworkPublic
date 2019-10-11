// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4EntityAsset.h"
#include "T4MapEntityAsset.generated.h"

/**
  * #35
 */
struct FT4MapEntityCustomVersion
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
	FT4MapEntityCustomVersion() {}
};

USTRUCT()
struct T4ASSET_API FT4EntityMapData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityMapData()
	{
	}

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UWorld> LevelAsset;
};

UCLASS(ClassGroup = Tech4Labs, Category = "Tech4Labs")
class T4ASSET_API UT4MapEntityAsset : public UT4EntityAsset
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	virtual void Serialize(FArchive& Ar) override;
	virtual void PostLoad() override;

	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	//~ End UObject interface

public:
	ET4EntityType GetEntityType() const override { return ET4EntityType::Map; }

public:
	UPROPERTY(EditAnywhere)
	FT4EntityMapData MapData;
};
