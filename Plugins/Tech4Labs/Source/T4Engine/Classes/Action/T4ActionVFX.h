// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ActionBase.h"
#include "Public/T4EngineAnimSets.h"
#include "T4ActionVFX.generated.h"

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
struct T4ENGINE_API FT4AnimationAction : public FT4BaseAction
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
		: FT4BaseAction(StaticActionType())
		, SectionName(NAME_None)
		, BlendInTimeSec(T4AnimSetBlendInTimeSec)
		, BlendOutTimeSec(T4AnimSetBlendOutTimeSec)
		, PlayRate(1.0f)
		, LoopCount(1)
	{
		LifecyclePolicy = ET4LifecyclePolicy::Duration; // Animation 은 Duration 이 기초!
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Animation; }

	FString ToString() const override
	{
		return FString(TEXT("Action:Animation"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4ParticleAction : public FT4BaseAction
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ContiCustomizeDetails::CustomizeParticleActionDetails
	UPROPERTY(EditAnywhere)
	FVector Scale; // #54

	UPROPERTY(EditAnywhere)
	FName ActionPoint; // #57

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<class UParticleSystem> ParticleAsset;

	UPROPERTY(EditAnywhere)
	ET4LoadingPolicy LoadingPolicy;

	UPROPERTY(EditAnywhere)
	float PlayRate;

public:
	FT4ParticleAction()
		: FT4BaseAction(StaticActionType())
		, Scale(FVector::OneVector) // #54
		, ActionPoint(NAME_None)
		, LoadingPolicy(ET4LoadingPolicy::Default)
		, PlayRate(1.0f)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Particle; }

	FString ToString() const override
	{
		return FString(TEXT("Action:Particle"));
	}
};

// #54
USTRUCT()
struct T4ENGINE_API FT4DecalAction : public FT4BaseAction
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ContiCustomizeDetails::CustomizeDecalActionDetails

public:
	FT4DecalAction()
		: FT4BaseAction(StaticActionType())
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Decal; }

	FString ToString() const override
	{
		return FString(TEXT("Action:Decal"));
	}
};

// #54
USTRUCT()
struct T4ENGINE_API FT4TimeScaleAction : public FT4BaseAction
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ContiCustomizeDetails::CustomizeTimeScaleActionDetails

public:
	FT4TimeScaleAction()
		: FT4BaseAction(StaticActionType())
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::TimeScale; }

	FString ToString() const override
	{
		return FString(TEXT("Action:TimeScale"));
	}
};

// #54
USTRUCT()
struct T4ENGINE_API FT4CameraWorkAction : public FT4BaseAction
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ContiCustomizeDetails::CustomizeDecalActionDetails

public:
	FT4CameraWorkAction()
		: FT4BaseAction(StaticActionType())
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::CameraWork; }

	FString ToString() const override
	{
		return FString(TEXT("Action:CameraWork"));
	}
};
