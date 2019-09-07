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
	UPROPERTY(EditAnywhere, Category=Thumbnail)
	FRotator Rotation;

	UPROPERTY(EditAnywhere, Category=Thumbnail)
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

	UPROPERTY(EditAnywhere, Category = Physical, meta = (ClampMin = "10.0", ClampMax = "1000"))
	float CapsuleHeight;

	UPROPERTY(EditAnywhere, Category = Physical, meta = (ClampMin = "10.0", ClampMax = "500"))
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

	UPROPERTY(EditAnywhere, Category = Property, meta = (ClampMin = "0.1", ClampMax = "10"))
	float Scale;

	UPROPERTY(EditAnywhere, Category = Property, meta = (ClampMin = "-360.0", ClampMax = "360.0"))
	float ImportRotationYaw;

	UPROPERTY(EditAnywhere, Category = Property)
	bool bReceivesDecals; // #54
};

class UTexture2D;
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

	virtual ET4EntityType GetEntityType() const { return ET4EntityType::None; }

	virtual void ResetEditorTransientData() {} // #73

#if WITH_EDITOR
	DECLARE_MULTICAST_DELEGATE(FT4OnPropertiesChanged);
	FT4OnPropertiesChanged& OnPropertiesChanged() { return OnPropertiesChangedDelegate; }
#endif

	FName GetEntityAssetName() const; // #37 : Make FT4EntityKey

public:
#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category=Editor)
	FT4EntityEditorThumbnailAttribute ThumbnailCameraInfo;

	UPROPERTY()
	UTexture2D* ThumbnailImage; // Internal: The thumbnail image
#endif

private:
#if WITH_EDITOR
	FT4OnPropertiesChanged OnPropertiesChangedDelegate;
#endif
};
