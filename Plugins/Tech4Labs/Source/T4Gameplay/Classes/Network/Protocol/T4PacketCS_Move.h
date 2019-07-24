// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4PacketCS.h"
#include "T4PacketCS_Move.generated.h"

/**
  *
 */
 // #T4_ADD_PACKET_TAG_CS

// ET4PacketCtoS::Move
// ET4PacketCtoS::Jump
// ET4PacketCtoS::Roll // 46
// ET4PacketCtoS::Turn // #40
// ET4PacketCtoS::LockOn
// ET4PacketCtoS::LockOff

// WARN : #46
//
// CtoS 패킷의 Vector 는 Normalize 된 방향 벡터를 담아야 한다. Speed 및 Velocity 는 
// 서버측에서 구해 넘겨주는 것으로 처리한다.
//

USTRUCT()
struct FT4PacketMoveCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere)
	FVector MoveToLocation; // #52 : Normal + (MoveSpeed * GameplayDefaultNetworkLatencySec) / 레이턴시 감안 거리

	UPROPERTY(VisibleAnywhere)
	float HeadYawAngle; // #40 : 필요하다면 3D 로 확장. 이동 패킷은 량이 많음을 고려.

public:
	FT4PacketMoveCS()
		: FT4PacketCtoS(ET4PacketCtoS::Move)
		, MoveToLocation(FVector::ZeroVector)
		, HeadYawAngle(TNumericLimits<float>::Max()) // #40
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!SenderID.IsValid())
		{
			OutMsg = TEXT("Invalid Send ObjectID!");
			return false;
		}
		if (MoveToLocation.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid MoveToLocation!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:Move"));
	}
};

USTRUCT()
struct FT4PacketJumpCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere)
	FVector JumpDirection;

public:
	FT4PacketJumpCS()
		: FT4PacketCtoS(ET4PacketCtoS::Jump)
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
		if (JumpDirection.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid JumpDirection!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:Jump"));
	}
};

// #46
USTRUCT()
struct FT4PacketRollCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere)
	FVector RollDirection;

public:
	FT4PacketRollCS()
		: FT4PacketCtoS(ET4PacketCtoS::Roll)
		, RollDirection(FVector::ZeroVector)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!SenderID.IsValid())
		{
			OutMsg = TEXT("Invalid Send ObjectID!");
			return false;
		}
		if (RollDirection.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid RollDirection!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:Roll"));
	}
};

USTRUCT()
struct FT4PacketTurnCS : public FT4PacketCtoS // #40
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere)
	float TargetYawAngle; // #40 : 필요하다면 3D 로 확장.

public:
	FT4PacketTurnCS()
		: FT4PacketCtoS(ET4PacketCtoS::Turn)
		, TargetYawAngle(TNumericLimits<float>::Max())
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
		return FString(TEXT("CS_Packet:Turn"));
	}
};

USTRUCT()
struct FT4PacketLockOnCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere)
	float HeadYawAngle; // #40 : 필요할 때 3D 로 확장.

public:
	FT4PacketLockOnCS()
		: FT4PacketCtoS(ET4PacketCtoS::LockOn)
		, HeadYawAngle(TNumericLimits<float>::Max())
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
		return FString(TEXT("CS_Packet:LockOn"));
	}
};

USTRUCT()
struct FT4PacketLockOffCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere)
	float HeadYawAngle; // #40 : 필요할 때 3D 로 확장.

public:
	FT4PacketLockOffCS()
		: FT4PacketCtoS(ET4PacketCtoS::LockOff)
		, HeadYawAngle(TNumericLimits<float>::Max())
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
		return FString(TEXT("CS_Packet:LockOff"));
	}
};
