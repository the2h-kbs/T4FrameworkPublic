// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4GameplaySettings.h"

#include "T4GameplayInternal.h"

#define LOCTEXT_NAMESPACE "T4GameplaySettings"

/**
  * #43
 */
UT4GameplaySettings::UT4GameplaySettings()
	: Super()
{
	GameplayMode = ET4GameplayModeType::TPS;

	ClientGameMasterTablePath = FSoftObjectPath(TEXT("DataTable'/Game/Tech4Demo/Game/Table/T4ClientGameTable_Master.T4ClientGameTable_Master'")); // #48
	ServerGameMasterTablePath = nullptr; // #48

	PlayerDataRowName_Key1 = TEXT("T4DefaultPC_Locomotion");
	PlayerDataRowName_Key2 = TEXT("T4DefaultPC_Parts");

	NPCDataRowName_Key1 = TEXT("T4DefaultNPC");
	NPCDataRowName_Key2 = NAME_None;

	WeaponDataRowName_Key1 = TEXT("T4DefaulSowrd"); // #45
	WeaponDataRowName_Key2 = TEXT("T4SecondSowrd"); // #45
}

#if WITH_EDITOR
void UT4GameplaySettings::PostEditChangeProperty(
	struct FPropertyChangedEvent& PropertyChangedEvent
)
{
}
#endif

#undef LOCTEXT_NAMESPACE