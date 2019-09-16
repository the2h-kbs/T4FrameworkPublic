// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "T4Asset/Public/Action/T4ActionTypes.h"
#include "Public/T4EngineTypes.h"
#include "Public/T4EngineDefinitions.h"

/**
  *
 */
struct FT4GameObjectProperty // #34
{
	FT4GameObjectProperty()
	{
		Reset();
	}

	void Reset()
	{
		bIsLockOn = false;

		// #33
		MoveSpeed[(uint8)ET4MoveMode::Sync] = 0.0f;
		MoveSpeed[(uint8)ET4MoveMode::Async] = 0.0f;
		MoveAccelerationScale = 1.0f; // #38, #52 (0.1 ~ 1)
		RotationYawRate = 520.0f; // #44, #46

		CapsuleRadius = 0.0f;
		HalfHeight = 0.0f;
		MeshImportRotation = FRotator::ZeroRotator;
		RelativeScale3D = FVector::OneVector; // #37
	}

	const float GetMoveSpeed(const ET4MoveMode InMoveType) const
	{
		return MoveSpeed[(uint8)InMoveType]; // #33
	}

	void SetMoveSpeed(ET4MoveMode InMoveType, float InMoveSpeed)
	{
		MoveSpeed[(uint8)InMoveType] = InMoveSpeed;
	}

	bool bIsLockOn;

	float MoveSpeed[(uint8)ET4MoveMode::Count]; // #33
	float MoveAccelerationScale; // #38, #52 (0.1 ~ 1)
	float RotationYawRate; // #46

	float CapsuleRadius;
	float HalfHeight; // #18
	FRotator MeshImportRotation; // #30
	FVector RelativeScale3D; // #37
};

#if !UE_BUILD_SHIPPING
struct FT4GameObjectDebugInfo
{
	FT4GameObjectDebugInfo()
	{
		Reset();
	}

	void Reset()
	{
		DebugBitFlags = 0;
	}

	uint32 DebugBitFlags; // #76 : ET4EngineDebugFlag
};
#endif

#if (WITH_EDITOR || WITH_SERVER_CODE)
struct FT4ServerGameObjectAttribute // #46
{
	FT4ServerGameObjectAttribute()
		: MaxWalkSpeed(100.0f)
		, MaxRunSpeed(100.0f)
		, MaxLockOnSpeed(100.0f)
		, MaxJumpZVelocity(550.0f)
		, MaxRollZVelocity(300.0f)
		, MaxRotationYawRate(520.0f)
	{
	}

	float MaxWalkSpeed;
	float MaxRunSpeed;
	float MaxLockOnSpeed;
	float MaxJumpZVelocity;
	float MaxRollZVelocity;
	float MaxRotationYawRate;
};

struct FT4ServerGameObjectDelegates // #49
{
	DECLARE_MULTICAST_DELEGATE_ThreeParams(FT4OnHitOverlap, const FName&, class IT4GameObject*, const FHitResult&);
	FT4OnHitOverlap OnHitOverlap;
};
#endif

struct FT4AnimParameters // #38
{
	FT4AnimParameters()
		: AnimMontageName(NAME_None)
		, SectionName(NAME_None)
		, PlayRate(1.0f)
		, OffsetTimeSec(0.0f)
		, BlendInTimeSec(T4AnimSetBlendInTimeSec)
		, BlendOutTimeSec(T4AnimSetBlendOutTimeSec)
		, LoopCount(1)
	{
	}

	FName AnimMontageName;
	FName SectionName;
	float PlayRate;
	float OffsetTimeSec;
	float BlendInTimeSec;
	float BlendOutTimeSec;
	int32 LoopCount;
};

class IT4GameObject;
struct FT4HitSingleResult
{
	FT4HitSingleResult()
		: QueryCollisionChannel(ECollisionChannel::ECC_MAX)
		, ResultObject(nullptr)
		, ResultLocation(FVector::ZeroVector)
	{
	}

	ECollisionChannel QueryCollisionChannel;

	IT4GameObject* ResultObject;
	FVector ResultLocation;
};
