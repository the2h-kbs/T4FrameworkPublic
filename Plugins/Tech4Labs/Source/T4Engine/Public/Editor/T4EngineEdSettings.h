// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "T4EngineEdSettings.generated.h"

/**
  *
 */
UCLASS(config = Tech4Labs, defaultconfig, meta = (DisplayName = "T4EngineEd"))
class UT4EngineEdSettings : public UDeveloperSettings
{
public:
	GENERATED_UCLASS_BODY()
	
	// Begin UDeveloperSettings Interface
	FName GetCategoryName() const override;
	FText GetSectionText() const override;
	// END UDeveloperSettings Interface

	void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

	DECLARE_MULTICAST_DELEGATE_TwoParams(FOnEngineEdSettingsChanged, const FString&, const UT4EngineEdSettings*);

	static FOnEngineEdSettingsChanged& OnSettingsChanged();

public:
	UPROPERTY(config, EditAnywhere, Category=NameTable)
	FSoftObjectPath BlendSpaceNameTable;

	UPROPERTY(config, EditAnywhere, Category=NameTable)
	FSoftObjectPath DefaultSectionNameTable;

	UPROPERTY(config, EditAnywhere, Category=NameTable)
	FSoftObjectPath LocomotionSectionNameTable;

	UPROPERTY(config, EditAnywhere, Category=NameTable)
	FSoftObjectPath SkillSectionNameTable;

protected:
	static FOnEngineEdSettingsChanged SettingsChangedDelegate;
};
