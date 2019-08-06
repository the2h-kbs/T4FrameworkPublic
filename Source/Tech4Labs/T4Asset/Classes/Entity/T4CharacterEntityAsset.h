// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4EntityAsset.h"
#include "T4CharacterEntityAsset.generated.h"

/**
  * #35
 */
struct FT4CharacterEntityCustomVersion
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
	FT4CharacterEntityCustomVersion() {}
};

class USkeleton;
class USkeletalMesh;
class UAnimBlueprint;
class UAnimMontage;
class UBlendSpace;
class UT4AnimSetAsset; // #39
class UT4CostumeEntityAsset;

USTRUCT()
struct T4ASSET_API FT4EntityCharacterPhysicalAttribute : public FT4EntityBasePhysicalAttribute
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterPhysicalAttribute()
		: RunSpeed(600.0f)
		, WalkSpeed(200.0f)
		, LockOnSpeed(300.0f)
		, JumpZVelocity(550.0f) // #46
		, RollZVelocity(250.0f) // #46
		, RotationYawRate(520.0f)
	{
	}

	UPROPERTY(EditAnywhere, Category = Physical, meta = (ClampMin = "10.0", ClampMax = "1000"))
	float RunSpeed;

	UPROPERTY(EditAnywhere, Category = Physical, meta = (ClampMin = "10.0", ClampMax = "500"))
	float WalkSpeed;

	UPROPERTY(EditAnywhere, Category = Physical, meta = (ClampMin = "10.0", ClampMax = "500"))
	float LockOnSpeed;

	UPROPERTY(EditAnywhere, Category = Physical, meta = (ClampMin = "10.0", ClampMax = "1000"))
	float JumpZVelocity;

	UPROPERTY(EditAnywhere, Category = Physical, meta = (ClampMin = "5.0", ClampMax = "500"))
	float RollZVelocity; // #46

	UPROPERTY(EditAnywhere, Category = Physical, meta = (ClampMin = "10.0", ClampMax = "1080"))
	float RotationYawRate;
};

USTRUCT()
struct T4ASSET_API FT4EntityCharacterRenderingAttribute : public FT4EntityBaseRenderingAttribute
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterRenderingAttribute()
	{
	}
};

USTRUCT()
struct T4ASSET_API FT4EntityCharacterFullBodyMeshData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterFullBodyMeshData()
	{
	}

	UPROPERTY(EditAnywhere, Category = Asset)
	TSoftObjectPtr<USkeleton> SkeletonPath; // #39

	UPROPERTY(EditAnywhere, Category = Asset)
	TSoftObjectPtr<USkeletalMesh> SkeletalMeshPath;
};

// #37
USTRUCT()
struct T4ASSET_API FT4EntityCharacterCompositePartMeshData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterCompositePartMeshData()
	{
	}

	UPROPERTY(EditAnywhere, Category = Asset)
	TSoftObjectPtr<UT4CostumeEntityAsset> CostumeEntityAsset;
};

// #37
USTRUCT()
struct T4ASSET_API FT4EntityCharacterCompositeMeshData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterCompositeMeshData()
		: MasterPartName(NAME_None)
	{
	}

	UPROPERTY(EditAnywhere, Category = Asset)
	TSoftObjectPtr<USkeleton> SkeletonPath; // #39

	UPROPERTY(EditAnywhere, Category = DataPath)
	FName MasterPartName; // #37

	UPROPERTY(EditAnywhere, Category = DataPath)
	TMap<FName, FT4EntityCharacterCompositePartMeshData> DefaultPartsData; // #37
};

USTRUCT()
struct T4ASSET_API FT4EntityCharacterAnimationData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterAnimationData()
	{
	}

	UPROPERTY(EditAnywhere, Category = Asset)
	TSoftObjectPtr<UAnimBlueprint> AnimBPPath;

	UPROPERTY(EditAnywhere, Category = Asset)
	TSoftObjectPtr<UT4AnimSetAsset> DefaultAnimSetPath; // #39
};

UCLASS(ClassGroup = Tech4Labs, Category = "Tech4Labs")
class T4ASSET_API UT4CharacterEntityAsset : public UT4EntityAsset
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
	UPROPERTY(EditAnywhere, Category=Attribute)
	FT4EntityCharacterPhysicalAttribute Physical;

	UPROPERTY(EditAnywhere, Category=Attribute)
	FT4EntityCharacterRenderingAttribute Rendering;

	UPROPERTY(EditAnywhere, Category=Data)
	ET4EntityCharacterMeshType MeshType;

	UPROPERTY(EditAnywhere, Category=Data)
	FT4EntityCharacterFullBodyMeshData FullBodyMeshData;

	UPROPERTY(EditAnywhere, Category=Data)
	FT4EntityCharacterCompositeMeshData CopmpositeMeshData; // #37

	UPROPERTY(EditAnywhere, Category=Data)
	FT4EntityCharacterAnimationData AnimationData;
};
