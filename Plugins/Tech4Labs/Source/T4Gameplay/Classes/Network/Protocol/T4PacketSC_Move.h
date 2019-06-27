// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4PacketSC.h"
#include "T4PacketSC_Move.generated.h"

/**
  *
 */
 // #T4_ADD_PACKET_TAG

// ET4PacketStoC::MoveTo
// ET4PacketStoC::JumpTo
// ET4PacketStoC::RollTo // #46
// ET4PacketStoC::TurnTo // #40

// ET4PacketStoC::LockOn
// ET4PacketStoC::LockOff

// WARN : #46
//
// StoC 패킷은 클라에서 넘어온 Normalize 된 Direction 에 Speed 를 얻어 Velocity 를 넘겨준다. 
//

USTRUCT()
struct FT4PacketMoveToSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere)
	FVector MoveVelocity;

	UPROPERTY(VisibleAnywhere)
	float HeadYawAngle; // #40 : 필요할 때 3D 로 확장. 이동은 패킷량이 많음을 고려.

	UPROPERTY(VisibleAnywhere)
	bool bForceMaxSpeed; // #50 : AIController 만 제어

public:
	FT4PacketMoveToSC()
		: FT4PacketStoC(ET4PacketStoC::MoveTo)
		, MoveVelocity(FVector::ZeroVector)
		, HeadYawAngle(TNumericLimits<float>::Max())
		, bForceMaxSpeed(false) // #50 : AIController 만 제어
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!ObjectID.IsValid())
		{
			OutMsg = TEXT("Invalid ObjectID");
			return false;
		}
		if (MoveVelocity.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid MoveVelocity!");
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
	FVector JumpVelocity;

public:
	FT4PacketJumpToSC()
		: FT4PacketStoC(ET4PacketStoC::JumpTo)
		, JumpVelocity(FVector::ZeroVector)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!ObjectID.IsValid())
		{
			OutMsg = TEXT("Invalid ObjectID");
			return false;
		}
		if (JumpVelocity.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid JumpVelocity!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:JumpTo"));
	}
};

// #46
USTRUCT()
struct FT4PacketRollToSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere)
	FVector RollVelocity;

public:
	FT4PacketRollToSC()
		: FT4PacketStoC(ET4PacketStoC::RollTo)
		, RollVelocity(FVector::ZeroVector)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!ObjectID.IsValid())
		{
			OutMsg = TEXT("Invalid ObjectID");
			return false;
		}
		if (RollVelocity.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid RollVelocity!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:RollTo"));
	}
};

USTRUCT()
struct FT4PacketTurnToSC : public FT4PacketStoC // #40
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere)
	float TargetYawAngle; // #40 : 필요할 때 3D 로 확장.

public:
	FT4PacketTurnToSC()
		: FT4PacketStoC(ET4PacketStoC::TurnTo)
		, TargetYawAngle(TNumericLimits<float>::Max())
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
		return FString(TEXT("SC_Packet:TurnTo"));
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
struct FT4PacketLockOnSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere)
	float HeadYawAngle; // #40 : 필요할 때 3D 로 확장.

public:
	FT4PacketLockOnSC()
		: FT4PacketStoC(ET4PacketStoC::LockOn)
		, HeadYawAngle(TNumericLimits<float>::Max())
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
		return FString(TEXT("SC_Packet:LockOn"));
	}
};

USTRUCT()
struct FT4PacketLockOffSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere)
	float HeadYawAngle; // #40 : 필요할 때 3D 로 확장.

public:
	FT4PacketLockOffSC()
		: FT4PacketStoC(ET4PacketStoC::LockOff)
		, HeadYawAngle(TNumericLimits<float>::Max())
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
		return FString(TEXT("SC_Packet:LockOff"));
	}
};
