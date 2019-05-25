// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ActionBase.h"
#include "T4Action_Move.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG

// ET4ActionType::MoveTo
// ET4ActionType::TeleportTo
// ET4ActionType::JumpTo

// ET4ActionType::MoveSpeed

// ET4ActionType::Rotation

USTRUCT()
struct T4ENGINE_API FT4MoveToAction : public FT4ObjectAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	ET4MoveType MoveType;

	UPROPERTY(EditAnywhere)
	FVector MoveDirection;

	UPROPERTY(EditAnywhere)
	float MoveSpeed;

public:
	FT4MoveToAction()
		: FT4ObjectAction(StaticActionType())
		, MoveType(ET4MoveType::Sync)
		, MoveDirection(FVector::ZeroVector)
		, MoveSpeed(0.0f)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::MoveTo; }

	bool Validate(FString& OutMsg) override
	{
		if (MoveDirection.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid MoveDirection");
			return false;
		}
		if (0.0f == MoveSpeed)
		{
			OutMsg = TEXT("Invalid MoveSpeed");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("OAction:MoveTo"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4JumpToAction : public FT4ObjectAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName SectionName;

public:
	FT4JumpToAction()
		: FT4ObjectAction(StaticActionType())
		, SectionName(NAME_None)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::JumpTo; }

	FString ToString() const override
	{
		return FString(TEXT("OAction:Jump"));
	}
};

// #34
USTRUCT()
struct T4ENGINE_API FT4TeleportToAction : public FT4ObjectAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FVector TargetLocation;

public:
	FT4TeleportToAction()
		: FT4ObjectAction(StaticActionType())
		, TargetLocation(FVector::ZeroVector)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::TeleportTo; }

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
		return FString(TEXT("OAction:TeleportTo"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4MoveSpeedAction : public FT4ObjectAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	ET4MoveType MoveType;

	UPROPERTY(EditAnywhere)
	float MoveSpeed;

public:
	FT4MoveSpeedAction()
		: FT4ObjectAction(StaticActionType())
		, MoveType(ET4MoveType::Sync)
		, MoveSpeed(0.0f)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::MoveSpeed; }

	FString ToString() const override
	{
		return FString(TEXT("OAction:MoveSpeed"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4RotationAction : public FT4ObjectAction
{
	GENERATED_USTRUCT_BODY()

public:
	// #39 : FT4ContiCustomizeDetails::CustomizeRotationActionDetails

	UPROPERTY(EditAnywhere)
	ET4RotationType RotationType;

public:
	FT4RotationAction()
		: FT4ObjectAction(StaticActionType())
		, RotationType(ET4RotationType::Default)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Rotation; }

	FString ToString() const override
	{
		return FString(TEXT("OAction:Rotation"));
	}
};
