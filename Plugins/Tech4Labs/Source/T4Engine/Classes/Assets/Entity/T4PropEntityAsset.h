// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Public/T4EngineEntityTypes.h"
#include "T4EntityAsset.h"
#include "T4PropEntityAsset.generated.h"

/**
  * #35
 */
struct FT4PropEntityCustomVersion
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
	FT4PropEntityCustomVersion() {}
};

class UStaticMesh;
class USkeletalMesh;
class UParticleSystem;

USTRUCT()
struct T4ENGINE_API FT4EntityPropPhysicalAttribute : public FT4EntityBasePhysicalAttribute
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityPropPhysicalAttribute()
	{
		CapsuleHeight = 200.0f;
		CapsuleRadius = 50.0f;
	}
};

USTRUCT()
struct T4ENGINE_API FT4EntityPropRenderingAttribute : public FT4EntityBaseRenderingAttribute
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityPropRenderingAttribute()
	{
	}
};

USTRUCT()
struct T4ENGINE_API FT4EntityPropNormalMeshData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityPropNormalMeshData()
		: MeshType(ET4EntityMeshType::StaticMesh)
	{
	}

	UPROPERTY(EditAnywhere, Category= Asset)
	ET4EntityMeshType MeshType;

	UPROPERTY(EditAnywhere, Category = Asset)
	TSoftObjectPtr<UStaticMesh> StaticMeshPath;

	UPROPERTY(EditAnywhere, Category = Asset)
	TSoftObjectPtr<USkeletalMesh> SkeletalMeshPath;

	UPROPERTY(EditAnywhere, Category = Asset)
	TSoftObjectPtr<UParticleSystem> ParticleSystemPath;
};

UCLASS(ClassGroup = Tech4Labs, Category = "Tech4Labs")
class T4ENGINE_API UT4PropEntityAsset : public UT4EntityAsset
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	virtual void Serialize(FArchive& Ar) override;
	virtual void PostLoad() override;

	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	//~ End UObject interface

public:
	ET4EntityType GetEntityType() const override { return ET4EntityType::Prop; }

public:
	UPROPERTY(EditAnywhere, Category=Attribute)
	FT4EntityPropPhysicalAttribute Physical;

	UPROPERTY(EditAnywhere, Category=Attribute)
	FT4EntityPropRenderingAttribute Rendering;

	UPROPERTY(EditAnywhere, Category= Data)
	ET4EntityPropMeshType MeshType;

	UPROPERTY(EditAnywhere, Category=Data)
	FT4EntityPropNormalMeshData NormalMeshData;
};
