// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "T4EngineSettings.generated.h"

/**
  * #40
 */
UCLASS(config = Tech4Labs, defaultconfig, meta = (DisplayName = "T4Engine"))
class T4ENGINE_API UT4EngineSettings : public UDeveloperSettings
{
public:
	GENERATED_UCLASS_BODY()
	
	// Begin UDeveloperSettings Interface
	FName GetCategoryName() const override;
#if WITH_EDITOR
	FText GetSectionText() const override;
#endif
	// END UDeveloperSettings Interface

#if WITH_EDITOR
	void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

	DECLARE_MULTICAST_DELEGATE_TwoParams(FT4OnEngineSettingsChanged, const FString&, const UT4EngineSettings*);

	static FT4OnEngineSettingsChanged& OnSettingsChanged();
#endif

public:
	// Plugins/Tech4Labs/Config/DefaultTech4Labs.ini

	UPROPERTY(config, EditAnywhere, Category = GeneralControlSettting)
	float ComboAttackKeepTimeSec; // #45

	UPROPERTY(config, EditAnywhere, Category = GeneralControlSettting)
	float RollHoldTimeSec; // #46

	UPROPERTY(config, EditAnywhere, Category = GeneralControlSettting)
	float JumpHoldTimeSec; // #46

	UPROPERTY(config, EditAnywhere, Category=GeneralCameraSettting)
	float CameraRotateHoldTimeSec;

	UPROPERTY(config, EditAnywhere, Category=GeneralCameraSettting)
	float CameraLagSpeed;

	UPROPERTY(config, EditAnywhere, Category=GeneralCameraSettting)
	float CameraZoomSpeed;

	UPROPERTY(config, EditAnywhere, Category=TPSCameraSettting)
	float TPS_FieldOfViewDegree;

	UPROPERTY(config, EditAnywhere, Category=TPSCameraSettting)
	float TPS_DefaultZoomDistance;

	UPROPERTY(config, EditAnywhere, Category=TPSCameraSettting)
	float TPS_MinZoomDistance;

	UPROPERTY(config, EditAnywhere, Category=TPSCameraSettting)
	float TPS_MaxZoomDistance;

	UPROPERTY(config, EditAnywhere, Category = TPSCameraSettting)
	FRotator TPS_DefaultRotation;

	UPROPERTY(config, EditAnywhere, Category=ShoulderViewCameraSettting)
	float SV_FieldOfViewDegree;

	UPROPERTY(config, EditAnywhere, Category=ShoulderViewCameraSettting)
	float SV_DefaultZoomDistance;

	UPROPERTY(config, EditAnywhere, Category= ShoulderViewCameraSettting)
	float SV_MinZoomDistance;

	UPROPERTY(config, EditAnywhere, Category= ShoulderViewCameraSettting)
	float SV_MaxZoomDistance;

	UPROPERTY(config, EditAnywhere, Category= ShoulderViewCameraSettting)
	FVector SV_SocketOffset;

protected:
#if WITH_EDITOR
	static FT4OnEngineSettingsChanged SettingsChangedDelegate;
#endif
};
