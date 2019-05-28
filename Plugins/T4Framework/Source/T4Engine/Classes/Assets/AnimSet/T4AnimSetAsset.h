// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/T4EngineTypes.h"
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

	T4ENGINE_API const static FGuid GUID;

private:
	FT4AnimSetCustomVersion() {}
};

class UTexture2D;
class USkeleton;
class UAnimSequence;
class UAnimMontage;
class UBlendSpace;
class UT4EntityAsset;

USTRUCT()
struct T4ENGINE_API FT4AnimSequenceInfo
{
	GENERATED_USTRUCT_BODY()

public:
	FT4AnimSequenceInfo()
		: Name(NAME_None)
		, DurationSec(0.0f)
	{
	}

	UPROPERTY(VisibleAnywhere, Category = AnimSequenceInfo)
	FName Name;

	UPROPERTY(VisibleAnywhere, Category = AnimSequenceInfo)
	float DurationSec;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = AnimSequenceInfo)
	TSoftObjectPtr<UAnimSequence> AnimSequnce;
#endif
};

USTRUCT()
struct T4ENGINE_API FT4BlendSpaceInfo
{
	GENERATED_USTRUCT_BODY()

public:
	FT4BlendSpaceInfo()
		: Name(NAME_None)
	{
	}

	UPROPERTY(VisibleAnywhere, Category = BlendSpaceInfo)
	FName Name;

	UPROPERTY(EditAnywhere, Category = BlendSpaceInfo)
	TSoftObjectPtr<UBlendSpace> BlendSpace;
};

UCLASS(ClassGroup = Tech4Labs, Category = "Tech4Labs")
class T4ENGINE_API UT4AnimSetAsset : public UObject
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
	DECLARE_MULTICAST_DELEGATE(FOnPropertiesChanged);
	FOnPropertiesChanged& OnPropertiesChanged() { return OnPropertiesChangedDelegate; }

#endif // WITH_EDITOR

public:
	static const FName CallingContextName;

	UPROPERTY(EditAnywhere, Category = AssetInfo)
	TSoftObjectPtr<USkeleton> Skeleton;

	UPROPERTY(VisibleAnywhere, Category = SkillAnimation)
	UAnimMontage* SkillAnimMontageAutoGen;

	UPROPERTY(EditAnywhere, Category = SkillAnimation)
	TMap<FName, FT4AnimSequenceInfo> SkillAnimSequenceInfos;

	UPROPERTY(VisibleAnywhere, Category = SystemAnimation)
	UAnimMontage* SystemAnimMontageAutoGen;

	UPROPERTY(EditAnywhere, Category = SystemAnimation)
	TMap<FName, FT4AnimSequenceInfo> SystemAnimSequenceInfos;

	UPROPERTY(EditAnywhere, Category = BaseBlendSpace)
	TMap<FName, FT4BlendSpaceInfo> BaseBlendSpaceInfos;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor)
	TSoftObjectPtr<UT4EntityAsset> ParentEntityAsset;

	UPROPERTY()
	UTexture2D* ThumbnailImage; // Internal: The thumbnail image
#endif

	// #39 : WARN : CustomDetails 에서 사용하는 임시 프로퍼티! (저장되지 않는다!!)
	UPROPERTY(EditAnywhere, Transient)
	FName TransientSelectSkillSectionName;

	UPROPERTY(EditAnywhere, Transient)
	TSoftObjectPtr<UAnimSequence> TransientSkillAnimSequence;

	UPROPERTY(EditAnywhere, Transient)
	FName TransientSelectSystemSectionName;

	UPROPERTY(EditAnywhere, Transient)
	TSoftObjectPtr<UAnimSequence> TransientSystemAnimSequence;

	UPROPERTY(EditAnywhere, Transient)
	FName TransientSelectBaseBlendSpaceName;

	UPROPERTY(EditAnywhere, Transient)
	TSoftObjectPtr<UBlendSpace> TransientBaseBlendSpace;
	// ~#39 : WARN : CustomDetails 에서 사용하는 임시 프로퍼티!

private:
#if WITH_EDITOR
	FOnPropertiesChanged OnPropertiesChangedDelegate;
#endif
};
