// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Public/Action/T4ActionContis.h"
#include "T4ContiAsset.generated.h"

/**
  * #24
 */
struct FT4ContiCustomVersion
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
	FT4ContiCustomVersion() {}
};

// #24
USTRUCT()
struct T4ASSET_API FT4ActionHeaderInfo
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	ET4ActionType ActionType;

	UPROPERTY(VisibleAnywhere)
	int32 ActionArrayIndex;

#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere)
	FName FolderName; // #56
#endif

public:
	FT4ActionHeaderInfo()
		: ActionType(ET4ActionType::None)
		, ActionArrayIndex(INDEX_NONE)
#if WITH_EDITORONLY_DATA
		, FolderName(NAME_None) // #56
#endif
	{
	}
};

// #56
USTRUCT()
struct T4ASSET_API FT4ActionFolderInfo
{
	GENERATED_USTRUCT_BODY()

public:
#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere)
	FName ParentFolderName; // #56 : lower win

	UPROPERTY(VisibleAnywhere)
	uint32 SortOrder; // #56 : lower win
#endif

public:
	FT4ActionFolderInfo()
#if WITH_EDITOR
		: ParentFolderName(NAME_None)
		, SortOrder(INDEX_NONE)
#endif
	{
	}
};

// #54
USTRUCT()
struct T4ASSET_API FT4ActionCompositeData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	TMap<uint32, FT4ActionHeaderInfo> HeaderInfoMap;

#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere)
	TMap<FName, FT4ActionFolderInfo> FolderInfoMap; // #56 : value = sortorder
#endif

	// #T4_ADD_ACTION_TAG_CONTI

	UPROPERTY(EditAnywhere)
	TArray<FT4BranchAction> BranchActions; // #54

	UPROPERTY(EditAnywhere)
	TArray<FT4SpecialMoveAction> SpecialMoveActions; // #54

	UPROPERTY(EditAnywhere)
	TArray<FT4AnimationAction> AnimationActions;

	UPROPERTY(EditAnywhere)
	TArray<FT4ParticleAction> ParticleActions;

	UPROPERTY(EditAnywhere)
	TArray<FT4DecalAction> DecalActions; // #54

	UPROPERTY(EditAnywhere)
	TArray<FT4ProjectileAction> ProjectileActions; // #63
	
	UPROPERTY(EditAnywhere)
	TArray<FT4TimeScaleAction> TimeScaleActions; // #54

	UPROPERTY(EditAnywhere)
	TArray<FT4CameraWorkAction> CameraWorkActions; // #54

public:
	void Reset();

#if WITH_EDITOR
	// #24
	template <class T>
	T* AddChild()
	{
		return static_cast<T*>(NewAndAddAction(
			T::StaticActionType()
		));
	}

	template <class T>
	void CopyAction(
		const FT4ContiActionBase* InSourceAction,
		T* InOutTargetAction
	); // #65

	FT4ContiActionBase* NewAndAddAction(
		ET4ActionType InNewActionType
	); // #24, #65

	FT4ContiActionBase* CloneAndAddAction(
		uint32 InSourceHeaderKey
	); // #65

	FT4ContiActionBase* GetActionBase(
		uint32 InActionHeaderKey
	); // #65
#endif

private:
#if WITH_EDITOR
	uint32 GetNewHeaderKey() const;
#endif
};

class UTexture2D;
class UT4EntityAsset;

UCLASS(ClassGroup = Tech4Labs, Category = "Tech4Labs")
class T4ASSET_API UT4ContiAsset : public UObject
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
	static const FName CallingContextName;

	UPROPERTY(EditAnywhere)
	FT4ActionCompositeData CompositeData;

	UPROPERTY(EditAnywhere, Category = Default)
	float MaxPlayTimeSec; // #56

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Editor)
	TSoftObjectPtr<UT4EntityAsset> TestEntityAsset;

	// #T4_ADD_EDITOR_PLAY_TAG

	UPROPERTY(EditAnywhere, Category = Editor)
	FName TestWeaponNameID; // #60

	UPROPERTY(EditAnywhere, Category = Editor)
	FName TestSandbackNameID; // #60

	UPROPERTY(EditAnywhere, Category = Editor)
	bool bTestAISystemDisabled; // #60

	UPROPERTY(EditAnywhere, Category = Editor)
	bool bTestSandbackRoleAttacker; // #63

	UPROPERTY(EditAnywhere, Category = Editor)
	bool bTestOverrideSkillData; // #63

	UPROPERTY(EditAnywhere, Category = Editor)
	bool bTestOverrideEffectData; // #68

	UPROPERTY(EditAnywhere, Category = Editor)
	FName TestSkillDataNameID; // #60

	UPROPERTY(EditAnywhere, Category = Editor)
	FName TestEffectDataNameID; // #60

	UPROPERTY()
	UTexture2D* ThumbnailImage; // Internal: The thumbnail image
#endif

private:
#if WITH_EDITOR
	FT4OnPropertiesChanged OnPropertiesChangedDelegate;
#endif
};
