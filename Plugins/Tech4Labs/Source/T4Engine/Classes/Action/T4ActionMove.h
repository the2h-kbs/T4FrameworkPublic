// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ActionBase.h"
#include "T4ActionMove.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG

// ET4ActionType::MoveAsync
// ET4ActionType::MoveSync
// ET4ActionType::Teleport
// ET4ActionType::Jump
// ET4ActionType::Roll
// ET4ActionType::Turn

// ET4ActionType::MoveStop // #52
// ET4ActionType::MoveSpeedSync // #52

// #40
USTRUCT()
struct T4ENGINE_API FT4MoveAsyncAction : public FT4BaseAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FVector MoveDirection;

	UPROPERTY(EditAnywhere)
	float HeadYawAngle; // #44 : degree, LockOn 일 경우 이동 방향과 달라진다.

public:
	FT4MoveAsyncAction()
		: FT4BaseAction(StaticActionType())
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
		return FString(TEXT("Action:MoveAsyncTo"));
	}
};

// #33, #40
USTRUCT()
struct T4ENGINE_API FT4MoveSyncAction : public FT4BaseAction
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
		: FT4BaseAction(StaticActionType())
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
		return FString(TEXT("Action:MoveSyncTo"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4JumpAction : public FT4BaseAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FVector JumpVelocity;

public:
	FT4JumpAction()
		: FT4BaseAction(StaticActionType())
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
		return FString(TEXT("Action:JumpTo"));
	}
};

// #46
USTRUCT()
struct T4ENGINE_API FT4RollAction : public FT4BaseAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FVector RollVelocity;

public:
	FT4RollAction()
		: FT4BaseAction(StaticActionType())
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
		return FString(TEXT("Action:RollTo"));
	}
};

// #34
USTRUCT()
struct T4ENGINE_API FT4TeleportAction : public FT4BaseAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FVector TargetLocation;

public:
	FT4TeleportAction()
		: FT4BaseAction(StaticActionType())
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
		return FString(TEXT("Action:TeleportTo"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4TurnAction : public FT4BaseAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	ET4TurnType TurnType;

	UPROPERTY(EditAnywhere)
	float RotationYawRate; // #44 : 초당 회전 단위, Yaw

	UPROPERTY(EditAnywhere)
	float TargetYawAngle; // #40 : LockOn 에서 방향을 맞출 경우 사용 (only ET4TurnType::TargetYawAngle)

public:
	FT4TurnAction()
		: FT4BaseAction(StaticActionType())
		, TurnType(ET4TurnType::Default)
		, RotationYawRate(0.0f)
		, TargetYawAngle(0.0f)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Turn; }

	FString ToString() const override
	{
		return FString(TEXT("Action:Turn"));
	}
};

// #54
USTRUCT()
struct T4ENGINE_API FT4SpecialMoveAction : public FT4BaseAction
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ContiCustomizeDetails::CustomizeSpecialMoveActionDetails

public:
	FT4SpecialMoveAction()
		: FT4BaseAction(StaticActionType())
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::SpecialMove; }

	FString ToString() const override
	{
		return FString(TEXT("Action:SpecialMove"));
	}
};

// #52
USTRUCT()
struct T4ENGINE_API FT4MoveStopAction : public FT4BaseAction
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
		: FT4BaseAction(StaticActionType())
		, StopLocation(FVector::ZeroVector)
		, HeadYawAngle(TNumericLimits<float>::Max())
		, bSyncLocation(false)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::MoveStop; }

	FString ToString() const override
	{
		return FString(TEXT("Action:MoveStop"));
	}
};

// #52
USTRUCT()
struct T4ENGINE_API FT4MoveSpeedSyncAction : public FT4BaseAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	float MoveSpeed;

public:
	FT4MoveSpeedSyncAction()
		: FT4BaseAction(StaticActionType())
		, MoveSpeed(0.0f)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::MoveSpeedSync; }

	FString ToString() const override
	{
		return FString(TEXT("Action:MoveSpeedSync"));
	}
};
