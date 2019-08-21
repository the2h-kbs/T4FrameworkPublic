// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Public/Action/T4ActionCodeStatus.h"
#include "Public/Action/T4ActionCodeMove.h"
#include "Public/Action/T4ActionCodeCommon.h"
#include "Public/Action/T4ActionCodeWorld.h"

#include "Public/Action/T4ActionParameters.h"

#include "T4ActionPlaybackAsset.generated.h"

/**
  * #68
 */
struct ET4ActionPlaybackVersion
{
	enum Type
	{
		InitializeVer = 0,

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1,
	};

	T4ENGINE_API const static FGuid GUID;

private:
	ET4ActionPlaybackVersion() {}
};

USTRUCT()
struct T4ENGINE_API FT4ActionPlaybackHeader
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	float TotalPlayTimeSec;
	
public:
	FT4ActionPlaybackHeader()
		: TotalPlayTimeSec(0.0f)
	{
	}
};

USTRUCT()
struct T4ENGINE_API FT4ActionPlaybackItem
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	float Time;

	UPROPERTY(VisibleAnywhere)
	uint32 UniqueKey;

	UPROPERTY(VisibleAnywhere)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere)
	ET4ActionType ActionType;

	UPROPERTY(VisibleAnywhere)
	int32 ActionArrayIndex;
	
public:
	FT4ActionPlaybackItem()
		: Time(0.0f)
		, UniqueKey(INDEX_NONE)
		, ActionType(ET4ActionType::None)
		, ActionArrayIndex(INDEX_NONE)
	{
	}
};

USTRUCT()
struct T4ENGINE_API FT4ActionPlaybackData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ActionPlaybackHeader Header;

	UPROPERTY(VisibleAnywhere)
	TArray<FT4ActionPlaybackItem> PlayActions;

	UPROPERTY(VisibleAnywhere)
	TMap<uint32, FT4ActionParameters> PlayActionParameters; // PlayUniqueKey


	// #T4_ADD_ACTION_TAG

	// T4ActionCodeWorld.h

	UPROPERTY(VisibleAnywhere)
	TArray<FT4ChangeWorldAction> ChangeWorldActions;

	UPROPERTY(VisibleAnywhere)
	TArray<FT4ObjectEnterAction> ObjectEnterActions;

	UPROPERTY(VisibleAnywhere)
	TArray<FT4ObjectLeaveAction> ObjectLeaveActions;


	// T4ActionCodeMove.h

	UPROPERTY(VisibleAnywhere)
	TArray<FT4MoveAsyncAction> MoveAsyncActions;

	UPROPERTY(VisibleAnywhere)
	TArray<FT4MoveSyncAction> MoveSyncActions;

	UPROPERTY(VisibleAnywhere)
	TArray<FT4JumpAction> JumpActions;

	UPROPERTY(VisibleAnywhere)
	TArray<FT4RollAction> RollActions;

	UPROPERTY(VisibleAnywhere)
	TArray<FT4TeleportAction> TeleportActions;

	UPROPERTY(VisibleAnywhere)
	TArray<FT4TurnAction> TurnActions;

	UPROPERTY(VisibleAnywhere)
	TArray<FT4MoveStopAction> MoveStopActions;

	UPROPERTY(VisibleAnywhere)
	TArray<FT4MoveSpeedSyncAction> MoveSpeedSyncActions;

	UPROPERTY(VisibleAnywhere)
	TArray<FT4LaunchAction> LaunchActions;


	// T4ActionCodeStatus.h

	UPROPERTY(VisibleAnywhere)
	TArray<FT4LockOnAction> LockOnActions;

	UPROPERTY(VisibleAnywhere)
	TArray<FT4EquipWeaponAction> EquipWeaponActions;

	UPROPERTY(VisibleAnywhere)
	TArray<FT4UnEquipWeaponAction> UnEquipWeaponActions;

	UPROPERTY(VisibleAnywhere)
	TArray<FT4ExchangeCostumeAction> ExchangeCostumeActions;


	// T4ActionCodeCommon.h

	UPROPERTY(VisibleAnywhere)
	TArray<FT4ContiAction> ContiActions;

	UPROPERTY(VisibleAnywhere)
	TArray<FT4PauseAction> PauseActions;

	UPROPERTY(VisibleAnywhere)
	TArray<FT4StopAction> StopActions;
};

UCLASS(ClassGroup = Tech4Labs, Category = "Tech4Labs")
class T4ENGINE_API UT4ActionPlaybackAsset : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	//~ Begin UObject interface
	void Serialize(FArchive& Ar) override;

public:
	static const FName CallingContextName;

	UPROPERTY(VisibleAnywhere)
	FT4ActionPlaybackData PlaybackData;
};