// Copyright 2019 Tech4 Labs. All Rights Reserved.

#include "T4PacketHandler_CS.h"

#include "Network/Protocol/T4PacketCS_Move.h"
#include "Network/Protocol/T4PacketSC_Move.h"

#include "T4Engine/Public/T4Engine.h"
#include "T4Core/Public/T4CoreMinimal.h"

#include "T4GameplayInternal.h"

/**
  *
 */
// #27
// #T4_ADD_PACKET_TAG

void FT4PacketHandlerCS::HandleCS_MoveWarmup(const FT4PacketMoveWarmupCS* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketCtoS::MoveWarmup == InPacket->PacketCS);

	IT4GameObject* SenderObject = GetGameObject(InPacket->SenderID);
	if (nullptr == SenderObject)
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("[SL:%u] HandleCS_MoveWarmup '%' failed. SenderObject not found."),
			uint32(LayerType),
			*(InPacket->ToString())
		);
		return;
	}

	FT4PacketMoveToSC NewPacketSC;
	NewPacketSC.ObjectID = InPacket->SenderID;

	NewPacketSC.MoveDirection = InPacket->MoveDirection;
	NewPacketSC.MoveSpeed = 500.0f; // TODO : Char Stat Table

	check(NewPacketSC.ObjectID.IsValid());

	DoSendPacketForServer(&NewPacketSC); // #15, #17, #29
}

void FT4PacketHandlerCS::HandleCS_JumpWarmup(const FT4PacketJumpWarmupCS* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketCtoS::JumpWarmup == InPacket->PacketCS);

	IT4GameObject* SenderObject = GetGameObject(InPacket->SenderID);
	if (nullptr == SenderObject)
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("[SL:%u] HandleCS_JumpWarmup '%' failed. SenderObject not found."),
			uint32(LayerType),
			*(InPacket->ToString())
		);
		return;
	}

	FT4PacketJumpToSC NewPacketSC;
	NewPacketSC.ObjectID = InPacket->SenderID;
	NewPacketSC.JumpDirection = InPacket->JumpDirection;
	NewPacketSC.JumpSpeed = 500.0f; // TODO : Char Stat Table

	check(NewPacketSC.ObjectID.IsValid());

	DoSendPacketForServer(&NewPacketSC); // #15, #17, #29
}

void FT4PacketHandlerCS::HandleCS_Locked(const FT4PacketLockedCS* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketCtoS::Locked == InPacket->PacketCS);

	IT4GameObject* SenderObject = GetGameObject(InPacket->SenderID);
	if (nullptr == SenderObject)
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("[SL:%u] HandleCS_Locked '%' failed. SenderObject not found."),
			uint32(LayerType),
			*(InPacket->ToString())
		);
		return;
	}

	FT4PacketLockedSC NewPacketSC;
	NewPacketSC.ObjectID = InPacket->SenderID;
	NewPacketSC.LockedRotation = InPacket->LockedRotation;

	check(NewPacketSC.ObjectID.IsValid());

	DoSendPacketForServer(&NewPacketSC); // #15, #17, #29
}

void FT4PacketHandlerCS::HandleCS_UnLocked(const FT4PacketUnLockedCS* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketCtoS::UnLocked == InPacket->PacketCS);

	IT4GameObject* SenderObject = GetGameObject(InPacket->SenderID);
	if (nullptr == SenderObject)
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("[SL:%u] HandleCS_UnLocked '%' failed. SenderObject not found."),
			uint32(LayerType),
			*(InPacket->ToString())
		);
		return;
	}

	FT4PacketUnLockedSC NewPacketSC;
	NewPacketSC.ObjectID = InPacket->SenderID;

	check(NewPacketSC.ObjectID.IsValid());

	DoSendPacketForServer(&NewPacketSC); // #15, #17, #29
}

void FT4PacketHandlerCS::HandleCS_CmdTeleport(const FT4PacketCmdTeleportCS* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketCtoS::CmdTeleport == InPacket->PacketCS);

	IT4GameObject* SenderObject = GetGameObject(InPacket->SenderID);
	if (nullptr == SenderObject)
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("[SL:%u] HandleCS_CmdTeleport '%' failed. SenderObject not found."),
			uint32(LayerType),
			*(InPacket->ToString())
		);
		return;
	}

	FT4PacketTeleportToSC NewPacketSC;
	NewPacketSC.ObjectID = InPacket->SenderID;
	NewPacketSC.TargetLocation = InPacket->TargetLocation;

	check(NewPacketSC.ObjectID.IsValid());

	DoSendPacketForServer(&NewPacketSC); // #15, #17, #29
}
