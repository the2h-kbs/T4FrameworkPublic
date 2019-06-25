// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

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

void FT4PacketHandlerCS::HandleCS_Move(const FT4PacketMoveCS* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketCtoS::Move == InPacket->PacketCS);

	IT4GameObject* SenderObject = GetGameObject(InPacket->SenderID);
	if (nullptr == SenderObject)
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("[SL:%u] HandleCS_Move '%' failed. SenderObject not found."),
			uint32(LayerType),
			*(InPacket->ToString())
		);
		return;
	}

	FT4ServerGameObjectAttribute& ObjectAttribute = SenderObject->GetServerAttribute(); // #46

	FT4PacketMoveToSC NewPacketSC;
	NewPacketSC.ObjectID = InPacket->SenderID;
	NewPacketSC.MoveVelocity = InPacket->MoveDirection * ObjectAttribute.MaxRunSpeed;
	NewPacketSC.HeadYawAngle = InPacket->HeadYawAngle; // #40

	check(NewPacketSC.ObjectID.IsValid());

	DoSendPacketForServer(&NewPacketSC); // #15, #17, #29
}

void FT4PacketHandlerCS::HandleCS_Jump(const FT4PacketJumpCS* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketCtoS::Jump == InPacket->PacketCS);

	IT4GameObject* SenderObject = GetGameObject(InPacket->SenderID);
	if (nullptr == SenderObject)
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("[SL:%u] HandleCS_Jump '%' failed. SenderObject not found."),
			uint32(LayerType),
			*(InPacket->ToString())
		);
		return;
	}

	FT4ServerGameObjectAttribute& ObjectAttribute = SenderObject->GetServerAttribute(); // #46

	FT4PacketJumpToSC NewPacketSC;
	NewPacketSC.ObjectID = InPacket->SenderID;
	NewPacketSC.JumpVelocity = InPacket->JumpDirection;
	NewPacketSC.JumpVelocity.Z = ObjectAttribute.MaxJumpZVelocity;

	check(NewPacketSC.ObjectID.IsValid());

	DoSendPacketForServer(&NewPacketSC); // #15, #17, #29
}

// #46
void FT4PacketHandlerCS::HandleCS_Roll(const FT4PacketRollCS* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketCtoS::Roll == InPacket->PacketCS);

	IT4GameObject* SenderObject = GetGameObject(InPacket->SenderID);
	if (nullptr == SenderObject)
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("[SL:%u] HandleCS_Roll '%' failed. SenderObject not found."),
			uint32(LayerType),
			*(InPacket->ToString())
		);
		return;
	}

	FT4ServerGameObjectAttribute& ObjectAttribute = SenderObject->GetServerAttribute(); // #46

	FT4PacketRollToSC NewPacketSC;
	NewPacketSC.ObjectID = InPacket->SenderID;
	NewPacketSC.RollVelocity = InPacket->RollDirection;
	NewPacketSC.RollVelocity.Z = ObjectAttribute.MaxRollZVelocity;

	check(NewPacketSC.ObjectID.IsValid());

	DoSendPacketForServer(&NewPacketSC); // #15, #17, #29
}

void FT4PacketHandlerCS::HandleCS_Turn(const FT4PacketTurnCS* InPacket)
{
	// #40
	check(nullptr != InPacket);
	check(ET4PacketCtoS::Turn == InPacket->PacketCS);

	IT4GameObject* SenderObject = GetGameObject(InPacket->SenderID);
	if (nullptr == SenderObject)
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("[SL:%u] HandleCS_Turn '%' failed. SenderObject not found."),
			uint32(LayerType),
			*(InPacket->ToString())
		);
		return;
	}

	FT4PacketTurnToSC NewPacketSC;
	NewPacketSC.ObjectID = InPacket->SenderID;
	NewPacketSC.TargetYawAngle = InPacket->TargetYawAngle;

	check(NewPacketSC.ObjectID.IsValid());

	DoSendPacketForServer(&NewPacketSC); // #15, #17, #29
}

void FT4PacketHandlerCS::HandleCS_LockOn(const FT4PacketLockOnCS* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketCtoS::LockOn == InPacket->PacketCS);

	IT4GameObject* SenderObject = GetGameObject(InPacket->SenderID);
	if (nullptr == SenderObject)
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("[SL:%u] HandleCS_LockOn '%' failed. SenderObject not found."),
			uint32(LayerType),
			*(InPacket->ToString())
		);
		return;
	}

	FT4PacketLockOnSC NewPacketSC;
	NewPacketSC.ObjectID = InPacket->SenderID;
	NewPacketSC.HeadYawAngle = InPacket->HeadYawAngle; // #40

	check(NewPacketSC.ObjectID.IsValid());

	DoSendPacketForServer(&NewPacketSC); // #15, #17, #29
}

void FT4PacketHandlerCS::HandleCS_LockOff(const FT4PacketLockOffCS* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketCtoS::LockOff == InPacket->PacketCS);

	IT4GameObject* SenderObject = GetGameObject(InPacket->SenderID);
	if (nullptr == SenderObject)
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("[SL:%u] HandleCS_LockOff '%' failed. SenderObject not found."),
			uint32(LayerType),
			*(InPacket->ToString())
		);
		return;
	}

	FT4PacketLockOffSC NewPacketSC;
	NewPacketSC.ObjectID = InPacket->SenderID;
	NewPacketSC.HeadYawAngle = InPacket->HeadYawAngle; // #38, #40

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
