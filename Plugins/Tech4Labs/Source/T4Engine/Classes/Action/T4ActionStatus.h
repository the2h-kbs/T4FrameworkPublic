// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ActionBase.h"
#include "T4ActionStatus.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG

// ET4ActionType::LockOn
// ET4ActionType::EquipWeapon

USTRUCT()
struct T4ENGINE_API FT4LockOnAction : public FT4BaseAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool bSetLocked;

	UPROPERTY(EditAnywhere)
	float HeadYawAngle; // #40

public:
	FT4LockOnAction()
		: FT4BaseAction(StaticActionType())
		, bSetLocked(false)
		, HeadYawAngle(TNumericLimits<float>::Max())
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::LockOn; }

	FString ToString() const override
	{
		return FString(TEXT("Action:LockOn"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4EquipWeaponAction : public FT4BaseAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<class UT4WeaponEntityAsset> WeaponEntityAsset;

	UPROPERTY(EditAnywhere)
	FName BoneOrSocketName;

	UPROPERTY(EditAnywhere)
	bool bOverrideEquipped; // #48 : 기존 장비의 해제 여부

	UPROPERTY(EditAnywhere)
	ET4LoadingPolicy LoadingPolicy;

public:
	FT4EquipWeaponAction()
		: FT4BaseAction(StaticActionType())
		, BoneOrSocketName(NAME_None)
		, bOverrideEquipped(false) // #48
		, LoadingPolicy(ET4LoadingPolicy::Default)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::EquipWeapon; }

	bool Validate(FString& OutMsg) override
	{
		if (WeaponEntityAsset.IsNull())
		{
			OutMsg = TEXT("Invalid WeaponEntityAsset");
			return false;
		}
		if (BoneOrSocketName == NAME_None)
		{
			OutMsg = TEXT("Not set TargetSocket");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("Action:EquipWeapon"));
	}
};

// #48
USTRUCT()
struct T4ENGINE_API FT4UnEquipWeaponAction : public FT4BaseAction
{
	GENERATED_USTRUCT_BODY()

public:
	FT4UnEquipWeaponAction()
		: FT4BaseAction(StaticActionType())
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::UnEquipWeapon; }

	bool Validate(FString& OutMsg) override
	{
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("Action:UnEquipWeapon"));
	}
};

// #37
USTRUCT()
struct T4ENGINE_API FT4ExchangeCostumeAction : public FT4BaseAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<class UT4CostumeEntityAsset> CostumeEntityAsset;

	UPROPERTY(EditAnywhere)
	FName TargetPartsName;
	
public:
	FT4ExchangeCostumeAction()
		: FT4BaseAction(StaticActionType())
		, TargetPartsName(NAME_None)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::ExchangeCostume; }

	bool Validate(FString& OutMsg) override
	{
		if (CostumeEntityAsset.IsNull())
		{
			OutMsg = TEXT("Invalid CostumeEntityAsset");
			return false;
		}
		if (TargetPartsName == NAME_None)
		{
			OutMsg = TEXT("Not set TargetParts");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("Action:ExchangeCostume"));
	}
};
