// Copyright 2019 Tech4 Labs. All Rights Reserved.

#include "T4PacketHandler_SC.h"
#include "T4GameplayActionKeys.h"

#include "Network/Protocol/T4PacketSC_Action.h"
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

void FT4PacketHandlerSC::HandleSC_Attack(const FT4PacketAttackSC* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketStoC::Attack == InPacket->PacketSC);
	FT4GameDB& GameDB = GetGameDB();
	const FT4GameSkillData* SkillData = GameDB.GetSkillDataByName(InPacket->SkillNameInTable);
	if (nullptr == SkillData)
	{
		return;
	}
	IT4GameObject* AttackerObject = GetGameObject(InPacket->ObjectID);
	if (nullptr == AttackerObject)
	{
		return;
	}
	FT4ActionParameters ActionParameters;
	ActionParameters.SetTargetObjectID(InPacket->TargetrObjectID);

	FT4ContiAction NewAction;
	NewAction.ActionKey = AttackActionPrimaryKey;
	NewAction.ContiAsset = SkillData->RawData.ContiAsset.ToSoftObjectPath();
	AttackerObject->OnExecute(&NewAction, &ActionParameters);
}

void FT4PacketHandlerSC::HandleSC_Effect(const FT4PacketEffectSC* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketStoC::Effect == InPacket->PacketSC);
	FT4GameDB& GameDB = GetGameDB();
	const FT4GameEffectData* EffectData = GameDB.GetEffectDataByName(InPacket->EffectNameInTable);
	if (nullptr == EffectData)
	{
		return;
	}
	IT4GameObject* TargetObject = GetGameObject(InPacket->ObjectID);
	if (nullptr == TargetObject)
	{
		return;
	}
	FT4ContiAction NewAction;
	NewAction.ActionKey = AttackActionPrimaryKey;
	NewAction.ContiAsset = EffectData->RawData.ContiAsset.ToSoftObjectPath();
	TargetObject->OnExecute(&NewAction);
}
