// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Public/Entity/T4EntityTypes.h"
#include "T4EntityAsset.generated.h"

/**
  * #35
 */
USTRUCT()
struct T4ASSET_API FT4EntityEditorThumbnailAttribute
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityEditorThumbnailAttribute()
#if WITH_EDITORONLY_DATA
		: Rotation(FRotator(0.0f, 180.0f, 0.0f))
		, Location(FVector(500.0f, 0.0f, 100.0f))
#endif
	{
	}

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere)
	FRotator Rotation;

	UPROPERTY(EditAnywhere)
	FVector Location;
#endif
};

USTRUCT()
struct T4ASSET_API FT4EntityBasePhysicalAttribute
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityBasePhysicalAttribute()
		: CapsuleHeight(200.0f)
		, CapsuleRadius(25.0f)

	{
	}

	UPROPERTY(EditAnywhere, meta = (ClampMin = "10.0", ClampMax = "1000"))
	float CapsuleHeight;

	UPROPERTY(EditAnywhere, meta = (ClampMin = "10.0", ClampMax = "500"))
	float CapsuleRadius;
};

USTRUCT()
struct T4ASSET_API FT4EntityBaseRenderingAttribute
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityBaseRenderingAttribute()
		: Scale(1.0f)
		, ImportRotationYaw(-90.0f)
		, bReceivesDecals(false) // #54
	{
	}

	UPROPERTY(EditAnywhere, meta = (ClampMin = "0.1", ClampMax = "10"))
	float Scale;

	UPROPERTY(EditAnywhere, meta = (ClampMin = "-360.0", ClampMax = "360.0"))
	float ImportRotationYaw;

	UPROPERTY(EditAnywhere)
	bool bReceivesDecals; // #54
};

// #80
class UMaterialInterface;
USTRUCT()
struct T4ASSET_API FT4EntityOverrideMaterialData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityOverrideMaterialData()
	{
	}

	UPROPERTY(EditAnywhere)
	TMap<FName, TSoftObjectPtr<UMaterialInterface>> MaterialMap;

	UPROPERTY(EditAnywhere)
	TArray<FName> MaterialSortedSlotNames;
};

// #74
class UT4WeaponEntityAsset;
USTRUCT()
struct T4ASSET_API FT4EntityLayerTagWeaponData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityLayerTagWeaponData()
		: LayerTag(T4EntityDefaultLayerTagName)
	{
	}

	UPROPERTY(EditAnywhere)
	FName LayerTag;

	UPROPERTY(EditAnywhere)
	FName EquipPoint;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UT4WeaponEntityAsset> WeaponEntityAsset;
};

// #74
class UT4ContiAsset;
USTRUCT()
struct T4ASSET_API FT4EntityLayerTagContiData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityLayerTagContiData()
		: LayerTag(T4EntityDefaultLayerTagName)
	{
	}

	UPROPERTY(EditAnywhere)
	FName LayerTag;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UT4ContiAsset> ContiAsset;
};

// #80
USTRUCT()
struct T4ASSET_API FT4EntityLayerTagMaterialData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityLayerTagMaterialData()
	{
	}

	UPROPERTY(EditAnywhere)
	FName LayerTag;

	UPROPERTY(EditAnywhere)
	FT4EntityOverrideMaterialData OverrideMaterialData;
};

// #74
USTRUCT()
struct T4ASSET_API FT4EntityLayerTagData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityLayerTagData()
	{
	}

	UPROPERTY(EditAnywhere)
	TArray<FT4EntityLayerTagMaterialData> MaterialTags; // #80

	UPROPERTY(EditAnywhere)
	TArray<FT4EntityLayerTagWeaponData> WeaponTags;

	UPROPERTY(EditAnywhere)
	TArray<FT4EntityLayerTagContiData> ContiTags;
};

// #81
USTRUCT()
struct T4ASSET_API FT4EntityEditorTransientData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityEditorTransientData()
	{
		Reset();
	}

	void Reset()
	{
#if WITH_EDITOR
		TransientLayerTagNameOfWeapon = NAME_None;
		TransientLayerTagWeaponEquipPoint = NAME_None;
		TransientLayerTagNameOfConti = NAME_None;

		TransientLayerTagNameOfMaterial = NAME_None; // #80
		TransientLayerTagMaterialSlotName = NAME_None; // #80
#endif
	}

	UPROPERTY(EditAnywhere, Transient)
	FName TransientLayerTagNameOfWeapon; // #74

	UPROPERTY(EditAnywhere, Transient)
	FName TransientLayerTagWeaponEquipPoint; // #74

	UPROPERTY(EditAnywhere, Transient)
	TSoftObjectPtr<UT4WeaponEntityAsset> TransientLayerTagWeaponAsset; // #74

	UPROPERTY(EditAnywhere, Transient)
	FName TransientLayerTagNameOfConti; // #74

	UPROPERTY(EditAnywhere, Transient)
	TSoftObjectPtr<UT4ContiAsset> TransientLayerTagContiAsset; // #74

	// #81
	UPROPERTY(EditAnywhere, Transient)
	FName TransientLayerTagNameOfMaterial; 

	UPROPERTY(EditAnywhere, Transient)
	FT4EntityOverrideMaterialData TransientLayerTagMaterialData;

	UPROPERTY(VisibleAnywhere, Transient, meta = (DisplayName = "Slot Name"))
	FName TransientLayerTagMaterialSlotName;

	UPROPERTY(EditAnywhere, Transient, meta = (DisplayName = "Material Asset"))
	TSoftObjectPtr<UMaterialInterface> TransientLayerTagMaterialAsset;
	// ~#81
};

class UTexture2D;
class UStaticMesh; // #81
class USkeletalMesh; // #81
UCLASS(ClassGroup = Tech4Labs, Category = "Tech4Labs")
class T4ASSET_API UT4EntityAsset : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	virtual void Serialize(FArchive& Ar) override;
	virtual void PostLoad() override;
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	//~ End UObject interface

public:
	virtual ET4EntityType GetEntityType() const { return ET4EntityType::None; }

#if WITH_EDITOR
	virtual UStaticMesh* GetPrimaryStaticMeshAsset() const { return nullptr; } // #81
	virtual USkeletalMesh* GetPrimarySkeletalMeshAsset() const { return nullptr; } // #81

	virtual void ResetEditorTransientData() 
	{
		EditorTransientData.Reset();
	} // #73
#endif

#if WITH_EDITOR
	DECLARE_MULTICAST_DELEGATE(FT4OnPropertiesChanged);
	FT4OnPropertiesChanged& OnPropertiesChanged() { return OnPropertiesChangedDelegate; }
#endif

	FName GetEntityAssetName() const; // #37 : Make FT4EntityKey

public:
	UPROPERTY(EditAnywhere)
	FT4EntityLayerTagData LayerTagData; // #74, #81

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere)
	FT4EntityEditorThumbnailAttribute ThumbnailCameraInfo;

	UPROPERTY()
	UTexture2D* ThumbnailImage; // Internal: The thumbnail image

	// #71 : WARN : CustomizeCharacterEntityDetails 에서 사용하는 임시 프로퍼티! (저장되지 않는다!!)
	// TODO : Transient 설정으로 Editor Dirty 가 발생함으로 다른 방법 고려 필요
	UPROPERTY(EditAnywhere, Transient)
	FT4EntityEditorTransientData EditorTransientData;
#endif

private:
#if WITH_EDITOR
	FT4OnPropertiesChanged OnPropertiesChangedDelegate;
#endif
};
