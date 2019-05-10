// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Public/T4EntityTypes.h"
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

	T4CORE_API const static FGuid GUID;

private:
	FT4WorldEntityCustomVersion() {}
};

class ULevel;

USTRUCT(BlueprintType)
struct T4CORE_API FT4EntityNormalWorldData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityNormalWorldData()
	{
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Asset)
	TSoftObjectPtr<UWorld> LevelPath;
};

UCLASS(ClassGroup = Tech4Labs, Category = "Tech4Labs", BlueprintType, Blueprintable)
class T4CORE_API UT4WorldEntityAsset : public UT4EntityAsset
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
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Attribute)
	ET4EntityWorldType WorldType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Data)
	FT4EntityNormalWorldData NormalWorldData;
};
