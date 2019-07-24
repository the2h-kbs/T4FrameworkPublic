// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4EntityAsset.h"
#include "T4WorldEntityAsset.generated.h"

/**
  * #35
 */
struct FT4WorldEntityCustomVersion
{
	enum Type
	{
		InitializeVer = 0,

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1,
	};

	T4ENGINE_API const static FGuid GUID;

private:
	FT4WorldEntityCustomVersion() {}
};

class ULevel;

USTRUCT()
struct T4ENGINE_API FT4EntityNormalWorldData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityNormalWorldData()
	{
	}

	UPROPERTY(EditAnywhere, Category = Asset)
	TSoftObjectPtr<UWorld> LevelPath;
};

UCLASS(ClassGroup = Tech4Labs, Category = "Tech4Labs")
class T4ENGINE_API UT4WorldEntityAsset : public UT4EntityAsset
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	virtual void Serialize(FArchive& Ar) override;
	virtual void PostLoad() override;

	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	//~ End UObject interface

public:
	ET4EntityType GetEntityType() const override { return ET4EntityType::World; }

public:
	UPROPERTY(EditAnywhere, Category=Attribute)
	ET4EntityWorldType WorldType;

	UPROPERTY(EditAnywhere, Category=Data)
	FT4EntityNormalWorldData NormalWorldData;
};
