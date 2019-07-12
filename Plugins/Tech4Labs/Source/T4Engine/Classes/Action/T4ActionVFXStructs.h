// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ActionBaseStructs.h"
#include "Public/T4EngineAnimSets.h"
#include "T4ActionVFXStructs.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG

// ET4ActionType::Animation
// ET4ActionType::Particle
// ET4ActionType::Decal // #52
// ET4ActionType::TimeScale // #52
// ET4ActionType::CameraWork // #52

USTRUCT()
struct T4ENGINE_API FT4AnimationAction : public FT4ObjectAction
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ContiCustomizeDetails::CustomizeAnimationActionDetails

	UPROPERTY(EditAnywhere)
	FName SectionName;

	UPROPERTY(EditAnywhere)
	float BlendInTimeSec;

	UPROPERTY(EditAnywhere)
	float BlendOutTimeSec;

	UPROPERTY(EditAnywhere)
	float PlayRate;

	UPROPERTY(EditAnywhere)
	int32 LoopCount;

public:
	FT4AnimationAction()
		: FT4ObjectAction(StaticActionType())
		, SectionName(NAME_None)
		, BlendInTimeSec(T4AnimSetBlendInTimeSec)
		, BlendOutTimeSec(T4AnimSetBlendOutTimeSec)
		, PlayRate(1.0f)
		, LoopCount(1)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Animation; }

	FString ToString() const override
	{
		return FString(TEXT("OAction:Animation"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4ParticleAction : public FT4ObjectAction
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ContiCustomizeDetails::CustomizeParticleActionDetails

	UPROPERTY(EditAnywhere)
	FName BoneOrSocketName;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UParticleSystem> ParticleAsset;

	UPROPERTY(EditAnywhere)
	ET4LoadingPolicy LoadingPolicy;

public:
	FT4ParticleAction()
		: FT4ObjectAction(StaticActionType())
		, BoneOrSocketName(NAME_None)
		, LoadingPolicy(ET4LoadingPolicy::Default)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Particle; }

	FString ToString() const override
	{
		return FString(TEXT("OAction:Particle"));
	}
};

// #54
USTRUCT()
struct T4ENGINE_API FT4DecalAction : public FT4ObjectAction
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ContiCustomizeDetails::CustomizeDecalActionDetails

public:
	FT4DecalAction()
		: FT4ObjectAction(StaticActionType())
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Decal; }

	FString ToString() const override
	{
		return FString(TEXT("OAction:Decal"));
	}
};

// #54
USTRUCT()
struct T4ENGINE_API FT4TimeScaleAction : public FT4ObjectAction
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ContiCustomizeDetails::CustomizeTimeScaleActionDetails

public:
	FT4TimeScaleAction()
		: FT4ObjectAction(StaticActionType())
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::TimeScale; }

	FString ToString() const override
	{
		return FString(TEXT("OAction:TimeScale"));
	}
};

// #54
USTRUCT()
struct T4ENGINE_API FT4CameraWorkAction : public FT4ObjectAction
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ContiCustomizeDetails::CustomizeDecalActionDetails

public:
	FT4CameraWorkAction()
		: FT4ObjectAction(StaticActionType())
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::CameraWork; }

	FString ToString() const override
	{
		return FString(TEXT("OAction:CameraWork"));
	}
};
