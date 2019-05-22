// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ActionBase.h"
#include "T4Engine/Classes/Assets/Entity/T4EntityTypes.h"
#include "T4Action_World.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG
USTRUCT()
struct T4ENGINE_API FT4ChangeWorldAction : public FT4WorldAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FSoftObjectPath EntityAssetPath;

public:
	FT4ChangeWorldAction()
		: FT4WorldAction(StaticActionType())
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::ChangeWorld; }

	bool Validate(FString& OutMsg) override
	{
		if (!EntityAssetPath.IsValid())
		{
			OutMsg = TEXT("Invalid EntityAssetPath");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("WAction:ChangeWorld"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4ChangePlayerAction : public FT4WorldAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FT4ObjectID ObjectID;

public:
	FT4ChangePlayerAction()
		: FT4WorldAction(StaticActionType())
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::ChangePlayer; }

	FString ToString() const override
	{
		return FString(TEXT("WAction:ChangePlayer"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4ObjectEnterAction : public FT4WorldAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FT4ObjectID ObjectID;

	UPROPERTY(EditAnywhere)
	FName Name;

	UPROPERTY(EditAnywhere)
	ET4EntityType EntityType;

	UPROPERTY(EditAnywhere)
	FSoftObjectPath EntityAssetPath;

	UPROPERTY(EditAnywhere)
	FName ContentUniqueName;

	UPROPERTY(EditAnywhere)
	FVector SpawnLocation;

	UPROPERTY(EditAnywhere)
	FRotator SpawnRotation;

public:
	FT4ObjectEnterAction()
		: FT4WorldAction(StaticActionType())
		, Name(NAME_None)
		, EntityType(ET4EntityType::None)
		, ContentUniqueName(NAME_None)
		, SpawnLocation(FVector::ZeroVector)
		, SpawnRotation(FRotator::ZeroRotator)
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::ObjectEnter; }

	bool Validate(FString& OutMsg) override
	{
		if (ET4EntityType::None == EntityType)
		{
			OutMsg = TEXT("Not set EntityType");
			return false;
		}
		if (!EntityAssetPath.IsValid())
		{
			OutMsg = TEXT("Invalid EntityAssetPath");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("WAction:ObjectEnter"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4ObjectLeaveAction : public FT4WorldAction
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FT4ObjectID ObjectID;

public:
	FT4ObjectLeaveAction()
		: FT4WorldAction(StaticActionType())
	{
	}

	static ET4ActionType StaticActionType() { return ET4ActionType::ObjectLeave; }

	bool Validate(FString& OutMsg) override
	{
		if (!ObjectID.IsValid())
		{
			OutMsg = TEXT("Invalid ObjectID");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("WAction:ObjectLeave"));
	}
};