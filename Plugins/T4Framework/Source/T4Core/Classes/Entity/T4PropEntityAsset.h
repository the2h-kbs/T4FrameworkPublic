// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Classes/Entity/T4EntityTypes.h"
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

	T4CORE_API const static FGuid GUID;

private:
	FT4PropEntityCustomVersion() {}
};

class UStaticMesh;
class USkeletalMesh;
class UParticleSystem;

USTRUCT(BlueprintType)
struct T4CORE_API FT4EntityPropPhysicalAttribute : public FT4EntityBasePhysicalAttribute
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityPropPhysicalAttribute()
	{
	}
};

USTRUCT(BlueprintType)
struct T4CORE_API FT4EntityPropRenderingAttribute : public FT4EntityBaseRenderingAttribute
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityPropRenderingAttribute()
	{
	}
};

USTRUCT(BlueprintType)
struct T4CORE_API FT4EntityPropNormalMeshData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityPropNormalMeshData()
		: MeshType(ET4EntityMeshType::StaticMesh)
	{
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= Asset)
	ET4EntityMeshType MeshType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Asset)
	TSoftObjectPtr<UStaticMesh> StaticMeshPath;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Asset)
	TSoftObjectPtr<USkeletalMesh> SkeletalMeshPath;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Asset)
	TSoftObjectPtr<UParticleSystem> ParticleSystemPath;
};

UCLASS(ClassGroup = Tech4Labs, Category = "Tech4Labs", BlueprintType, Blueprintable)
class T4CORE_API UT4PropEntityAsset : public UT4EntityAsset
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
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Attribute)
	ET4EntityPropType PropType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Attribute)
	FT4EntityPropPhysicalAttribute Physical;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Attribute)
	FT4EntityPropRenderingAttribute Rendering;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Data)
	FT4EntityPropNormalMeshData NormalMeshData;
};
