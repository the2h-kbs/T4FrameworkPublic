// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4GameplayComboAttackTask.h"

#include "Gameplay/T4GameplayInstance.h"
#include "GameDB/T4GameDB.h"

#include "Network/Protocol/T4PacketCSMinimal.h"

#include "Classes/Player/T4GameplayPlayerController.h" // #42

#include "T4Engine/Classes/Action/T4ActionMinimal.h"
#include "T4Engine/Public/T4Engine.h"
#include "T4Engine/Public/T4EngineSettings.h"
#include "T4Framework/Public/T4Framework.h"

#include "T4GameplayInternal.h"

/**
  * #48
 */
FT4ComboAttackActionTask::FT4ComboAttackActionTask(FT4GameplayModeBase* InGameplayMode)
	: FT4ActionTask(InGameplayMode)
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
	if (!PlayerController->HasGameObject())
	{
		Reset();
		return;
	}
	const FT4GameDataID MainWeaponDataID = GetMainWeaponDataID();
	if (!MainWeaponDataID.IsValid())
	{
		Reset();
		return;
	}
	FT4GameDB& GameDB = GetGameDB();
	const FT4GameItemWeaponData* ItemData = GameDB.GetGameData<FT4GameItemWeaponData>(MainWeaponDataID);
	if (nullptr == ItemData)
	{
		Reset();
		return;
	}
	const FT4GameSkillSetData* SkillSetData = GameDB.GetGameData<FT4GameSkillSetData>(ItemData->RawData.SkillSetNameID);
	if (nullptr == SkillSetData) // #50
	{
		Reset();
		return;
	}
	FT4GameSkillDataID SkillDataIDSelected;
	switch (ComboAttackSelected)
	{
		case ET4ComboAttackSeqeunce::Primary:
			SkillDataIDSelected = SkillSetData->RawData.ComboPrimaryAttackNameID;
			break;
		case ET4ComboAttackSeqeunce::Secondary:
			SkillDataIDSelected = SkillSetData->RawData.ComboSecondaryAttackNameID;
			break;
		case ET4ComboAttackSeqeunce::Tertiary:
			SkillDataIDSelected = SkillSetData->RawData.ComboTertiaryAttackNameID;
			break;
		case ET4ComboAttackSeqeunce::Finish:
			SkillDataIDSelected = SkillSetData->RawData.FinishAttackNameID;
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
			SkillDataIDSelected = SkillSetData->RawData.ComboPrimaryAttackNameID;
			break;
		case ET4ComboAttackSeqeunce::Primary:
			ComboAttackSelected = ET4ComboAttackSeqeunce::Secondary;
			SkillDataIDSelected = SkillSetData->RawData.ComboSecondaryAttackNameID;
			break;
		case ET4ComboAttackSeqeunce::Secondary:
			ComboAttackSelected = ET4ComboAttackSeqeunce::Tertiary;
			SkillDataIDSelected = SkillSetData->RawData.ComboTertiaryAttackNameID;
			break;
		case ET4ComboAttackSeqeunce::Tertiary:
			ComboAttackSelected = ET4ComboAttackSeqeunce::Finish;
			SkillDataIDSelected = SkillSetData->RawData.FinishAttackNameID;
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

	IT4GameObject* PlayerObject = PlayerController->GetGameObject();
	check(nullptr != PlayerObject);

	FVector PickingLocation = FVector::ZeroVector;
	FVector UseDirection = FVector::ZeroVector;
	ET4GameplayModeType CurrentMode = GetModeType();
	IT4GameObject* MouseOverObject = GetGameFramework()->GetMouseOverGameObject();
	if (nullptr != MouseOverObject)
	{
		UseDirection = FVector(
			MouseOverObject->GetRootLocation() - PlayerObject->GetRootLocation()
		);
		UseDirection.Normalize();
	}
	else if (GetGameFramework()->GetMousePickingLocation(PickingLocation))
	{
		const FVector PlayerRootLocation = PlayerObject->GetRootLocation();
		UseDirection = FVector(
			PickingLocation.X - PlayerRootLocation.X, PickingLocation.Y - PlayerRootLocation.Y, 0.0f
		);
		UseDirection.Normalize();
	}
	else
	{
		UseDirection = PlayerObject->GetFrontVector();
	}

	FT4PacketAttackCS NewPacketCS;
	NewPacketCS.SenderID = PlayerController->GetGameObjectID();
	NewPacketCS.SkillDataID = SkillDataIDSelected;
	NewPacketCS.UseDirection = UseDirection; // #49
	PacketHandlerCS->OnSendPacket(&NewPacketCS);

	ComboAttackPlayTimeLeft = SkillData->RawData.DurationSec;
	bMovementLcoked = !SkillData->RawData.bMoveable;
}

bool FT4ComboAttackActionTask::Pressed(FString& OutErrorMsg)
{
	IT4PlayerController* PlayerController = GetPlayerController();
	check(nullptr != PlayerController);
	if (!PlayerController->HasGameObject())
	{
		OutErrorMsg = FString::Printf(TEXT("PlayerObject is Not set."));
		Reset();
		return false;
	}
	const FT4GameDataID MainWeaponDataID = GetMainWeaponDataID();
	if (!MainWeaponDataID.IsValid())
	{
		OutErrorMsg = FString::Printf(TEXT("No Weapon Equipped."));
		Reset();
		return false;
	}
	FT4GameDB& GameDB = GetGameDB();
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

FT4GameDataID FT4ComboAttackActionTask::GetMainWeaponDataID() // #49
{
	IT4PlayerController* PlayerController = GetPlayerController();
	if (nullptr == PlayerController)
	{
		return FT4GameDataID();
	}
	AT4GameplayPlayerController* GamePC = Cast<AT4GameplayPlayerController>(PlayerController->GetAController());
	if (nullptr == GamePC)
	{
		return FT4GameDataID();
	}
	return GamePC->GetMainWeaponDataID();
}