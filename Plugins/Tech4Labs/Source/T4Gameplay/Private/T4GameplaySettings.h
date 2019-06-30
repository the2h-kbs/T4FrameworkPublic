// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Public/T4GameplayTypes.h"
#include "T4GameplaySettings.generated.h"

/**
  * #43
 */
class UDataTable;
UCLASS(config = Tech4Labs, defaultconfig)
class UT4GameplaySettings : public UObject
{
	GENERATED_BODY()

public:
	UT4GameplaySettings();

public:
	// Plugins/Tech4Labs/Config/DefaultTech4Labs.ini

	UPROPERTY(EditAnywhere, config, Category = "Gameplay Mode")
	ET4GameplayModeType GameplayMode;

	UPROPERTY(EditAnywhere, config, Category = "Gameplay Data Table")
	TSoftObjectPtr<UDataTable> ClientGameMasterTablePath; // #48

	UPROPERTY(EditAnywhere, config, Category = "Gameplay Data Table")
	TSoftObjectPtr<UDataTable> ServerGameMasterTablePath; // #48

	UPROPERTY(EditAnywhere, config, Category = "Player QuickSpawn (ALT + 1 ~ 9)")
	FName PlayerDataRowName_Key1;
	
	UPROPERTY(EditAnywhere, config, Category = "Player QuickSpawn (ALT + 1 ~ 9)")
	FName PlayerDataRowName_Key2;

	UPROPERTY(EditAnywhere, config, Category = "NPC QuickSpawn (CTRL + 1 ~ 9)")
	FName NPCDataRowName_Key1; // #50
	
	UPROPERTY(EditAnywhere, config, Category = "NPC QuickSpawn (CTRL + 1 ~ 9)")
	FName NPCDataRowName_Key2;

	UPROPERTY(EditAnywhere, config, Category = "Equip Weapon (Player Spawned + 1 ~ 9)")
	FName WeaponDataRowName_Key1; // #45

	UPROPERTY(EditAnywhere, config, Category = "Equip Weapon (Player Spawned + 1 ~ 9)")
	FName WeaponDataRowName_Key2; // #48

private:
#if WITH_EDITOR
	void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent);
#endif
};