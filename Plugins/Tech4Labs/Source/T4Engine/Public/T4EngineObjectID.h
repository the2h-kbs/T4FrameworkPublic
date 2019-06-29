// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4EngineObjectID.generated.h"

/**
  * http://api.unrealengine.com/KOR/Programming/UnrealArchitecture/Reference/Properties/
 */
static const uint32 T4InvalidGameObjectID = (uint32)-1;

USTRUCT()
struct FT4ObjectID
{
public:
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	uint32 Value;

public:
	FT4ObjectID()
		: Value(T4InvalidGameObjectID)
	{
	}

	FT4ObjectID(const uint32& InValue)
		: Value(InValue)
	{
	}

	FT4ObjectID(const FT4ObjectID& InValue)
		: Value(InValue.Value)
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

	FORCEINLINE bool operator==(const uint32& InRhs) const
	{
		return (Value == InRhs) ? true : false;
	}

	FORCEINLINE bool operator==(const FT4ObjectID& InRhs) const
	{
		return (Value == InRhs.Value) ? true : false;
	}

	FORCEINLINE bool operator!=(const FT4ObjectID& InRhs) const
	{
		return (Value != InRhs.Value) ? true : false;
	}

	FORCEINLINE friend uint32 GetTypeHash(const FT4ObjectID& InRhs)
	{
		return InRhs.Value;
	}

	FORCEINLINE bool IsValid() const
	{
		return (0 != Value && T4InvalidGameObjectID != Value) ? true : false;
	}

	FORCEINLINE void SetNone()
	{
		Value = T4InvalidGameObjectID;
	}

	FORCEINLINE FString ToString() const
	{
		return FString::Printf(TEXT("FT4ObjectID '%u'"), Value);
	}
};
