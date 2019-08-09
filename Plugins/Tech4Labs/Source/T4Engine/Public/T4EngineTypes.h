// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Core/Public/T4CoreTypes.h"
#include "T4EngineTypes.generated.h"

/**
  * http://api.unrealengine.com/KOR/Programming/UnrealArchitecture/Reference/Properties/
 */
typedef int32 FT4AnimInstanceID;

UENUM()
enum class ET4WorldType : uint8
{
	Null,
	Client,
	Server,

	Max	UMETA(Hidden)
};

UENUM()
enum class ET4ObjectType : uint8
{
	Entity_Character,
	Entity_PropStatic,
	Entity_PropSkeletal,
	Entity_PropParticle,
	Entity_ItemStatic,
	Entity_ItemSkeletal,

	World_Default, // #54
	World_Projectile, // #63

	None UMETA(Hidden)
};

UENUM()
enum class ET4SpawnMode : uint8 // #54
{
	All,
	Client,
	Server,

	Editor,

	Max	UMETA(Hidden)
};

enum ET4InputMode
{
	GameAndUI,
	GameOnly,
};

enum ET4CameraType
{
	TPS,
	ShoulderView, // #40

	Editor,
	None,
};

UENUM()
enum class ET4MoveMode : uint8
{
	Sync,
	Async,

	Current, // #52
	Count,
};

UENUM()
enum class ET4CollisionChannel : uint8
{
	WorldStatic,
	SpawnObject,
	CollisionVisibility,

	Max	UMETA(Hidden)
};

// #38
enum ET4MoveSpeed
{
	Stand,
	Walk,
	Run,
	FastRun,

	Count,
};

UENUM()
enum class ET4AnimInstance
{
	Human_Basic, // #38
	Human_Locomotion, // #38

	Animal,

	None
};

enum ET4AnimStatePriority
{
	AnimPriority_High,
	AnimPriority_Medium,
	AnimPriority_Low,
};

enum ET4MoveAngle // #38
{
	MoveAngle_Front,
	MoveAngle_Back,
	MoveAngle_Left,
	MoveAngle_Right,

	MoveAngle_Nums,
};

enum ET4TurnAngle // #44
{
	TurnAngle_Left,
	TurnAngle_Right,
	TurnAngle_Back,
	TurnAngle_Same,

	TurnAngle_Nums,
};

enum ET4FootStance // #38, #44
{
	FootStance_Left,
	FootStance_Right,
	FootStance_Unarmed,

	FootStance_Nums,
};

UENUM()
enum class ET4AttackType : uint8 // #63
{
	Melee,
	Ranged,

	None,
};

UENUM()
enum class ET4TargetType : uint8
{
	TargetLocation,
	TargetDirection,
	TargetObject,

	TargetCustom, // #40, #44

	Default, // Current
};

UENUM()
enum class ET4EditorReload : uint8
{
	All,
	Attribute,
	Data,

	None,
};

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
