// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4GameplayComboAttackTask.h"

#include "Gameplay/T4GameplayInstance.h"
#include "GameDB/T4GameDB.h"

#include "Network/Protocol/T4PacketCSMinimal.h"

#include "T4Engine/Classes/Action/T4ActionMinimal.h"
#include "T4Engine/Public/T4Engine.h"
#include "T4Engine/Public/T4EngineSettings.h"
#include "T4Framework/Public/T4Framework.h"

#include "T4GameplayInternal.h"

/**
  * #48
 */
FT4ComboAttackActionTask::FT4ComboAttackActionTask(ET4LayerType InLayerType)
	: FT4ActionTask(InLayerType)
	, bPendingComboAttack(false) // #48
	, ComboAttackPendingClearTimeLeft(0.0f) // #48
	, ComboAttackSelected(ET4ComboAttackSeqeunce::Ready) // #48
	, ComboAttackPlayTimeLeft(0.0f) // #48
{
}

FT4ComboAttackActionTask::~FT4ComboAttackActionTask()
{
}

void FT4ComboAttackActionTask::Reset()
{
	bPendingComboAttack = false;
	ComboAttackSelected = ET4ComboAttackSeqeunce::Ready; // #45
	ComboAttackPendingClearTimeLeft = 0.0f; // #45
	ComboAttackPlayTimeLeft = 0.0f;
	bMovementLcoked = false;
}

void FT4ComboAttackActionTask::Process(float InDeltaTime)
{
	if (!bPendingComboAttack)
	{
		return;
	}
	ComboAttackPendingClearTimeLeft -= InDeltaTime;
	ComboAttackPlayTimeLeft -= InDeltaTime;
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	if (!PlayerController->HasTargetObject())
	{
		Reset();
		return;
	}
	const FName MainWeaponDataIDName = PlayerController->GetMainWeaponDataIDName();
	if (MainWeaponDataIDName == NAME_None)
	{
		Reset();
		return;
	}
	FT4GameDB& GameDB = GetGameDB();
	const FT4GameDataID MainWeaponDataID(ET4GameDataType::Item_Weapon, MainWeaponDataIDName);
	const FT4GameItemWeaponData* ItemData = GameDB.GetGameData<FT4GameItemWeaponData>(MainWeaponDataID);
	if (nullptr == ItemData)
	{
		Reset();
		return;
	}
	FT4GameSkillDataID SkillDataIDSelected;
	switch (ComboAttackSelected)
	{
		case ET4ComboAttackSeqeunce::Primary:
			SkillDataIDSelected = ItemData->RawData.ComboPrimaryAttackNameID;
			break;
		case ET4ComboAttackSeqeunce::Secondary:
			SkillDataIDSelected = ItemData->RawData.ComboSecondaryAttackNameID;
			break;
		case ET4ComboAttackSeqeunce::Tertiary:
			SkillDataIDSelected = ItemData->RawData.ComboTertiaryAttackNameID;
			break;
		case ET4ComboAttackSeqeunce::Finish:
			SkillDataIDSelected = ItemData->RawData.FinishAttackNameID;
			break;
	}
	const UT4EngineSettings* EngineSettings = GetDefault<UT4EngineSettings>();
	check(nullptr != EngineSettings);
	if (SkillDataIDSelected.IsValid() && ComboAttackPlayTimeLeft > 0.0f)
		//PlayerController->HasPlayingAction(SkillDataIDSelected.ToPrimaryActionKey()))
	{
		return;
	}
	if (ComboAttackPendingClearTimeLeft <= 0.0f)
	{
		Reset();
		return;
	}
	switch (ComboAttackSelected)
	{
		case ET4ComboAttackSeqeunce::Ready:
		case ET4ComboAttackSeqeunce::Finish:
			ComboAttackSelected = ET4ComboAttackSeqeunce::Primary;
			SkillDataIDSelected = ItemData->RawData.ComboPrimaryAttackNameID;
			break;
		case ET4ComboAttackSeqeunce::Primary:
			ComboAttackSelected = ET4ComboAttackSeqeunce::Secondary;
			SkillDataIDSelected = ItemData->RawData.ComboSecondaryAttackNameID;
			break;
		case ET4ComboAttackSeqeunce::Secondary:
			ComboAttackSelected = ET4ComboAttackSeqeunce::Tertiary;
			SkillDataIDSelected = ItemData->RawData.ComboTertiaryAttackNameID;
			break;
		case ET4ComboAttackSeqeunce::Tertiary:
			ComboAttackSelected = ET4ComboAttackSeqeunce::Finish;
			SkillDataIDSelected = ItemData->RawData.FinishAttackNameID;
			break;
		default:
			{
				UE_LOG(
					LogT4Gameplay,
					Error,
					TEXT("ProcessComboAttack::ComboAttackSelected '%u' failed. no implementation."),
					uint8(ComboAttackSelected)
				);
				Reset();
				return;
			}
			break;
	}
	const FT4GameSkillData* SkillData = GameDB.GetGameData<FT4GameSkillData>(SkillDataIDSelected);
	if (nullptr == SkillData)
	{
		Reset();
		return;
	}
	IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS();
	if (nullptr == PacketHandlerCS)
	{
		Reset();
		return;
	}
	FT4PacketAttackCS NewPacketCS;
	NewPacketCS.SenderID = PlayerController->GetTargetObjectID();
	NewPacketCS.SkillDataID = SkillDataIDSelected;
	IT4GameObject* MouseOverObject = GetGameFramework()->GetMouseOverGameObject();
	if (nullptr != MouseOverObject)
	{
		NewPacketCS.TargetObjectID = MouseOverObject->GetObjectID();
	}
	PacketHandlerCS->OnSendPacket(&NewPacketCS);
	ComboAttackPlayTimeLeft = SkillData->RawData.DurationSec;
	bMovementLcoked = !SkillData->RawData.bMoveable;
}

bool FT4ComboAttackActionTask::Pressed(FString& OutErrorMsg)
{
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	if (!PlayerController->HasTargetObject())
	{
		OutErrorMsg = FString::Printf(TEXT("PlayerObject is Not set."));
		Reset();
		return false;
	}
	const FName MainWeaponDataIDName = PlayerController->GetMainWeaponDataIDName();
	if (MainWeaponDataIDName == NAME_None)
	{
		OutErrorMsg = FString::Printf(TEXT("No Weapon Equipped."));
		Reset();
		return false;
	}
	FT4GameDB& GameDB = GetGameDB();
	const FT4GameDataID MainWeaponDataID(ET4GameDataType::Item_Weapon, MainWeaponDataIDName);
	const FT4GameItemWeaponData* ItemData = GameDB.GetGameData<FT4GameItemWeaponData>(MainWeaponDataID);
	if (nullptr == ItemData)
	{
		OutErrorMsg = FString::Printf(TEXT("MainWeapon '%s' Not Found."), *(MainWeaponDataID.ToString()));
		Reset();
		return false;
	}
	bPendingComboAttack = true;
	const UT4EngineSettings* EngineSettings = GetDefault<UT4EngineSettings>();
	check(nullptr != EngineSettings);
	ComboAttackPendingClearTimeLeft = EngineSettings->ComboAttackKeepTimeSec; // #48 : 콤보 공격, 시간 경과시 Primary 로 변경
	return true;
}
