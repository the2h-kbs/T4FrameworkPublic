// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4EntityTypes.h"
#include "T4EntityAsset.h"
#include "T4ItemEntityAsset.generated.h"

/**
  * #35
 */
class UStaticMesh;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct T4CORE_API FT4EntityItemPhysicalAttribute : public FT4EntityBasePhysicalAttribute
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityItemPhysicalAttribute()
	{
	}
};

USTRUCT(BlueprintType)
struct T4CORE_API FT4EntityItemRenderingAttribute : public FT4EntityBaseRenderingAttribute
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityItemRenderingAttribute()
	{
	}
};

USTRUCT(BlueprintType)
struct T4CORE_API FT4EntityItemDropMeshData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityItemDropMeshData()
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
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Attribute)
	FT4EntityItemPhysicalAttribute DropMeshPhysical;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Attribute)
	FT4EntityItemRenderingAttribute DropMeshRendering;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Data)
	FT4EntityItemDropMeshData DropMeshData;
};
