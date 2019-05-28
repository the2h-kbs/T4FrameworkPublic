// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4PacketHandler_CS.h"

#include "Network/Protocol/T4PacketCS_Action.h"
#include "Network/Protocol/T4PacketSC_Action.h"

#include "GameDB/T4GameDB.h"

#include "T4Engine/Public/T4Engine.h"
#include "T4Core/Public/T4CoreMinimal.h"

#include "T4GameplayInternal.h"

/**
  *
 */
// #27
// #T4_ADD_PACKET_TAG

void FT4PacketHandlerCS::HandleCS_Attack(const FT4PacketAttackCS* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketCtoS::Attack == InPacket->PacketCS);

	IT4GameObject* SenderObject = GetGameObject(InPacket->SenderID);
	if (nullptr == SenderObject)
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("[SL:%u] HandleCS_Attack '%' failed. SenderObject not found."),
			uint32(LayerType),
			*(InPacket->ToString())
		);
		return;
	}

	FT4GameDB& GameDB = GetGameDB();
	const FT4GameDBSkillRow* SkillData = GameDB.GetSkillRowByName(InPacket->SkillNameID);
	if (nullptr == SkillData)
	{
		return;
	}

	const FT4ObjectID AttackerObjectID = InPacket->SenderID;
	IT4GameObject* TargetGameObject = nullptr;

	FT4PacketAttackSC NewAttackPacketSC;
	NewAttackPacketSC.ObjectID = AttackerObjectID;
	NewAttackPacketSC.SkillNameID = InPacket->SkillNameID;

	if (InPacket->TargetObjectID.IsValid())
	{
		TargetGameObject = GetGameObject(InPacket->TargetObjectID);
		if (nullptr != TargetGameObject)
		{
			NewAttackPacketSC.TargetrObjectID = InPacket->TargetObjectID;
		}
	}

	check(NewAttackPacketSC.ObjectID.IsValid());

	DoSendPacketForServer(&NewAttackPacketSC); // #15, #17, #29

	if (nullptr == TargetGameObject)
	{
		return;
	}

	// TODO : 판정
	bool bCriticalHit = (0.7f <= FMath::FRandRange(0.0f, 1.0f)) ? true : false;
	FT4PacketEffectSC NewEffectPacketSC;
	NewEffectPacketSC.ObjectID = TargetGameObject->GetObjectID();
	NewEffectPacketSC.EffectNameID = (bCriticalHit) ? TEXT("CriticalHit") : TEXT("NormalHit");
	NewEffectPacketSC.AttackerObjectID = AttackerObjectID;
	const FT4GameDBEffectRow* EffectData = GameDB.GetEffectRowByName(NewEffectPacketSC.EffectNameID);
	if (nullptr == EffectData)
	{
		return;
	}

	check(NewEffectPacketSC.ObjectID.IsValid());

	DoSendPacketForServer(&NewEffectPacketSC); // #15, #17, #29
}
