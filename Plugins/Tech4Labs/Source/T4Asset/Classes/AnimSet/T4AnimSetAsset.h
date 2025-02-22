// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Public/T4AssetDefinitions.h"
#include "T4AnimSetAsset.generated.h"

/**
  * #39
 */
struct FT4AnimSetCustomVersion
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
	FT4AnimSetCustomVersion() {}
};

class UTexture2D;
class USkeleton;
class UAnimSequence;
class UAnimMontage;
class UBlendSpaceBase;
class UT4EntityAsset;

USTRUCT()
struct T4ASSET_API FT4AnimSetDefaultAttribute
{
	GENERATED_USTRUCT_BODY()

public:
	FT4AnimSetDefaultAttribute()
		: MinAccelerationScale(0.1f)
		, MaxAcceleratedMoveTimeSec(0.75f)
		, MaxFootStanceIdlePlayCount(3)
	{
	}

	UPROPERTY(EditAnywhere, Category = DefaultAttributes)
	float MinAccelerationScale;

	UPROPERTY(EditAnywhere, Category = DefaultAttributes)
	float MaxAcceleratedMoveTimeSec;

	UPROPERTY(EditAnywhere, Category = DefaultAttributes)
	uint32 MaxFootStanceIdlePlayCount;
};

USTRUCT()
struct T4ASSET_API FT4AnimSetBlendSpaceAttribute
{
	GENERATED_USTRUCT_BODY()

public:
	FT4AnimSetBlendSpaceAttribute()
		: StartWalkSpeedLevel(200.0f)
		, StartRunSpeedLevel(400.0f)
		, StartFastRunSpeedLevel(600.0f)
	{
	}

	UPROPERTY(EditAnywhere, Category = RunAndWalkBlendSpace)
	float StartWalkSpeedLevel;

	UPROPERTY(EditAnywhere, Category = RunAndWalkBlendSpace)
	float StartRunSpeedLevel;

	UPROPERTY(EditAnywhere, Category = RunAndWalkBlendSpace)
	float StartFastRunSpeedLevel;
};

USTRUCT()
struct T4ASSET_API FT4AnimSequenceInfo
{
	GENERATED_USTRUCT_BODY()

public:
	FT4AnimSequenceInfo()
		: Name(NAME_None)
		, DurationSec(0.0f)
	{
	}

	FORCEINLINE bool operator==(const FName& InKey) const
	{
		return (Name == InKey) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4AnimSequenceInfo& InRhs) const
	{
		return (Name == InRhs.Name) ? true : false;
	}

	UPROPERTY(VisibleAnywhere, Category = AnimSequenceInfo)
	FName Name;

	UPROPERTY(VisibleAnywhere, Category = AnimSequenceInfo)
	float DurationSec;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = AnimSequenceInfo)
	TSoftObjectPtr<UAnimSequence> AnimSequnceAsset;
#endif
};

USTRUCT()
struct T4ASSET_API FT4BlendSpaceInfo
{
	GENERATED_USTRUCT_BODY()

public:
	FT4BlendSpaceInfo()
		: Name(NAME_None)
	{
	}

	FORCEINLINE bool operator==(const FName& InKey) const
	{
		return (Name == InKey) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4BlendSpaceInfo& InRhs) const
	{
		return (Name == InRhs.Name) ? true : false;
	}

	UPROPERTY(VisibleAnywhere, Category = BlendSpaceInfo)
	FName Name;

	UPROPERTY(EditAnywhere, Category = BlendSpaceInfo)
	TSoftObjectPtr<UBlendSpaceBase> BlendSpaceAsset;
};

// #39
USTRUCT()
struct T4ASSET_API FT4AnimSetEditorTransientData
{
	GENERATED_USTRUCT_BODY()

public:
	FT4AnimSetEditorTransientData()
	{
		Reset();
	}

	void Reset()
	{
#if WITH_EDITOR
		TransientSelectSkillSectionName = NAME_None;
		TransientSelectAdditiveSectionName = NAME_None;
		TransientSelectDefaultSectionName = NAME_None;
		TransientSelectBlendSpaceName = NAME_None;
#endif
	}

	// #39 : WARN : CustomDetails 에서 사용하는 임시 프로퍼티! (저장되지 않는다!!)
	UPROPERTY(EditAnywhere, Transient)
	FName TransientSelectSkillSectionName;

	UPROPERTY(EditAnywhere, Transient)
	TSoftObjectPtr<UAnimSequence> TransientSkillAnimSequenceAsset;

	UPROPERTY(EditAnywhere, Transient)
	FName TransientSelectAdditiveSectionName;

	UPROPERTY(EditAnywhere, Transient)
	TSoftObjectPtr<UAnimSequence> TransientAdditiveAnimSequenceAsset;

	UPROPERTY(EditAnywhere, Transient)
	FName TransientSelectDefaultSectionName;

	UPROPERTY(EditAnywhere, Transient)
	TSoftObjectPtr<UAnimSequence> TransientDefaultAnimSequenceAsset;

	UPROPERTY(EditAnywhere, Transient)
	FName TransientSelectBlendSpaceName;

	UPROPERTY(EditAnywhere, Transient)
	TSoftObjectPtr<UBlendSpaceBase> TransientBlendSpaceAsset;
	// ~#39 : WARN : CustomDetails 에서 사용하는 임시 프로퍼티!
};

UCLASS(ClassGroup = Tech4Labs, Category = "Tech4Labs")
class T4ASSET_API UT4AnimSetAsset : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	void Serialize(FArchive& Ar) override;
	virtual void PostLoad() override;
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	//~ End UObject interface

#if WITH_EDITOR
	DECLARE_MULTICAST_DELEGATE(FT4OnPropertiesChanged);
	FT4OnPropertiesChanged& OnPropertiesChanged() { return OnPropertiesChangedDelegate; }

#endif // WITH_EDITOR

public:
	UPROPERTY(EditAnywhere, Category = Common)
	TSoftObjectPtr<USkeleton> SkeletonAsset;

	// CustomizeSkillAnimationDetails

	UPROPERTY(EditAnywhere, Category = EditAnimationLayer)
	bool bSkillAnimMontageAutoGen; // #69

	UPROPERTY(EditAnywhere, Category = EditAnimationLayer)
	TSoftObjectPtr<UAnimMontage> SkillAnimMontageAsset; // #69

	UPROPERTY(EditAnywhere, Category = EditAnimationLayer)
	TArray<FT4AnimSequenceInfo> SkillAnimSequenceArray;


	// CustomizeAdditiveAnimationDetails

	UPROPERTY(EditAnywhere, Category = EditAnimationLayer)
	bool bAdditiveAnimMontageAutoGen; // #69

	UPROPERTY(EditAnywhere, Category = EditAnimationLayer)
	TSoftObjectPtr<UAnimMontage> AdditiveAnimMontageAsset; // #69

	UPROPERTY(EditAnywhere, Category = EditAnimationLayer)
	TArray<FT4AnimSequenceInfo> AdditiveAnimSequenceArray;


	// CustomizeDefaultAnimationDetails

	UPROPERTY(EditAnywhere, Category = EditAnimationLayer)
	bool bDefaultAnimMontageAutoGen; // #69

	UPROPERTY(EditAnywhere, Category = EditAnimationLayer)
	TSoftObjectPtr<UAnimMontage> DefaultAnimMontageAsset; // #38, #69

	UPROPERTY(EditAnywhere, Category = EditAnimationLayer)
	FT4AnimSetDefaultAttribute DefaultAttributes;

	UPROPERTY(EditAnywhere, Category = EditAnimationLayer)
	TArray<FT4AnimSequenceInfo> DefaultAnimSequenceArray;


	// CustomizeBlendSpaceDetails

	UPROPERTY(EditAnywhere, Category = EditAnimationLayer)
	FT4AnimSetBlendSpaceAttribute BlendSpaceAttributes; // #38

	UPROPERTY(EditAnywhere, Category = EditAnimationLayer)
	TArray<FT4BlendSpaceInfo> BlendSpaceArray;

public:
#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor)
	TSoftObjectPtr<UT4EntityAsset> PreviewEntityAsset;

	UPROPERTY()
	UTexture2D* ThumbnailImage; // Internal: The thumbnail image

	// #39 : WARN : AnimSetCustomDetails 에서 사용하는 임시 프로퍼티! (저장되지 않는다!!)
	// TODO : Transient 설정으로 Editor Dirty 가 발생함으로 다른 방법 고려 필요
	UPROPERTY(EditAnywhere, Transient)
	FT4AnimSetEditorTransientData EditorTransientData;
#endif

private:
#if WITH_EDITOR
	FT4OnPropertiesChanged OnPropertiesChangedDelegate;
#endif
};
