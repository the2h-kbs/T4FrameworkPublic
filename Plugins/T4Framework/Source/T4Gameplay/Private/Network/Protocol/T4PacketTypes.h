// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Framework/Public/T4FrameworkNet.h" // #42
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

	Equip, // #22
	UnEquip, // #22

	Exchange, // #37

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

	Exchange, // #37

	Attack,
	Effect,

	None,
};
