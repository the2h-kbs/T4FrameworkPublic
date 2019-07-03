// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4PacketHandler_SC.h"
#include "Public/T4GameplayActionKeys.h"

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
	const FT4GameSkillData* SkillData = GameDB.GetGameData<FT4GameSkillData>(InPacket->SkillDataID);
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
	ActionParameters.SetTargetDirection(InPacket->UseDirection);

	FT4RotationAction NewRotAction; // #49
	NewRotAction.RotationType = ET4RotationType::TargetDirection;
	NewRotAction.RotationYawRate = AttackerObject->GetPropertyConst().RotationYawRate; // #46
	AttackerObject->OnExecute(&NewRotAction, &ActionParameters);

	FT4ContiAction NewAction;
	NewAction.ActionKey = InPacket->SkillDataID.ToPrimaryActionKey();
	NewAction.ActionKey.bOverrideExisting = true; // #49 : 동기화가 중요하니 무조건 플레이를 보장한다.
	NewAction.ContiAsset = SkillData->RawData.ContiAsset.ToSoftObjectPath();
	AttackerObject->OnExecute(&NewAction, &ActionParameters);
}

void FT4PacketHandlerSC::HandleSC_Effect(const FT4PacketEffectSC* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketStoC::Effect == InPacket->PacketSC);
	FT4GameDB& GameDB = GetGameDB();
	const FT4GameEffectData* EffectData = GameDB.GetGameData<FT4GameEffectData>(InPacket->EffectDataID);
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
	NewAction.ActionKey = InPacket->EffectDataID.ToOverlapActionKey(); // #49 : 이팩트는 중첩과 관계 없이 플레이
	NewAction.ContiAsset = EffectData->RawData.ContiAsset.ToSoftObjectPath();
	TargetObject->OnExecute(&NewAction);
}
