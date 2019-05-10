// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4PacketTypes.generated.h"

/**
  *
 */

// WARN : Packet 추가 시는 아래 테그를 찾아 추가된 패킷을 모두 구현해주어야 함!!
// #T4_ADD_PACKET_TAG

UENUM()
enum class ET4PacketCtoS : uint32
{
	MoveWarmup,
	JumpWarmup,

	Locked,
	UnLocked,

	Equip,
	UnEquip,

	Attack,

	// Test
	CmdChangeWorld,

	CmdPCEnter,
	CmdPCLeave,

	CmdNPCEnter, // #31
	CmdNPCLeave, // #31

	CmdFOEnter, // #31
	CmdFOLeave, // #31

	CmdItemEnter, // #41
	CmdItemLeave, // #41

	CmdTeleport,

	None,
};

UENUM()
enum class ET4PacketStoC : uint32
{
	ChangeWorld,

	MyPCEnter,
	PCEnter,
	PCLeave,

	NPCEnter, // #31
	NPCLeave, // #31

	FOEnter, // #31
	FOLeave, // #31

	ItemEnter, // #41
	ItemLeave, // #41

	MoveTo,
	JumpTo,
	TeleportTo,

	Locked,
	UnLocked,

	Equip,
	UnEquip,

	Attack,
	Effect,

	None,
};

static const uint32 INVALID_T4_NET_ID = (uint32)-1;

// #34 : 별도 서버에서 관리하는 ID 가 있다면 대체하기 위해 사용!!
USTRUCT()
struct FT4NetID
{
public:
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	uint32 Value;

public:
	FT4NetID()
		: Value(INVALID_T4_NET_ID)
	{
	}

	FT4NetID(const uint32& InValue)
		: Value(InValue)
	{
	}

	FT4NetID(const FT4NetID& InValue)
		: Value(InValue.Value)
	{
	}

	FORCEINLINE uint32 operator*() const
	{
		return Value;
	}

	FORCEINLINE FT4NetID operator=(const FT4NetID& InRhs)
	{
		Value = InRhs.Value;
		return *this;
	}

	FORCEINLINE bool operator==(const FT4NetID& InRhs) const
	{
		return (Value == InRhs.Value) ? true : false;
	}

	FORCEINLINE bool operator!=(const FT4NetID& InRhs) const
	{
		return (Value != InRhs.Value) ? true : false;
	}

	FORCEINLINE friend uint32 GetTypeHash(const FT4NetID& InRhs)
	{
		return InRhs.Value;
	}

	FORCEINLINE bool IsValid() const
	{
		return (INVALID_T4_NET_ID != Value) ? true : false;
	}

	FORCEINLINE FString ToString() const
	{
		return FString::Printf(
			TEXT("FT4NetID '%u'"),
			Value
		);
	}
};