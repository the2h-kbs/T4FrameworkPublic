// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ActionBaseStructs.h"
#include "T4ActionStatusStructs.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG

// ET4ActionType::Possess
// ET4ActionType::LockOn
// ET4ActionType::EquipWeapon

USTRUCT()
struct T4ENGINE_API FT4PossessAction : public FT4ObjectAction
{
	GENERATED_USTRUCT_BODY()

public:
	FT4PossessAction()
		: FT4ObjectAction(StaticActionType())
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::Possess; }

	FString ToString() const override
	{
		return FString(TEXT("OAction:Possess"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4LockOnAction : public FT4ObjectAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool bSetLocked;

	UPROPERTY(EditAnywhere)
	float HeadYawAngle; // #40

public:
	FT4LockOnAction()
		: FT4ObjectAction(StaticActionType())
		, bSetLocked(false)
		, HeadYawAngle(TNumericLimits<float>::Max())
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::LockOn; }

	FString ToString() const override
	{
		return FString(TEXT("OAction:LockOn"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4EquipWeaponAction : public FT4ObjectAction
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
		: FT4ObjectAction(StaticActionType())
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
		return FString(TEXT("OAction:EquipWeapon"));
	}
};

// #48
USTRUCT()
struct T4ENGINE_API FT4UnEquipWeaponAction : public FT4ObjectAction
{
	GENERATED_USTRUCT_BODY()

public:
	FT4UnEquipWeaponAction()
		: FT4ObjectAction(StaticActionType())
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::UnEquipWeapon; }

	bool Validate(FString& OutMsg) override
	{
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("OAction:UnEquipWeapon"));
	}
};

// #37
USTRUCT()
struct T4ENGINE_API FT4ExchangeCostumeAction : public FT4ObjectAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<class UT4CostumeEntityAsset> CostumeEntityAsset;

	UPROPERTY(EditAnywhere)
	FName TargetPartsName;
	
public:
	FT4ExchangeCostumeAction()
		: FT4ObjectAction(StaticActionType())
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
		return FString(TEXT("OAction:ExchangeCostume"));
	}
};
