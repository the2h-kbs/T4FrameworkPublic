// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4PacketBase.h"
#include "T4PacketCS.h"
#include "T4PacketCS_Command.generated.h"

/**
  *
 */
 // #T4_ADD_PACKET_TAG

// ET4PacketCtoS::CmdChangeWorld
// ET4PacketCtoS::CmdPCEnter
// ET4PacketCtoS::CmdPCLeave

// ET4PacketCtoS::CmdNPCEnter // #31
// ET4PacketCtoS::CmdNPCLeave // #31

// ET4PacketCtoS::CmdFOEnter // #31
// ET4PacketCtoS::CmdFOLeave // #31

// ET4PacketCtoS::CmdItemEnter // #41
// ET4PacketCtoS::CmdItemLeave // #41

// ET4PacketCtoS::CmdTeleport

USTRUCT()
struct T4FRAMEWORK_API FT4PacketCmdChangeWorldCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FName WorldNameInTable;

public:
	FT4PacketCmdChangeWorldCS()
		: FT4PacketCtoS(ET4PacketCtoS::CmdChangeWorld)
		, WorldNameInTable(NAME_None)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:CmdChangeWorld"));
	}
};

USTRUCT()
struct T4FRAMEWORK_API FT4PacketCmdPCEnterCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FName CharacterNameInTable;

	UPROPERTY(VisibleAnywhere)
	FVector SpawnLocation;

	UPROPERTY(VisibleAnywhere)
	FRotator SpawnRotation;

	UPROPERTY(VisibleAnywhere)
	bool bSetViewTarget;

public:
	FT4PacketCmdPCEnterCS()
		: FT4PacketCtoS(ET4PacketCtoS::CmdPCEnter)
		, CharacterNameInTable(NAME_None)
		, SpawnLocation(FVector::ZeroVector)
		, SpawnRotation(FRotator::ZeroRotator)
		, bSetViewTarget(false)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:CmdPCEnter"));
	}
};

USTRUCT()
struct T4FRAMEWORK_API FT4PacketCmdPCLeaveCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID LeaveObjectID; // IsValid == false ? MyPC : OtherPC

public:
	FT4PacketCmdPCLeaveCS()
		: FT4PacketCtoS(ET4PacketCtoS::CmdPCLeave)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:CmdPCLeave"));
	}
};

// #31
USTRUCT()
struct T4FRAMEWORK_API FT4PacketCmdNPCEnterCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FName NPCNameInTable;

	UPROPERTY(VisibleAnywhere)
	FVector SpawnLocation;

	UPROPERTY(VisibleAnywhere)
	FRotator SpawnRotation;

public:
	FT4PacketCmdNPCEnterCS()
		: FT4PacketCtoS(ET4PacketCtoS::CmdNPCEnter)
		, NPCNameInTable(NAME_None)
		, SpawnLocation(FVector::ZeroVector)
		, SpawnRotation(FRotator::ZeroRotator)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:CmdNPCEnter"));
	}
};

// #31
USTRUCT()
struct T4FRAMEWORK_API FT4PacketCmdNPCLeaveCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID LeaveObjectID;

public:
	FT4PacketCmdNPCLeaveCS()
		: FT4PacketCtoS(ET4PacketCtoS::CmdNPCLeave)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:CmdNPCLeave"));
	}
};

// #31
USTRUCT()
struct T4FRAMEWORK_API FT4PacketCmdFOEnterCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FName FONameInTable;

	UPROPERTY(VisibleAnywhere)
	FVector SpawnLocation;

	UPROPERTY(VisibleAnywhere)
	FRotator SpawnRotation;

public:
	FT4PacketCmdFOEnterCS()
		: FT4PacketCtoS(ET4PacketCtoS::CmdFOEnter)
		, FONameInTable(NAME_None)
		, SpawnLocation(FVector::ZeroVector)
		, SpawnRotation(FRotator::ZeroRotator)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:CmdFOEnter"));
	}
};

// #31
USTRUCT()
struct T4FRAMEWORK_API FT4PacketCmdFOLeaveCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID LeaveObjectID;

public:
	FT4PacketCmdFOLeaveCS()
		: FT4PacketCtoS(ET4PacketCtoS::CmdFOLeave)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:CmdFOLeave"));
	}
};

// #41
USTRUCT()
struct T4FRAMEWORK_API FT4PacketCmdItemEnterCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FName ItemNameInTable;

	UPROPERTY(VisibleAnywhere)
	FVector SpawnLocation;

	UPROPERTY(VisibleAnywhere)
	FRotator SpawnRotation;

public:
	FT4PacketCmdItemEnterCS()
		: FT4PacketCtoS(ET4PacketCtoS::CmdItemEnter)
		, ItemNameInTable(NAME_None)
		, SpawnLocation(FVector::ZeroVector)
		, SpawnRotation(FRotator::ZeroRotator)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:CmdItemEnter"));
	}
};

// #41
USTRUCT()
struct T4FRAMEWORK_API FT4PacketCmdItemLeaveCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID LeaveObjectID;

public:
	FT4PacketCmdItemLeaveCS()
		: FT4PacketCtoS(ET4PacketCtoS::CmdItemLeave)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:CmdItemLeave"));
	}
};

USTRUCT()
struct T4FRAMEWORK_API FT4PacketCmdTeleportCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere)
	FVector TargetLocation;

public:
	FT4PacketCmdTeleportCS()
		: FT4PacketCtoS(ET4PacketCtoS::CmdTeleport)
		, TargetLocation(FVector::ZeroVector)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!SenderID.IsValid())
		{
			OutMsg = TEXT("Invalid Send ObjectID!");
			return false;
		}
		if (TargetLocation.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid TargetLocation!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:CmdTeleport"));
	}
};