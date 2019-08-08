// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ActionContiBase.h"
#include "Public/T4AssetDefinitions.h"
#include "T4ActionContis.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG_CONTI

// ET4ActionType::Branch // #54
// ET4ActionType::SpecialMove
// ET4ActionType::Animation
// ET4ActionType::Particle
// ET4ActionType::Decal // #52
// ET4ActionType::Projectile // #63
// ET4ActionType::TimeScale // #52
// ET4ActionType::CameraWork // #52

class UT4ContiAsset;

// #54
USTRUCT()
struct T4ASSET_API FT4BranchAction : public FT4ContiActionBase
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ContiCustomizeDetails::CustomizeBranchActionDetails
	UPROPERTY(EditAnywhere)
	ET4BranchCondition Contition;

	UPROPERTY(EditAnywhere)
	FName ConditionName;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UT4ContiAsset> ContiAsset;

	UPROPERTY(EditAnywhere)
	ET4LoadingPolicy LoadingPolicy;

public:
	FT4BranchAction()
		: FT4ContiActionBase(StaticActionType())
		, Contition(ET4BranchCondition::Default)
		, ConditionName(NAME_None)
		, LoadingPolicy(ET4LoadingPolicy::Default)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Branch; }

	FString ToString() const override
	{
		return FString(TEXT("Action:Branch"));
	}

	FString ToDisplayText() override
	{
		return FString::Printf(TEXT("Branch '%s'"), *(ContiAsset.GetAssetName())); // #54
	}
};

// #54
USTRUCT()
struct T4ASSET_API FT4SpecialMoveAction : public FT4ContiActionBase
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ContiCustomizeDetails::CustomizeSpecialMoveActionDetails

public:
	FT4SpecialMoveAction()
		: FT4ContiActionBase(StaticActionType())
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::SpecialMove; }

	FString ToString() const override
	{
		return FString(TEXT("Action:SpecialMove"));
	}
};

USTRUCT()
struct T4ASSET_API FT4AnimationAction : public FT4ContiActionBase
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
		: FT4ContiActionBase(StaticActionType())
		, SectionName(NAME_None)
		, BlendInTimeSec(T4AnimSetBlendInTimeSec)
		, BlendOutTimeSec(T4AnimSetBlendOutTimeSec)
		, PlayRate(1.0f)
		, LoopCount(1)
	{
		LifecyclePolicy = ET4LifecyclePolicy::Duration; // Animation 은 Duration 이 기본!
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Animation; }

	FString ToString() const override
	{
		return FString(TEXT("Action:Animation"));
	}

	FString ToDisplayText() override
	{
		return FString::Printf(TEXT("Animation '%s'"), *(SectionName.ToString())); // #54
	}
};

USTRUCT()
struct T4ASSET_API FT4ParticleAction : public FT4ContiActionBase
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ContiCustomizeDetails::CustomizeParticleActionDetails
	UPROPERTY(EditAnywhere)
	ET4AttachParent AttachParent;

	UPROPERTY(EditAnywhere)
	FName ActionPoint; // #57

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<class UParticleSystem> ParticleAsset;

	UPROPERTY(EditAnywhere)
	ET4LoadingPolicy LoadingPolicy;

	UPROPERTY(EditAnywhere)
	FVector Scale; // #54

	UPROPERTY(EditAnywhere)
	float PlayRate;

public:
	FT4ParticleAction()
		: FT4ContiActionBase(StaticActionType())
		, AttachParent(ET4AttachParent::Default) // #54
		, ActionPoint(T4ContoParentInheritActionPontName)
		, LoadingPolicy(ET4LoadingPolicy::Default)
		, Scale(FVector::OneVector) // #54
		, PlayRate(1.0f)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Particle; }

	FString ToString() const override
	{
		return FString(TEXT("Action:Particle"));
	}

	FString ToDisplayText() override
	{
		return FString::Printf(TEXT("Particle '%s'"), *(ParticleAsset.GetAssetName())); // #54
	}
};

// #54
USTRUCT()
struct T4ASSET_API FT4DecalAction : public FT4ContiActionBase
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ContiCustomizeDetails::CustomizeDecalActionDetails
	UPROPERTY(EditAnywhere)
	ET4AttachParent AttachParent;

	UPROPERTY(EditAnywhere)
	FName ActionPoint;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<class UMaterialInterface> DecalMaterial;

	UPROPERTY(EditAnywhere)
	ET4LoadingPolicy LoadingPolicy;

	UPROPERTY(EditAnywhere)
	FVector Scale; // #54

	UPROPERTY(EditAnywhere)
	int32 DecalSortOrder;

	UPROPERTY(EditAnywhere)
	FVector DecalSize;

	UPROPERTY(EditAnywhere)
	float FadeInTimeSec;

	UPROPERTY(EditAnywhere)
	float FadeOutTimeSec;

public:
	FT4DecalAction()
		: FT4ContiActionBase(StaticActionType())
		, AttachParent(ET4AttachParent::Default)
		, ActionPoint(T4ContoParentInheritActionPontName)
		, LoadingPolicy(ET4LoadingPolicy::Default)
		, Scale(FVector::OneVector)
		, DecalSortOrder(0)
		, DecalSize(128.0f, 256.0f, 256.0f)
		, FadeInTimeSec(0.5f)
		, FadeOutTimeSec(0.5f)
	{
		LifecyclePolicy = ET4LifecyclePolicy::Duration; // Decal 은 Duration 이 기본!
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Decal; }

	FString ToString() const override
	{
		return FString(TEXT("Action:Decal"));
	}

	FString ToDisplayText() override
	{
		return FString::Printf(TEXT("Decal '%s'"), *(DecalMaterial.GetAssetName())); // #54
	}
};

// #63
USTRUCT()
struct T4ASSET_API FT4ProjectileAction : public FT4ContiActionBase
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ContiCustomizeDetails::CustomizeProjectileActionDetails
	UPROPERTY(EditAnywhere)
	FName ActionPoint; // 어딘가에 붙어야 할 경우. 예) 오른손...

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UT4ContiAsset> CastingContiAsset;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UT4ContiAsset> HeadContiAsset;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UT4ContiAsset> EndContiAsset;

	UPROPERTY(EditAnywhere)
	ET4LoadingPolicy LoadingPolicy;

	UPROPERTY(EditAnywhere)
	float ThrowDelayTimeSec; // Play 이후 ActionPoint 에서 떨어지는 시간!

	UPROPERTY(EditAnywhere)
	float CastingStopDelayTimeSec; // ThrowDelayTimeSec 이후 Casting Conti 가 삭제될 시간

public:
	FT4ProjectileAction()
		: FT4ContiActionBase(StaticActionType())
		, ActionPoint(NAME_None)
		, LoadingPolicy(ET4LoadingPolicy::Default)
		, ThrowDelayTimeSec(0.0f)
		, CastingStopDelayTimeSec(0.2f)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Projectile; }

	FString ToString() const override
	{
		return FString(TEXT("Action:Projectile"));
	}

	FString ToDisplayText() override
	{
		return FString::Printf(TEXT("Projectile '%s'"), *(HeadContiAsset.GetAssetName()));
	}
};

// #54
USTRUCT()
struct T4ASSET_API FT4TimeScaleAction : public FT4ContiActionBase
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ContiCustomizeDetails::CustomizeTimeScaleActionDetails

public:
	FT4TimeScaleAction()
		: FT4ContiActionBase(StaticActionType())
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
struct T4ASSET_API FT4CameraWorkAction : public FT4ContiActionBase
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ContiCustomizeDetails::CustomizeDecalActionDetails

public:
	FT4CameraWorkAction()
		: FT4ContiActionBase(StaticActionType())
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::CameraWork; }

	FString ToString() const override
	{
		return FString(TEXT("Action:CameraWork"));
	}
};
