// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Public/T4EntityTypes.h"
#include "T4EntityAsset.generated.h"

/**
  * #35
 */
USTRUCT(BlueprintType)
struct T4CORE_API FT4EntityDefaultAttribute
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

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Default)
	FName UniqueName;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category=Thumbnail)
	FRotator ThumbnailRotation;

	UPROPERTY(EditAnywhere, Category=Thumbnail)
	FVector ThumbnailLocation;
#endif
};

USTRUCT(BlueprintType)
struct T4CORE_API FT4EntityPhysicalAttribute
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityPhysicalAttribute()
		: Height(200.0f)
		, Radius(25.0f)
		, RunSpeed(500.0f)
		, WalkSpeed(100.0f)
		, LockOnSpeed(100.0f)
		, JumpZVelocity(300.0f)
		, RotationRateYaw(720.0f)
	{
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Physical, meta = (ClampMin = "10.0", ClampMax = "1000"))
	float Height;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Physical, meta = (ClampMin = "10.0", ClampMax = "500"))
	float Radius;

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
struct T4CORE_API FT4EntityRenderingAttribute
{
	GENERATED_USTRUCT_BODY()

public:
	FT4EntityRenderingAttribute()
		: Scale(1.0f)
		, ImportRotationYaw(-90.0f)
	{
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Property, meta = (ClampMin = "0.1", ClampMax = "10"))
	float Scale;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Property, meta = (ClampMin = "-360.0", ClampMax = "360.0"))
	float ImportRotationYaw;
};

class UTexture2D;
UCLASS(ClassGroup = Tech4Labs, Category = "Tech4Labs", BlueprintType, Blueprintable)
class T4CORE_API UT4EntityAsset : public UObject
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

public:
	virtual ET4EntityType GetEntityType() const { return ET4EntityType::None; }

#if WITH_EDITOR
	DECLARE_MULTICAST_DELEGATE(FOnPropertiesChanged);
	FOnPropertiesChanged& OnPropertiesChanged() { return OnPropertiesChangedDelegate; }

	template <class T>
	static T* CreateAsset(const FString& InAssetName, const FString& InPackagePath);
	bool SaveAsset(bool bCheckDirty = false);
#endif // WITH_EDITOR

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Attribute)
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
