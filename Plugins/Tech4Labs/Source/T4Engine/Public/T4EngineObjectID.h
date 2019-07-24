// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4EngineTypes.h"
#include "T4EngineObjectID.generated.h"

/**
  * http://api.unrealengine.com/KOR/Programming/UnrealArchitecture/Reference/Properties/
 */
static const uint32 T4InvalidGameObjectID = (uint32)-1;

USTRUCT()
struct FT4ObjectID
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	ET4SpawnMode SpawnMode; // #54

	UPROPERTY(EditAnywhere)
	uint32 Value;

public:
	FT4ObjectID()
		: SpawnMode(ET4SpawnMode::All)
		, Value(T4InvalidGameObjectID)
	{
	}

	FT4ObjectID(const uint32& InValue)
		: SpawnMode(ET4SpawnMode::All)
		, Value(InValue)
	{
	}

	FT4ObjectID(const ET4SpawnMode InMode, const uint32& InValue)
		: SpawnMode(InMode)
		, Value(InValue)
	{
	}

	FT4ObjectID(const FT4ObjectID& InValue)
		: SpawnMode(InValue.SpawnMode)
		, Value(InValue.Value)
	{
	}

	FORCEINLINE uint32 operator*() const
	{
		return Value;
	}

	FORCEINLINE FT4ObjectID& operator++()
	{
		Value++;
		if (T4InvalidGameObjectID == Value)
		{
			Value = 1; // reserved 0
		}
		return *this;
	}

	FORCEINLINE FT4ObjectID& operator++(int)
	{
		Value++;
		if (T4InvalidGameObjectID == Value)
		{
			Value = 1;
		}
		return *this;
	}

	FORCEINLINE bool operator==(const FT4ObjectID& InRhs) const
	{
		return (Value == InRhs.Value && SpawnMode == InRhs.SpawnMode) ? true : false;
	}

	FORCEINLINE bool operator!=(const FT4ObjectID& InRhs) const
	{
		return (Value != InRhs.Value || SpawnMode != InRhs.SpawnMode) ? true : false;
	}

	FORCEINLINE friend uint32 GetTypeHash(const FT4ObjectID& InRhs)
	{
		return HashCombine(GetTypeHash(InRhs.Value), GetTypeHash(InRhs.SpawnMode));
	}

	FORCEINLINE bool IsValid() const
	{
		return (0 != Value && T4InvalidGameObjectID != Value) ? true : false;
	}

	FORCEINLINE void SetNone()
	{
		Value = T4InvalidGameObjectID;
	}

	FORCEINLINE const TCHAR* ToModeString() const
	{
		static const TCHAR* WorldSpawneStrings[] =
		{
			TEXT("All"),
			TEXT("Client"),
			TEXT("Server"),
			TEXT("Editor"),
			TEXT("Max"),
		};
		static_assert(ARRAY_COUNT(WorldSpawneStrings) == (uint8)(ET4SpawnMode::Max) + 1, "SpawnMode doesn't match!");
		check(uint8(SpawnMode) < ARRAY_COUNT(WorldSpawneStrings));
		return WorldSpawneStrings[uint8(SpawnMode)];
	}

	FORCEINLINE FString ToString() const
	{
		return FString::Printf(TEXT("FT4ObjectID:%u=%s"), Value, ToModeString());
	}
};
