// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4PacketBase.h"
#include "T4PacketSC.h"
#include "T4PacketSC_Move.generated.h"

/**
  *
 */
 // #T4_ADD_PACKET_TAG

// ET4PacketStoC::MoveTo
// ET4PacketStoC::JumpTo

// ET4PacketStoC::Locked
// ET4PacketStoC::UnLocked

USTRUCT()
struct FT4PacketMoveToSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere)
	FVector MoveDirection;

	UPROPERTY(VisibleAnywhere)
	float MoveSpeed;

public:
	FT4PacketMoveToSC()
		: FT4PacketStoC(ET4PacketStoC::MoveTo)
		, MoveDirection(FVector::ZeroVector)
		, MoveSpeed(0.0f)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!ObjectID.IsValid())
		{
			OutMsg = TEXT("Invalid ObjectID");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:MoveTo"));
	}
};

USTRUCT()
struct FT4PacketJumpToSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere)
	FVector JumpDirection;

	UPROPERTY(VisibleAnywhere)
	float JumpSpeed;

public:
	FT4PacketJumpToSC()
		: FT4PacketStoC(ET4PacketStoC::JumpTo)
		, JumpDirection(FVector::ZeroVector)
		, JumpSpeed(0.0f)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!ObjectID.IsValid())
		{
			OutMsg = TEXT("Invalid ObjectID");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:Jump"));
	}
};

USTRUCT()
struct FT4PacketTeleportToSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere)
	FVector TargetLocation;

public:
	FT4PacketTeleportToSC()
		: FT4PacketStoC(ET4PacketStoC::TeleportTo)
		, TargetLocation(FVector::ZeroVector)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!ObjectID.IsValid())
		{
			OutMsg = TEXT("Invalid ObjectID");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:TeleportTo"));
	}
};

USTRUCT()
struct FT4PacketLockedSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere)
	FRotator LockedRotation;

public:
	FT4PacketLockedSC()
		: FT4PacketStoC(ET4PacketStoC::Locked)
		, LockedRotation(FRotator::ZeroRotator)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!ObjectID.IsValid())
		{
			OutMsg = TEXT("Invalid ObjectID");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:Locked"));
	}
};

USTRUCT()
struct FT4PacketUnLockedSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID ObjectID;

public:
	FT4PacketUnLockedSC()
		: FT4PacketStoC(ET4PacketStoC::UnLocked)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!ObjectID.IsValid())
		{
			OutMsg = TEXT("Invalid ObjectID");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:UnLocked"));
	}
};
