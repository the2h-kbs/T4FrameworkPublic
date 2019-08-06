// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ActionKey.generated.h"

/**
  * http://api.unrealengine.com/KOR/Programming/UnrealArchitecture/Reference/Properties/
 */
static const uint32 INVALID_ACTION_KEY = (uint32)-1;

// #20
USTRUCT()
struct FT4ActionKey
{
public:
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	uint32 Value;

	UPROPERTY(EditAnywhere)
	bool bPrimary; // #20 : 꼭 하나만 실행되어야 할 경우 사용...

	UPROPERTY(Transient)
	bool bOverrideExisting; // #44 : 이미 플레이중인 Primary Key 가 있으면 삭제하고 플레이...

	UPROPERTY(Transient)
	FName DebugKeyName; // #20 : 스트링으로 Key 를 만들경우 디버깅을 위해 보존...

public:
	FT4ActionKey()
		: Value(INVALID_ACTION_KEY)
		, bPrimary(false)
		, bOverrideExisting(false)
		, DebugKeyName(NAME_None)
	{
	}

	FT4ActionKey(const uint32& InValue, bool bInPrimary = false, bool bInOverrideExisting = false)
		: Value(InValue)
		, bPrimary(bInPrimary)
		, bOverrideExisting(bInOverrideExisting)
		, DebugKeyName(NAME_None)
	{
	}

	FT4ActionKey(const uint64* InValue, bool bInPrimary = false, bool bInOverrideExisting = false)
		: Value(GetTypeHash(InValue))
		, bPrimary(bInPrimary)
		, bOverrideExisting(bInOverrideExisting)
		, DebugKeyName(NAME_None)
	{
	}

	FT4ActionKey(const TCHAR* InValue, bool bInPrimary = false, bool bInOverrideExisting = false)
		: Value(GetTypeHash(InValue))
		, bPrimary(bInPrimary)
		, bOverrideExisting(bInOverrideExisting)
	{
		DebugKeyName = InValue;
	}

	FT4ActionKey(const FName& InValue, bool bInPrimary = false, bool bInOverrideExisting = false)
		: Value(GetTypeHash(InValue))
		, bPrimary(bInPrimary)
		, bOverrideExisting(bInOverrideExisting)
	{
		DebugKeyName = InValue;
	}

	FT4ActionKey(const FString& InValue, bool bInPrimary = false, bool bInOverrideExisting = false)
		: Value(GetTypeHash(InValue))
		, bPrimary(bInPrimary)
		, bOverrideExisting(bInOverrideExisting)
	{
		DebugKeyName = *InValue;
	}

	FT4ActionKey(const FT4ActionKey& InValue)
		: Value(InValue.Value)
		, bPrimary(InValue.bPrimary)
		, bOverrideExisting(InValue.bOverrideExisting)
		, DebugKeyName(InValue.DebugKeyName)
	{
	}

	FORCEINLINE uint32 operator*() const
	{
		return Value;
	}

	FORCEINLINE FT4ActionKey operator=(const FT4ActionKey& InRhs)
	{
		Value = InRhs.Value;
		bPrimary = InRhs.bPrimary;
		bOverrideExisting = InRhs.bOverrideExisting;
		DebugKeyName = InRhs.DebugKeyName;
		return *this;
	}

	FORCEINLINE bool operator==(const FT4ActionKey& InRhs) const
	{
		return (Value == InRhs.Value && bPrimary == InRhs.bPrimary) ? true : false;
	}

	FORCEINLINE bool operator!=(const FT4ActionKey& InRhs) const
	{
		return (Value != InRhs.Value || bPrimary != InRhs.bPrimary) ? true : false;
	}

	FORCEINLINE friend uint32 GetTypeHash(const FT4ActionKey& InRhs)
	{
		return HashCombine(InRhs.Value, GetTypeHash(InRhs.bPrimary));
	}

	FORCEINLINE bool IsPrimaryKey() const
	{
		return bPrimary;
	}

	FORCEINLINE bool IsValid() const
	{
		return (INVALID_ACTION_KEY != Value) ? true : false;
	}

	FORCEINLINE void SetNone()
	{
		Value = INVALID_ACTION_KEY;
	}

	FORCEINLINE FString ToString() const
	{
		return FString::Printf(
			TEXT("FT4ActionKey '%u:%s' %s"), 
			Value, 
			*(DebugKeyName.ToString()),
			(bPrimary) ? TEXT("Primary") : TEXT("Normal")
		);
	}

	static T4ENGINE_API const FT4ActionKey EmptyActionKey; // #32
};
