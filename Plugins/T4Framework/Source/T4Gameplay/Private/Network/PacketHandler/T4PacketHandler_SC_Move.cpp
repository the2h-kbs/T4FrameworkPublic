// Copyright 2019 Tech4 Labs. All Rights Reserved.

#include "T4PacketHandler_SC.h"
#include "T4GameplayActionKeys.h"

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
		return;
	}

	if (TargetObject->IsPlayer())
	{
		// #33 : Player 는 조작감 향상을 위해 선이동을 한다.
		// WARN : FT4PacketMoveToSC 처리는 Player 는 제외함에 유의!! UT4ClientInputControl::Process 참고!
		FT4MoveSpeedAction MoveAction;
		MoveAction.MoveType = ET4MoveType::Sync;
		MoveAction.MoveSpeed = InPacket->MoveSpeed;
		TargetObject->OnExecute(&MoveAction);
		
		// TODO : 검증!
		return;
	}

	FT4MoveToAction NewAction;
	NewAction.MoveType = ET4MoveType::Sync;
	NewAction.MoveDirection = InPacket->MoveDirection;
	NewAction.MoveSpeed = InPacket->MoveSpeed;
	TargetObject->OnExecute(&NewAction);
}

void FT4PacketHandlerSC::HandleSC_JumpTo(const FT4PacketJumpToSC* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketStoC::JumpTo == InPacket->PacketSC);
	IT4GameObject* TargetObject = GetGameObject(InPacket->ObjectID);
	if (nullptr == TargetObject)
	{
		return;
	}
	// TODO : UpdateJumpSpeed
	FT4JumpToAction NewAction;
	NewAction.ActionKey = JumpActionPrimaryKey;
	NewAction.SectionName = TEXT("JumpOneShot");
	TargetObject->OnExecute(&NewAction);
}

void FT4PacketHandlerSC::HandleSC_TeleportTo(const FT4PacketTeleportToSC* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketStoC::TeleportTo == InPacket->PacketSC);
	IT4GameObject* TargetObject = GetGameObject(InPacket->ObjectID);
	if (nullptr == TargetObject)
	{
		return;
	}
	FT4TeleportToAction NewAction;
	NewAction.TargetLocation = InPacket->TargetLocation;
	TargetObject->OnExecute(&NewAction);
}

void FT4PacketHandlerSC::HandleSC_Locked(const FT4PacketLockedSC* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketStoC::Locked == InPacket->PacketSC);
	IT4GameObject* TargetObject = GetGameObject(InPacket->ObjectID);
	if (nullptr == TargetObject)
	{
		return;
	}
	FT4LockOnAction NewAction;
	NewAction.ActionKey = LockOnActionPrimaryKey;
	NewAction.bSetLocked = true;
	NewAction.LockedRotation = InPacket->LockedRotation;
	NewAction.LifecyclePolicy = ET4LifecyclePolicy::Looping;
	TargetObject->OnExecute(&NewAction);
}

void FT4PacketHandlerSC::HandleSC_UnLocked(const FT4PacketUnLockedSC* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketStoC::UnLocked == InPacket->PacketSC);
	IT4GameObject* TargetObject = GetGameObject(InPacket->ObjectID);
	if (nullptr == TargetObject)
	{
		return;
	}
	FT4LockOnAction NewAction;
	NewAction.ActionKey = LockOnActionPrimaryKey;
	NewAction.bSetLocked = false;
	NewAction.LifecyclePolicy = ET4LifecyclePolicy::Default;
	TargetObject->OnExecute(&NewAction);
}
