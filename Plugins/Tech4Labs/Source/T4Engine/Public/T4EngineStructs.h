// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Public/Action/T4EngineActionTypes.h"
#include "Public/T4EngineTypes.h"
#include "Public/T4EngineAnimSets.h"

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
		MoveSpeed[(uint8)ET4MoveType::Sync] = 0.0f;
		MoveSpeed[(uint8)ET4MoveType::Async] = 0.0f;
		MoveAccelerationScale = 1.0f; // #38, #52 (0.1 ~ 1)
		RotationYawRate = 520.0f; // #44, #46

		CapsuleRadius = 0.0f;
		HalfHeight = 0.0f;
		MeshImportRotation = FRotator::ZeroRotator;
		RelativeScale3D = FVector::OneVector; // #37
	}

	const float GetMoveSpeed(const ET4MoveType InMoveType) const
	{
		return MoveSpeed[(uint8)InMoveType]; // #33
	}

	void SetMoveSpeed(ET4MoveType InMoveType, float InMoveSpeed)
	{
		MoveSpeed[(uint8)InMoveType] = InMoveSpeed;
	}

	bool bIsLockOn;

	float MoveSpeed[(uint8)ET4MoveType::Count]; // #33
	float MoveAccelerationScale; // #38, #52 (0.1 ~ 1)
	float RotationYawRate; // #46

	float CapsuleRadius;
	float HalfHeight; // #18
	FRotator MeshImportRotation; // #30
	FVector RelativeScale3D; // #37
};

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
	DECLARE_MULTICAST_DELEGATE_ThreeParams(FOnHitOverlap, const FName&, IT4GameObject*, const FHitResult&);
	FOnHitOverlap OnHitOverlap;
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
