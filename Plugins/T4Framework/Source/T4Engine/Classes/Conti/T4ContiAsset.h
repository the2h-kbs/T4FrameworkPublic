// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Classes/Action/T4Action_Root.h"
#if WITH_EDITOR
#include "T4ContiWithEditor.h"
#endif
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

	T4ENGINE_API const static FGuid GUID;

private:
	FT4ContiCustomVersion() {}
};

class UTexture2D;
UCLASS(ClassGroup = Tech4Labs, Category = "Tech4Labs", BlueprintType, Blueprintable)
class T4ENGINE_API UT4ContiAsset : public UObject
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

public:
#if WITH_EDITOR
	DECLARE_MULTICAST_DELEGATE(FOnPropertiesChanged);
	FOnPropertiesChanged& OnPropertiesChanged() { return OnPropertiesChangedDelegate; }

	static UT4ContiAsset* CreateAsset(const FString& InAssetName, const FString& InPackagePath);
	bool SaveAsset(bool bCheckDirty = false);
#endif // WITH_EDITOR

public:
	UPROPERTY(EditAnywhere)
	FT4RootAction RootAction;

#if WITH_EDITORONLY_DATA
	UPROPERTY()
	UTexture2D* ThumbnailImage; // Internal: The thumbnail image
#endif

#if WITH_EDITOR
	TMap<ET4ActionType, FSelectedEditorActionTypeInfo> SelectedEditorActionMap; // #30 : only Editor
#endif

private:
#if WITH_EDITOR
	FOnPropertiesChanged OnPropertiesChangedDelegate;
#endif
};
