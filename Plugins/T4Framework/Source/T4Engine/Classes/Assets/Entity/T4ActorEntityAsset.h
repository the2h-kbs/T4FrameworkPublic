// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Classes/Assets/Entity/T4EntityTypes.h"
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

	T4ENGINE_API const static FGuid GUID;

private:
	FT4ActorEntityCustomVersion() {}
};

class USkeleton;
class USkeletalMesh;
class UAnimBlueprint;
class UAnimMontage;
class UBlendSpace;
class UT4AnimSetAsset; // #39
class UT4CostumeEntityAsset;

USTRUCT(BlueprintType)
struct T4ENGINE_API FT4EntityActorPhysicalAttribute : public FT4EntityBasePhysicalAttribute
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityActorPhysicalAttribute()
		: RunSpeed(500.0f)
		, WalkSpeed(100.0f)
		, LockOnSpeed(100.0f)
		, JumpZVelocity(300.0f)
		, RotationRateYaw(720.0f)
	{
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Physical, meta = (ClampMin = "10.0", ClampMax = "1000"))
	float RunSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Physical, meta = (ClampMin = "10.0", ClampMax = "500"))
	float WalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Physical, meta = (ClampMin = "10.0", ClampMax = "500"))
	float LockOnSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Physical, meta = (ClampMin = "10.0", ClampMax = "1000"))
	float JumpZVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Physical, meta = (ClampMin = "10.0", ClampMax = "1080"))
	float RotationRateYaw;
};

USTRUCT(BlueprintType)
struct T4ENGINE_API FT4EntityActorRenderingAttribute : public FT4EntityBaseRenderingAttribute
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityActorRenderingAttribute()
	{
	}
};

USTRUCT(BlueprintType)
struct T4ENGINE_API FT4EntityActorFullBodyMeshData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityActorFullBodyMeshData()
	{
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Asset)
	TSoftObjectPtr<USkeleton> SkeletonPath; // #39

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Asset)
	TSoftObjectPtr<USkeletalMesh> SkeletalMeshPath;
};

// #37
USTRUCT(BlueprintType)
struct T4ENGINE_API FT4EntityActorCompositePartMeshData
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
struct T4ENGINE_API FT4EntityActorCompositeMeshData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityActorCompositeMeshData()
		: MasterPartName(NAME_None)
	{
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Asset)
	TSoftObjectPtr<USkeleton> SkeletonPath; // #39

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = DataPath)
	FName MasterPartName; // #37

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = DataPath)
	TMap<FName, FT4EntityActorCompositePartMeshData> DefaultPartsData; // #37
};

USTRUCT(BlueprintType)
struct T4ENGINE_API FT4EntityActorAnimationData
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
	TSoftObjectPtr<UT4AnimSetAsset> DefaultAnimSetPath; // #39
};

UCLASS(ClassGroup = Tech4Labs, Category = "Tech4Labs", BlueprintType, Blueprintable)
class T4ENGINE_API UT4ActorEntityAsset : public UT4EntityAsset
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
	FT4EntityActorPhysicalAttribute Physical;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Attribute)
	FT4EntityActorRenderingAttribute Rendering;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Data)
	ET4EntityActorMeshType MeshType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Data)
	FT4EntityActorFullBodyMeshData FullBodyMeshData;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Data)
	FT4EntityActorCompositeMeshData CopmpositeMeshData; // #37

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Data)
	FT4EntityActorAnimationData AnimationData;
};
