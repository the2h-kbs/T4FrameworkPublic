// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Public/T4EntityTypes.h"
#include "T4EntityAsset.h"
#include "T4ItemEntityAsset.generated.h"

/**
  * #35
 */
struct FT4ItemEntityCustomVersion
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
	FT4ItemEntityCustomVersion() {}
};

class UStaticMesh;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct T4CORE_API FT4EntityItemMeshData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityItemMeshData()
		: MeshType(ET4EntityMeshType::StaticMesh)
	{
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= Asset)
	ET4EntityMeshType MeshType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Asset)
	TSoftObjectPtr<UStaticMesh> StaticMeshPath;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Asset)
	TSoftObjectPtr<USkeletalMesh> SkeletalMeshPath;
};

UCLASS(ClassGroup = Tech4Labs, Category = "Tech4Labs", BlueprintType, Blueprintable)
class T4CORE_API UT4ItemEntityAsset : public UT4EntityAsset
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	virtual void Serialize(FArchive& Ar) override;
	virtual void PostLoad() override;

	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	//~ End UObject interface

public:
	ET4EntityType GetEntityType() const override { return ET4EntityType::Item; }

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Attribute)
	FT4EntityRenderingAttribute Rendering;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Data)
	FT4EntityItemMeshData DropMeshData;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Data)
	FT4EntityItemMeshData EquipMeshData;
};
