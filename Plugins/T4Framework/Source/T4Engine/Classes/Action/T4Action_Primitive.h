// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ActionBase.h"
#include "T4Action_Primitive.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG

// ET4ActionType::Animation
// ET4ActionType::Particle

USTRUCT()
struct T4ENGINE_API FT4AnimationAction : public FT4ObjectAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName SectionName;

public:
	FT4AnimationAction()
		: FT4ObjectAction(StaticActionType())
		, SectionName(NAME_None)
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
	UPROPERTY(EditAnywhere)
	FName BoneOrSocketName;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UParticleSystem> ParticleAsset;

	UPROPERTY(EditAnywhere)
	bool bUsePreloading;

public:
	FT4ParticleAction()
		: FT4ObjectAction(StaticActionType())
		, BoneOrSocketName(NAME_None)
		, bUsePreloading(false)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Particle; }

	FString ToString() const override
	{
		return FString(TEXT("OAction:Particle"));
	}
};
