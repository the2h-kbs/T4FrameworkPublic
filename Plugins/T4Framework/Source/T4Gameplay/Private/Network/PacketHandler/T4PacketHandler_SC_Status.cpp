// Copyright 2019 Tech4 Labs. All Rights Reserved.

#include "T4PacketHandler_SC.h"
#include "T4GameplayActionKeys.h"

#include "Network/Protocol/T4PacketSC_Status.h"
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

void FT4PacketHandlerSC::HandleSC_Equip(const FT4PacketEquipSC* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketStoC::Equip == InPacket->PacketSC);
	FT4GameDB& GameDB = GetGameDB();
	const FT4GameItemData* ItemData = GameDB.GetItemDataByName(InPacket->ItemNameInTable);
	if (nullptr == ItemData)
	{
		return;
	}
	IT4GameObject* TargetObject = GetGameObject(InPacket->ObjectID);
	if (nullptr == TargetObject)
	{
		return;
	}
	FT4EquipWeaponAction NewAction;
	NewAction.ActionKey = WeaponLeftEquipmentActionPrimaryKey;
	NewAction.WeaponEntityAsset = ItemData->RawData.EntityAsset.ToSoftObjectPath();
	NewAction.BoneOrSocketName = ItemData->RawData.EquipBoneOrSocketName; // TEXT("hand_r");
	NewAction.LifecyclePolicy = ET4LifecyclePolicy::Looping;
	TargetObject->OnExecute(&NewAction);
}

void FT4PacketHandlerSC::HandleSC_UnEquip(const FT4PacketUnEquipSC* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketStoC::UnEquip == InPacket->PacketSC);
	FT4GameDB& GameDB = GetGameDB();
	const FT4GameItemData* ItemData = GameDB.GetItemDataByName(InPacket->ItemNameInTable);
	if (nullptr == ItemData)
	{
		return;
	}
	IT4GameObject* TargetObject = GetGameObject(InPacket->ObjectID);
	if (nullptr == TargetObject)
	{
		return;
	}
	FT4StopAction NewAction;
	NewAction.ActionKey = WeaponLeftEquipmentActionPrimaryKey;
	NewAction.DelayTimeSec = 1.0f;
	TargetObject->OnExecute(&NewAction);
}

void FT4PacketHandlerSC::HandleSC_Exchange(const FT4PacketExchangeSC* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketStoC::Exchange == InPacket->PacketSC);
	FT4GameDB& GameDB = GetGameDB();
	const FT4GameItemData* ItemData = GameDB.GetItemDataByName(InPacket->ItemNameInTable);
	if (nullptr == ItemData)
	{
		return;
	}
	IT4GameObject* TargetObject = GetGameObject(InPacket->ObjectID);
	if (nullptr == TargetObject)
	{
		return;
	}
	FT4ExchangeCostumeAction NewAction;
	NewAction.ActionKey = ExchangeCostumeActionPrimaryKey;
	NewAction.CostumeEntityAsset = ItemData->RawData.EntityAsset.ToSoftObjectPath();
	NewAction.LifecyclePolicy = ET4LifecyclePolicy::Default;
	TargetObject->OnExecute(&NewAction);
}