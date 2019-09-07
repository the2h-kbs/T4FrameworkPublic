// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4EntityAsset.h"
#include "Public/T4AssetDefinitions.h" // #74
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
class UT4ContiAsset; // #74
class UT4WeaponEntityAsset; // #74
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
	TSoftObjectPtr<USkeletalMesh> SkeletalMeshAsset;
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
		: ModularType(ET4EntityCharacterModularType::MasterPose)
	{
	}

	// CustomizeFullbodyMeshDetails

	UPROPERTY(EditAnywhere, Category = Default)
	ET4EntityCharacterModularType ModularType; // #72

	UPROPERTY(EditAnywhere, Category = DataPath)
	TMap<FName, FT4EntityCharacterCompositePartMeshData> DefaultPartsData; // #37
};

// #73
USTRUCT()
struct T4ASSET_API FT4EntityCharacterStanceData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterStanceData()
		: ActiveEntityTag(NAME_None)
	{
	}

	UPROPERTY(EditAnywhere, Category = Asset)
	TSoftObjectPtr<UT4AnimSetAsset> AnimSetAsset; // #39

	UPROPERTY(EditAnywhere, Category = Asset)
	FName ActiveEntityTag; // #74, #73
};

// #73
USTRUCT()
struct T4ASSET_API FT4EntityCharacterStanceSetData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterStanceSetData()
	{
	}

	UPROPERTY(EditAnywhere, Category = Asset)
	TMap<FName, FT4EntityCharacterStanceData> StanceMap; // #39, #73
};

// #74
USTRUCT()
struct T4ASSET_API FT4EntityCharacterWeaponData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterWeaponData()
		: EntityTag(T4EntityDefaultEntityTagName)
	{
	}

	UPROPERTY(EditAnywhere, Category = Asset)
	FName EntityTag;

	UPROPERTY(EditAnywhere, Category = Asset)
	FName EquipPoint;

	UPROPERTY(EditAnywhere, Category = Asset)
	TSoftObjectPtr<UT4WeaponEntityAsset> WeaponEntityAsset;
};

// #74
USTRUCT()
struct T4ASSET_API FT4EntityCharacterContiData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterContiData()
		: EntityTag(T4EntityDefaultEntityTagName)
	{
	}

	UPROPERTY(EditAnywhere, Category = Asset)
	FName EntityTag;

	UPROPERTY(EditAnywhere, Category = Asset)
	TSoftObjectPtr<UT4ContiAsset> ContiAsset;
};

// #74
USTRUCT()
struct T4ASSET_API FT4EntityCharacterEntityTagData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterEntityTagData()
	{
	}

	UPROPERTY(EditAnywhere, Category = DataPath)
	TArray<FT4EntityCharacterWeaponData> EquipWeaponDatas;

	UPROPERTY(EditAnywhere, Category = DataPath)
	TArray<FT4EntityCharacterContiData> StayContiDatas;
};

// #74
USTRUCT()
struct T4ASSET_API FT4EntityCharacterEditorTransientData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityCharacterEditorTransientData()
	{
		Reset();
	}

	void Reset()
	{
#if WITH_EDITOR
		TransientCompositePartName = NAME_None;
		TransientStanceName = NAME_None; // #73
		TransientStanceActiveEntityTag = NAME_None; // #73, #74
		TransientEntityTagWeaponEntityTag = NAME_None;
		TransientEntityTagWeaponEquipPoint = NAME_None;
		TransientEntityTagContiEntityTag = NAME_None;
#endif
	}

	UPROPERTY(EditAnywhere, Transient)
	FName TransientCompositePartName;

	UPROPERTY(EditAnywhere, Transient)
	TSoftObjectPtr<UT4CostumeEntityAsset> TransientCompositePartAsset;

	UPROPERTY(EditAnywhere, Transient)
	FName TransientStanceName; // #73

	UPROPERTY(EditAnywhere, Transient)
	TSoftObjectPtr<UT4AnimSetAsset> TransientStanceAsset; // #73

	UPROPERTY(EditAnywhere, Transient)
	FName TransientStanceActiveEntityTag; // #73, #74

	UPROPERTY(EditAnywhere, Transient)
	FName TransientEntityTagWeaponEntityTag; // #74

	UPROPERTY(EditAnywhere, Transient)
	FName TransientEntityTagWeaponEquipPoint; // #74

	UPROPERTY(EditAnywhere, Transient)
	TSoftObjectPtr<UT4WeaponEntityAsset> TransientEntityTagWeaponAsset; // #74

	UPROPERTY(EditAnywhere, Transient)
	FName TransientEntityTagContiEntityTag; // #74

	UPROPERTY(EditAnywhere, Transient)
	TSoftObjectPtr<UT4ContiAsset> TransientEntityTagContiAsset; // #74
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
	ET4EntityType GetEntityType() const override { return ET4EntityType::Character; }

#if WITH_EDITOR
	void ResetEditorTransientData() override { EditorTransientData.Reset();  } // #73
#endif

public:
	UPROPERTY(EditAnywhere, Category=Default, AssetRegistrySearchable)
	TSoftObjectPtr<USkeleton> SkeletonAsset; // #39

	UPROPERTY(EditAnywhere, Category = Default)
	TSoftObjectPtr<UAnimBlueprint> AnimBlueprintAsset;

	UPROPERTY(EditAnywhere, Category= Default)
	ET4EntityCharacterMeshType MeshType;

	UPROPERTY(EditAnywhere, Category=FullbodyMesh)
	FT4EntityCharacterFullBodyMeshData FullBodyMeshData;

	UPROPERTY(EditAnywhere, Category=CompositeMesh)
	FT4EntityCharacterCompositeMeshData CopmpositeMeshData; // #37

	UPROPERTY(EditAnywhere, Category=Stance)
	FT4EntityCharacterStanceSetData StanceSetData; // #73

	UPROPERTY(EditAnywhere, Category = EntityTag)
	FT4EntityCharacterEntityTagData EntityTagData; // #74

	UPROPERTY(EditAnywhere, Category= Attribute)
	FT4EntityCharacterPhysicalAttribute Physical;

	UPROPERTY(EditAnywhere, Category= Attribute)
	FT4EntityCharacterRenderingAttribute Rendering;

public:
	// #71 : WARN : CustomizeCharacterEntityDetails 에서 사용하는 임시 프로퍼티! (저장되지 않는다!!)
	// TODO : Transient 설정으로 Editor Dirty 가 발생함으로 다른 방법 고려 필요
	UPROPERTY(EditAnywhere, Transient)
	FT4EntityCharacterEditorTransientData EditorTransientData;
};
