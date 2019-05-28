// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ActionTypes.generated.h"

/**
  * http://api.unrealengine.com/KOR/Programming/UnrealArchitecture/Reference/Properties/
 */

// WARN : Action 추가 시는 아래 테그를 찾아 추가된 액션을 구현해주어야 함!!
// #T4_ADD_ACTION_TAG

UENUM()
enum class ET4ActionType : uint32
{
	Root, // #24

	// begin World

	ChangeWorld,
	ChangePlayer,

	ObjectEnter,
	ObjectLeave,

	// begin Object

	Possess,

	MoveTo,
	JumpTo,
	TeleportTo,

	EquipWeapon, // #22
	ExchangeCostume, // #37

	LockOn,

	MoveSpeed,

	Rotation,
	Animation,
	Particle,

	Conti, // #24

	Stop,

	// begin Editor
	EditorDirty, // #37

	None,
};

// #24
UENUM()
enum class ET4LifecyclePolicy : uint8
{
	Duration,
	Looping,

	Default, // Default = Auto
};

UENUM()
enum class ET4MoveType : uint8
{
	Sync,
	Async,

	Count,
};

UENUM()
enum class ET4RotationType : uint8
{
	Current,
	Location,
	Direction,
	TargetObject,

	Default,
};

UENUM()
enum class ET4EditorDirtyType : uint8
{
	All,
	Attribute,
	Data,

	None,
};

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
	FName DebugKeyName; // #20 : 스트링으로 Key 를 만들경우 디버깅을 위해 보존...

public:
	FT4ActionKey()
		: Value(INVALID_ACTION_KEY)
		, bPrimary(false)
		, DebugKeyName(NAME_None)
	{
	}

	FT4ActionKey(const uint32& InValue, bool bInPrimary = false)
		: Value(InValue)
		, bPrimary(bInPrimary)
		, DebugKeyName(NAME_None)
	{
	}

	FT4ActionKey(const uint64* InValue, bool bInPrimary = false)
		: Value(GetTypeHash(InValue))
		, bPrimary(bInPrimary)
		, DebugKeyName(NAME_None)
	{
	}

	FT4ActionKey(const TCHAR* InValue, bool bInPrimary = false)
		: Value(GetTypeHash(InValue))
		, bPrimary(bInPrimary)
	{
		DebugKeyName = InValue;
	}

	FT4ActionKey(const FName& InValue, bool bInPrimary = false)
		: Value(GetTypeHash(InValue))
		, bPrimary(bInPrimary)
	{
		DebugKeyName = InValue;
	}

	FT4ActionKey(const FString& InValue, bool bInPrimary = false)
		: Value(GetTypeHash(InValue))
		, bPrimary(bInPrimary)
	{
		DebugKeyName = *InValue;
	}

	FT4ActionKey(const FT4ActionKey& InValue)
		: Value(InValue.Value)
		, bPrimary(InValue.bPrimary)
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

static const FT4ActionKey MovingActionPrimaryKey(TEXT("GroundMoving"), true); // #23
