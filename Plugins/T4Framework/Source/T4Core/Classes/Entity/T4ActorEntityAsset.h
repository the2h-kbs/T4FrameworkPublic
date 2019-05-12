// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Classes/Entity/T4EntityTypes.h"
#include "T4EntityAsset.h"
#include "T4ActorEntityAsset.generated.h"

/**
  * #35
 */
struct FT4ActorEntityCustomVersion
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
	FT4ActorEntityCustomVersion() {}
};

class USkeletalMesh;
class UAnimBlueprint;
class UAnimMontage;
class UBlendSpace;
class UT4CostumeEntityAsset;

USTRUCT(BlueprintType)
struct T4CORE_API FT4EntityActorFullBodyMeshData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityActorFullBodyMeshData()
	{
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Asset)
	TSoftObjectPtr<USkeletalMesh> SkeletalMeshPath;
};

// #37
USTRUCT(BlueprintType)
struct T4CORE_API FT4EntityActorCompositePartMeshData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityActorCompositePartMeshData()
	{
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Asset)
	TSoftObjectPtr<UT4CostumeEntityAsset> CostumeEntityAsset;
};

// #37
USTRUCT(BlueprintType)
struct T4CORE_API FT4EntityActorCompositeMeshData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityActorCompositeMeshData()
		: MasterPartName(NAME_None)
	{
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = DataPath)
	FName MasterPartName; // #37

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = DataPath)
	TMap<FName, FT4EntityActorCompositePartMeshData> DefaultPartsData; // #37
};

USTRUCT(BlueprintType)
struct T4CORE_API FT4EntityActorAnimationData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityActorAnimationData()
		: AnimInstanceType(ET4EntityAnimInstanceType::None)
	{
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Asset)
	ET4EntityAnimInstanceType AnimInstanceType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Asset)
	TSoftObjectPtr<UAnimBlueprint> AnimBPPath;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Asset)
	TSoftObjectPtr<UAnimMontage> SkillMontagePath;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Asset)
	TSoftObjectPtr<UAnimMontage> MovementMontagePath;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Asset)
	TSoftObjectPtr<UBlendSpace> MoveBSPath;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Asset)
	TSoftObjectPtr<UBlendSpace> LockOnBSPath;
};

UCLASS(ClassGroup = Tech4Labs, Category = "Tech4Labs", BlueprintType, Blueprintable)
class T4CORE_API UT4ActorEntityAsset : public UT4EntityAsset
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	virtual void Serialize(FArchive& Ar) override;
	virtual void PostLoad() override;

	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	//~ End UObject interface

public:
	ET4EntityType GetEntityType() const override { return ET4EntityType::Actor; }

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Attribute)
	ET4EntityActorType ActorType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Attribute)
	FT4EntityPhysicalAttribute Physical;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Attribute)
	FT4EntityRenderingAttribute Rendering;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Data)
	FT4EntityActorFullBodyMeshData FullBodyMeshData;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Data)
	FT4EntityActorCompositeMeshData CopmpositeMeshData; // #37

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Data)
	FT4EntityActorAnimationData AnimationData;
};
