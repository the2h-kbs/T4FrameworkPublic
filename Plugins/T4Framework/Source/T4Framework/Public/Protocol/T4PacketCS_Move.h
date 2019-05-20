// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4PacketBase.h"
#include "T4PacketCS.h"
#include "T4PacketCS_Move.generated.h"

/**
  *
 */
 // #T4_ADD_PACKET_TAG
// ET4PacketCtoS::MoveWarmup
// ET4PacketCtoS::JumpWarmup
// ET4PacketCtoS::Locked
// ET4PacketCtoS::UnLocked

USTRUCT()
struct T4FRAMEWORK_API FT4PacketMoveWarmupCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere)
	FVector MoveDirection;

public:
	FT4PacketMoveWarmupCS()
		: FT4PacketCtoS(ET4PacketCtoS::MoveWarmup)
		, MoveDirection(FVector::ZeroVector)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!SenderID.IsValid())
		{
			OutMsg = TEXT("Invalid Send ObjectID!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:MoveWarmup"));
	}
};

USTRUCT()
struct T4FRAMEWORK_API FT4PacketJumpWarmupCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere)
	FVector JumpDirection;

public:
	FT4PacketJumpWarmupCS()
		: FT4PacketCtoS(ET4PacketCtoS::JumpWarmup)
		, JumpDirection(FVector::ZeroVector)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!SenderID.IsValid())
		{
			OutMsg = TEXT("Invalid Send ObjectID!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:JumpWarmup"));
	}
};

USTRUCT()
struct T4FRAMEWORK_API FT4PacketLockedCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere)
	FRotator LockedRotation;

public:
	FT4PacketLockedCS()
		: FT4PacketCtoS(ET4PacketCtoS::Locked)
		, LockedRotation(FRotator::ZeroRotator)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!SenderID.IsValid())
		{
			OutMsg = TEXT("Invalid Send ObjectID!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:Locked"));
	}
};

USTRUCT()
struct T4FRAMEWORK_API FT4PacketUnLockedCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID SenderID;

public:
	FT4PacketUnLockedCS()
		: FT4PacketCtoS(ET4PacketCtoS::UnLocked)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!SenderID.IsValid())
		{
			OutMsg = TEXT("Invalid Send ObjectID!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:UnLocked"));
	}
};
