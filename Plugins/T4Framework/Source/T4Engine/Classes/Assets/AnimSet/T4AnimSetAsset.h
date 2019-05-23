// Copyright 2019 Tech4 Labs. All Rights Reserved.

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
class UAnimSequence;
class UT4EntityAsset;

USTRUCT(BlueprintType)
struct T4ENGINE_API FT4AnimSequenceInfo
{
	GENERATED_USTRUCT_BODY()

public:
	FT4AnimSequenceInfo()
		: Name(NAME_None)
		, DurationSec(0.0f)
	{
	}

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AnimSequenceInfo)
	FName Name;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AnimSequenceInfo)
	float DurationSec;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AnimSequenceInfo)
	TSoftObjectPtr<UAnimSequence> AnimSequnce;
};

UCLASS(ClassGroup = Tech4Labs, Category = "Tech4Labs", BlueprintType, Blueprintable)
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

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Skeleton)
	TSoftObjectPtr<USkeleton> Skeleton;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AnimSequenceInfos)
	TMap<FName, FT4AnimSequenceInfo> AnimSequenceInfos;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Editor)
	TSoftObjectPtr<UT4EntityAsset> ParentEntityPath;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Editor)
	ET4AnimSequenceCategory AnimSequenceCategory;

	UPROPERTY()
	UTexture2D* ThumbnailImage; // Internal: The thumbnail image
#endif

	UPROPERTY(EditAnywhere, Transient)
	TSoftObjectPtr<UAnimSequence> TransientAnimSequence; // #39 : WARN : CustomDetails 에서 사용하는 임시 프로퍼티!

private:
#if WITH_EDITOR
	FOnPropertiesChanged OnPropertiesChangedDelegate;
#endif
};
