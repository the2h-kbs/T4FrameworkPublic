// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ActionCodeBase.h"
#include "T4Asset/Public/T4AssetDefinitions.h" // #73
#include "T4Asset/Public/Entity/T4EntityKey.h"
#include "T4ActionCodeWorld.generated.h"

/**
  *
 */
 // #T4_ADD_ACTION_TAG
USTRUCT()
struct T4ENGINE_API FT4ChangeWorldAction : public FT4CodeActionBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FSoftObjectPath EntityAssetPath;

public:
	FT4ChangeWorldAction()
		: FT4CodeActionBase(StaticActionType())
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
		return FString(TEXT("ChangeWorldAction"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4ObjectEnterAction : public FT4CodeActionBase
{
	GENERATED_USTRUCT_BODY()

public:
	// DoActionPlaybackStartRecording() // #68

	UPROPERTY(EditAnywhere)
	FT4ObjectID ObjectID;

	UPROPERTY(EditAnywhere)
	FName Name;

	UPROPERTY(EditAnywhere)
	ET4EntityType EntityType;

	UPROPERTY(EditAnywhere)
	FSoftObjectPath EntityAssetPath;

	UPROPERTY(EditAnywhere)
	FName StanceName; // #73 : 초기 애니메이션 로딩 타임이 있음으로 가급적 스폰시에도 설정하도록 처리한다.
	
	UPROPERTY(EditAnywhere)
	FVector SpawnLocation;

	UPROPERTY(EditAnywhere)
	FRotator SpawnRotation;

	UPROPERTY(EditAnywhere)
	FName GameDataIDName;

	UPROPERTY(EditAnywhere)
	bool bPlayer;
	   
public:
	FT4ObjectEnterAction()
		: FT4CodeActionBase(StaticActionType())
		, Name(NAME_None)
		, EntityType(ET4EntityType::None)
		, StanceName(NAME_None) // #73
		, SpawnLocation(FVector::ZeroVector)
		, SpawnRotation(FRotator::ZeroRotator)
		, GameDataIDName(NAME_None)
		, bPlayer(false)
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
		return FString(TEXT("ObjectEnterAction"));
	}
};

USTRUCT()
struct T4ENGINE_API FT4ObjectLeaveAction : public FT4CodeActionBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FT4ObjectID ObjectID;

	UPROPERTY(EditAnywhere)
	bool bImmediate; // #67

public:
	FT4ObjectLeaveAction()
		: FT4CodeActionBase(StaticActionType())
		, bImmediate(false) // #67
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
		return FString(TEXT("ObjectLeaveAction"));
	}
};