// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4PacketHandler_SC.h"
#include "Public/T4GameplayActionKeys.h"

#include "Network/Protocol/T4PacketSC_Move.h"
#include "GameDB/T4GameDB.h"

#include "T4Engine/Classes/Action/T4ActionMinimal.h"
#include "T4Engine/Public/T4Engine.h"
#include "T4Core/Public/T4CoreMinimal.h"

#include "T4GameplayInternal.h"

/**
  *
 */
 // #27
 // #T4_ADD_PACKET_TAG

void FT4PacketHandlerSC::HandleSC_MoveTo(const FT4PacketMoveToSC* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketStoC::MoveTo == InPacket->PacketSC);
	IT4GameObject* TargetObject = GetGameObject(InPacket->ObjectID);
	if (nullptr == TargetObject)
	{
		UE_LOG(
			LogT4Gameplay,
			Warning,
			TEXT("[SL:%u] HandleSC_MoveTo '%' failed. TargetObject not found."),
			uint32(LayerType),
			*(InPacket->ToString())
		);
		return;
	}
	FT4MoveSyncToAction NewAction;
	NewAction.MoveDirection = InPacket->MoveDirection;
	NewAction.MoveSpeed = InPacket->MoveSpeed;
	NewAction.HeadYawAngle = InPacket->HeadYawAngle; // #40
	NewAction.bForceMaxSpeed = InPacket->bForceMaxSpeed; // #50
	TargetObject->OnExecute(&NewAction);
}

void FT4PacketHandlerSC::HandleSC_JumpTo(const FT4PacketJumpToSC* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketStoC::JumpTo == InPacket->PacketSC);
	IT4GameObject* TargetObject = GetGameObject(InPacket->ObjectID);
	if (nullptr == TargetObject)
	{
		UE_LOG(
			LogT4Gameplay,
			Warning,
			TEXT("[SL:%u] HandleSC_JumpTo '%' failed. TargetObject not found."),
			uint32(LayerType),
			*(InPacket->ToString())
		);
		return;
	}
	FT4JumpToAction NewAction;
	NewAction.ActionKey = T4ActionJumpPKey;
	NewAction.JumpVelocity = InPacket->JumpVelocity;
	TargetObject->OnExecute(&NewAction);
}

void FT4PacketHandlerSC::HandleSC_RollTo(const FT4PacketRollToSC* InPacket) // #46
{
	check(nullptr != InPacket);
	check(ET4PacketStoC::RollTo == InPacket->PacketSC);
	IT4GameObject* TargetObject = GetGameObject(InPacket->ObjectID);
	if (nullptr == TargetObject)
	{
		UE_LOG(
			LogT4Gameplay,
			Warning,
			TEXT("[SL:%u] HandleSC_RollTo '%' failed. TargetObject not found."),
			uint32(LayerType),
			*(InPacket->ToString())
		);
		return;
	}
	const bool bIsLockOn = TargetObject->HasPlayingAction(T4ActionLockOnPKey);
	FT4RollToAction NewAction;
	NewAction.ActionKey = T4ActionRollPKey;
	NewAction.RollVelocity = InPacket->RollVelocity;
	TargetObject->OnExecute(&NewAction);
}

void FT4PacketHandlerSC::HandleSC_TurnTo(const FT4PacketTurnToSC* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketStoC::TurnTo == InPacket->PacketSC);
	IT4GameObject* TargetObject = GetGameObject(InPacket->ObjectID);
	if (nullptr == TargetObject)
	{
		UE_LOG(
			LogT4Gameplay,
			Warning,
			TEXT("[SL:%u] HandleSC_TurnTo '%' failed. TargetObject not found."),
			uint32(LayerType),
			*(InPacket->ToString())
		);
		return;
	}
	if (TargetObject->IsPlayer())
	{
		return; // #40 : MyPC 는 Turn 처리는 패스한다.
	}
	FT4RotationAction NewAction;
	NewAction.ActionKey = T4ActionTurnPKey;
	NewAction.RotationType = ET4RotationType::TargetYawAngle;
	NewAction.TargetYawAngle = InPacket->TargetYawAngle; // #40
	TargetObject->OnExecute(&NewAction);
}

void FT4PacketHandlerSC::HandleSC_TeleportTo(const FT4PacketTeleportToSC* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketStoC::TeleportTo == InPacket->PacketSC);
	IT4GameObject* TargetObject = GetGameObject(InPacket->ObjectID);
	if (nullptr == TargetObject)
	{
		UE_LOG(
			LogT4Gameplay,
			Warning,
			TEXT("[SL:%u] HandleSC_TeleportTo '%' failed. TargetObject not found."),
			uint32(LayerType),
			*(InPacket->ToString())
		);
		return;
	}
	FT4TeleportToAction NewAction;
	NewAction.TargetLocation = InPacket->TargetLocation;
	TargetObject->OnExecute(&NewAction);
}

void FT4PacketHandlerSC::HandleSC_LockOn(const FT4PacketLockOnSC* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketStoC::LockOn == InPacket->PacketSC);
	IT4GameObject* TargetObject = GetGameObject(InPacket->ObjectID);
	if (nullptr == TargetObject)
	{
		UE_LOG(
			LogT4Gameplay,
			Warning,
			TEXT("[SL:%u] HandleSC_LockOn '%' failed. TargetObject not found."),
			uint32(LayerType),
			*(InPacket->ToString())
		);
		return;
	}
	FT4LockOnAction NewAction;
	NewAction.ActionKey = T4ActionLockOnPKey;
	NewAction.bSetLocked = true;
	NewAction.HeadYawAngle = InPacket->HeadYawAngle;
	NewAction.LifecyclePolicy = ET4LifecyclePolicy::Looping;
	TargetObject->OnExecute(&NewAction);
}

void FT4PacketHandlerSC::HandleSC_LockOff(const FT4PacketLockOffSC* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketStoC::LockOff == InPacket->PacketSC);
	IT4GameObject* TargetObject = GetGameObject(InPacket->ObjectID);
	if (nullptr == TargetObject)
	{
		UE_LOG(
			LogT4Gameplay,
			Warning,
			TEXT("[SL:%u] HandleSC_LockOff '%' failed. TargetObject not found."),
			uint32(LayerType),
			*(InPacket->ToString())
		);
		return;
	}
	FT4LockOnAction NewAction;
	NewAction.ActionKey = T4ActionLockOnPKey;
	NewAction.bSetLocked = false;
	NewAction.HeadYawAngle = InPacket->HeadYawAngle; // #38
	NewAction.LifecyclePolicy = ET4LifecyclePolicy::Default;
	TargetObject->OnExecute(&NewAction);
}
