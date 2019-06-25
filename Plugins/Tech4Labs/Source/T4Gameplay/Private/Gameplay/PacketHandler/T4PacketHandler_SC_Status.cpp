// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4PacketHandler_SC.h"
#include "Public/T4GameplayActionKeys.h"

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
	const FT4GameItemWeaponData* ItemData = GameDB.GetGameData<FT4GameItemWeaponData>(InPacket->ItemWeaponDataID);
	if (nullptr == ItemData)
	{
		return;
	}
	IT4GameObject* TargetObject = GetGameObject(InPacket->ObjectID);
	if (nullptr == TargetObject)
	{
		return;
	}
	if (TargetObject->IsPlayer() && InPacket->bMainWeapon) // #48
	{
		IT4PlayerController* PlayerController = GetPlayerController();
		check(nullptr != PlayerController);
		PlayerController->SetMainWeaponDataIDName(InPacket->ItemWeaponDataID.RowName);
	}
	FT4EquipWeaponAction NewAction;
	NewAction.ActionKey = InPacket->ItemWeaponDataID.ToPrimaryActionKey(); // #48
	NewAction.WeaponEntityAsset = ItemData->RawData.EntityAsset.ToSoftObjectPath();
	NewAction.BoneOrSocketName = ItemData->RawData.EquipBoneOrSocketName; // TEXT("hand_r");
	NewAction.bOverrideEquipped = (InPacket->bMainWeapon) ? true : false; // #48
	NewAction.LifecyclePolicy = ET4LifecyclePolicy::Looping;
	TargetObject->OnExecute(&NewAction);
}

void FT4PacketHandlerSC::HandleSC_UnEquip(const FT4PacketUnEquipSC* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketStoC::UnEquip == InPacket->PacketSC);
	FT4GameDB& GameDB = GetGameDB();
	const FT4GameItemWeaponData* ItemData = GameDB.GetGameData<FT4GameItemWeaponData>(InPacket->ItemWeaponDataID);
	if (nullptr == ItemData)
	{
		return;
	}
	IT4GameObject* TargetObject = GetGameObject(InPacket->ObjectID);
	if (nullptr == TargetObject)
	{
		return;
	}
	if (TargetObject->IsPlayer() && InPacket->bMainWeapon) // #48
	{
		IT4PlayerController* PlayerController = GetPlayerController();
		check(nullptr != PlayerController);
		PlayerController->SetMainWeaponDataIDName(NAME_None);
	}
	FT4UnEquipWeaponAction NewAction;
	NewAction.ActionKey = InPacket->ItemWeaponDataID.ToPrimaryActionKey(); // #48
	NewAction.DelayTimeSec = 1.0f;
	TargetObject->OnExecute(&NewAction);
}

void FT4PacketHandlerSC::HandleSC_Exchange(const FT4PacketExchangeSC* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketStoC::Exchange == InPacket->PacketSC);
	FT4GameDB& GameDB = GetGameDB();
	const FT4GameItemCostumeData* ItemData = GameDB.GetGameData<FT4GameItemCostumeData>(InPacket->ItemCostumeDataID);
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
	NewAction.ActionKey = InPacket->ItemCostumeDataID.ToPrimaryActionKey();// #48
	NewAction.CostumeEntityAsset = ItemData->RawData.EntityAsset.ToSoftObjectPath();
	NewAction.LifecyclePolicy = ET4LifecyclePolicy::Default;
	TargetObject->OnExecute(&NewAction);
}