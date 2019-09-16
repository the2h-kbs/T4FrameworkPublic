// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ActionCodeBase.h"
#include "T4ActionCodeMove.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG_CODE

// ET4ActionType::MoveAsync
// ET4ActionType::MoveSync
// ET4ActionType::Teleport
// ET4ActionType::Jump
// ET4ActionType::Roll
// ET4ActionType::Turn

// ET4ActionType::MoveStop // #52
// ET4ActionType::MoveSpeedSync // #52

// ET4ActionType::Launch // #63 : Only Projectile

// #40
USTRUCT()
struct T4ENGINE_API FT4MoveAsyncAction : public FT4CodeActionBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FVector MoveDirection;

	UPROPERTY(EditAnywhere)
	float HeadYawAngle; // #44 : degree, LockOn 일 경우 이동 방향과 달라진다.

public:
	FT4MoveAsyncAction()
		: FT4CodeActionBase(StaticActionType())
		, MoveDirection(FVector::ZeroVector)
		, HeadYawAngle(TNumericLimits<float>::Max())
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::MoveAsync; }

	bool Validate(FString& OutMsg) override
	{
		if (MoveDirection.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid MoveDirection");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("MoveAsyncToAction"));
	}
};

// #33, #40
USTRUCT()
struct T4ENGINE_API FT4MoveSyncAction : public FT4CodeActionBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FVector MoveVelocity; // #50

	UPROPERTY(EditAnywhere)
	float HeadYawAngle; // #40 : degree, LockOn 일 경우 이동 방향과 달라진다.

	UPROPERTY(EditAnywhere)
	bool bForceMaxSpeed; // #52 : MovementComponet::MaxSpeed 를 사용할지에 대한 Flag, 기본값이 false 로 Velocity 에서 Speed 를 얻는다. 동기화 이슈!!

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere)
	FVector ServerNavPoint; // #52

	UPROPERTY(EditAnywhere)
	FVector ServerDirection; // #52
#endif

public:
	FT4MoveSyncAction()
		: FT4CodeActionBase(StaticActionType())
		, MoveVelocity(FVector::ZeroVector)
		, HeadYawAngle(TNumericLimits<float>::Max())
		, bForceMaxSpeed(false) // #52
#if WITH_EDITORONLY_DATA
		, ServerNavPoint(FVector::ZeroVector) // #52
		, ServerDirection(FVector::ForwardVector) // #52
#endif
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::MoveSync; }

	bool Validate(FString& OutMsg) override
	{
		if (MoveVelocity.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid MoveVelocity");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("MoveSyncToAction"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4JumpAction : public FT4CodeActionBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FVector JumpVelocity;

public:
	FT4JumpAction()
		: FT4CodeActionBase(StaticActionType())
		, JumpVelocity(FVector::ZeroVector)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Jump; }

	bool Validate(FString& OutMsg) override
	{
		if (JumpVelocity.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid JumpVelocity");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("JumpToAction"));
	}
};

// #46
USTRUCT()
struct T4ENGINE_API FT4RollAction : public FT4CodeActionBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FVector RollVelocity;

public:
	FT4RollAction()
		: FT4CodeActionBase(StaticActionType())
		, RollVelocity(FVector::ZeroVector)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Roll; }

	bool Validate(FString& OutMsg) override
	{
		if (RollVelocity.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid RollVelocity");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("RollToAction"));
	}
};

// #34
USTRUCT()
struct T4ENGINE_API FT4TeleportAction : public FT4CodeActionBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FVector TargetLocation;

public:
	FT4TeleportAction()
		: FT4CodeActionBase(StaticActionType())
		, TargetLocation(FVector::ZeroVector)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Teleport; }

	bool Validate(FString& OutMsg) override
	{
		if (TargetLocation.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid TargetLocation");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("TeleportToAction"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4TurnAction : public FT4CodeActionBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	ET4TargetType TurnType;

	UPROPERTY(EditAnywhere)
	float RotationYawRate; // #44 : 초당 회전 단위, Yaw

	UPROPERTY(EditAnywhere)
	float TargetYawAngle; // #40 : LockOn 에서 방향을 맞출 경우 사용 (only ET4TargetType::TargetCustom)

public:
	FT4TurnAction()
		: FT4CodeActionBase(StaticActionType())
		, TurnType(ET4TargetType::Default)
		, RotationYawRate(0.0f)
		, TargetYawAngle(0.0f)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Turn; }

	FString ToString() const override
	{
		return FString(TEXT("TurnAction"));
	}
};

// #52
USTRUCT()
struct T4ENGINE_API FT4MoveStopAction : public FT4CodeActionBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FVector StopLocation;

	UPROPERTY(EditAnywhere)
	float HeadYawAngle; // #40 : degree, LockOn 일 경우 이동 방향과 달라진다.

	UPROPERTY(EditAnywhere)
	bool bSyncLocation;

public:
	FT4MoveStopAction()
		: FT4CodeActionBase(StaticActionType())
		, StopLocation(FVector::ZeroVector)
		, HeadYawAngle(TNumericLimits<float>::Max())
		, bSyncLocation(false)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::MoveStop; }

	FString ToString() const override
	{
		return FString(TEXT("MoveStopAction"));
	}
};

// #52
USTRUCT()
struct T4ENGINE_API FT4MoveSpeedSyncAction : public FT4CodeActionBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	float MoveSpeed;

public:
	FT4MoveSpeedSyncAction()
		: FT4CodeActionBase(StaticActionType())
		, MoveSpeed(0.0f)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::MoveSpeedSync; }

	FString ToString() const override
	{
		return FString(TEXT("MoveSpeedSyncAction"));
	}
};

// #63
USTRUCT()
struct T4ENGINE_API FT4LaunchAction : public FT4CodeActionBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	float MoveSpeed;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<class UT4ContiAsset> HeadContiAsset;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UT4ContiAsset> EndContiAsset;

	UPROPERTY(EditAnywhere)
	ET4LoadingPolicy LoadingPolicy;

	UPROPERTY(EditAnywhere)
	float ThrowOffsetTimeSec; // #63 : Projectile 로딩시간이 길어져 이미 발사 되었을 경우의 타이밍 맞추기

	UPROPERTY(EditAnywhere)
	float MaxPlayTimeSec; // #63 : Conti 의 MaxPlaytTimeSec 또는 서버에서 계산된 Hit 시간까지의 ProjectileDurationSec

	UPROPERTY(EditAnywhere)
	FT4ObjectID TargetObjectID; // #63 : Target 이 있을 경우만 설정됨!

public:
	FT4LaunchAction()
		: FT4CodeActionBase(StaticActionType())
		, MoveSpeed(0.0f)
		, LoadingPolicy(ET4LoadingPolicy::Default)
		, ThrowOffsetTimeSec(0.0f)
		, MaxPlayTimeSec(0.0f)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Launch; }

	FString ToString() const override
	{
		return FString(TEXT("LaunchAction"));
	}
};