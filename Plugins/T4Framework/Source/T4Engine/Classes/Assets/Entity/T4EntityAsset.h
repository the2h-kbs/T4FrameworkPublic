// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4EntityTypes.h"
#include "T4EntityAsset.generated.h"

/**
  * #35
 */
USTRUCT()
struct T4ENGINE_API FT4EntityDefaultAttribute
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityDefaultAttribute()
		: UniqueName(NAME_None)
#if WITH_EDITORONLY_DATA
		, ThumbnailRotation(FRotator(0.0f, 180.0f, 0.0f))
		, ThumbnailLocation(FVector(500.0f, 0.0f, 100.0f))
#endif
	{
	}

	UPROPERTY(EditAnywhere, Category=Default)
	FName UniqueName;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category=Thumbnail)
	FRotator ThumbnailRotation;

	UPROPERTY(EditAnywhere, Category=Thumbnail)
	FVector ThumbnailLocation;
#endif
};

USTRUCT()
struct T4ENGINE_API FT4EntityBasePhysicalAttribute
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityBasePhysicalAttribute()
		: Height(200.0f)
		, Radius(25.0f)

	{
	}

	UPROPERTY(EditAnywhere, Category = Physical, meta = (ClampMin = "10.0", ClampMax = "1000"))
	float Height;

	UPROPERTY(EditAnywhere, Category = Physical, meta = (ClampMin = "10.0", ClampMax = "500"))
	float Radius;
};

USTRUCT()
struct T4ENGINE_API FT4EntityBaseRenderingAttribute
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityBaseRenderingAttribute()
		: Scale(1.0f)
		, ImportRotationYaw(-90.0f)
	{
	}

	UPROPERTY(EditAnywhere, Category = Property, meta = (ClampMin = "0.1", ClampMax = "10"))
	float Scale;

	UPROPERTY(EditAnywhere, Category = Property, meta = (ClampMin = "-360.0", ClampMax = "360.0"))
	float ImportRotationYaw;
};

class UTexture2D;
UCLASS(ClassGroup = Tech4Labs, Category = "Tech4Labs")
class T4ENGINE_API UT4EntityAsset : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	virtual void Serialize(FArchive& Ar) override;
	virtual void PostLoad() override;
#if WITH_EDITOR
	void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	//~ End UObject interface

	virtual ET4EntityType GetEntityType() const { return ET4EntityType::None; }

#if WITH_EDITOR
	DECLARE_MULTICAST_DELEGATE(FOnPropertiesChanged);
	FOnPropertiesChanged& OnPropertiesChanged() { return OnPropertiesChangedDelegate; }
#endif // WITH_EDITOR

public:
	static const FName CallingContextName;

	UPROPERTY(EditAnywhere, Category=Attribute)
	FT4EntityDefaultAttribute Default;

#if WITH_EDITORONLY_DATA
	UPROPERTY()
	UTexture2D* ThumbnailImage; // Internal: The thumbnail image
#endif

private:
#if WITH_EDITOR
	FOnPropertiesChanged OnPropertiesChangedDelegate;
#endif
};