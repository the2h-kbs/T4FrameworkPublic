// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4EngineMacros.h"
#include "T4EngineTypes.generated.h"

/**
  * http://api.unrealengine.com/KOR/Programming/UnrealArchitecture/Reference/Properties/
 */
typedef int32 FT4AnimInstanceID;

UENUM()
enum class ET4LayerType : uint8
{
	Server, // #15
	ServerMax,

	Client,
	ClientMax = Client + 10,

	Preview, // #30
	PreviewMax = Preview + 50,

	LevelEditor, // #17

	Max,
};

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

#if (WITH_EDITOR || WITH_SERVER_CODE)
enum ET4GameplayControlType
{
	GmControl_PC,

#if (WITH_EDITOR || WITH_SERVER_CODE) // #68 : 클라에서는 GameplayControl 은 오직 MyPC 밖에 없다.
	GmControl_Creature,
	GmControl_FieldObject,
	GmControl_DropItem,
#endif

	GmControl_None,
};
#endif

UENUM()
enum class ET4SpawnMode : uint8 // #54
{
	All,
	Client,
	Server,

	Playback, // #68
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

enum ET4AnimLayer // #71
{
	AnimLayer_Skill,
	AnimLayer_Locomotion,
	AnimLayer_Default,
	AnimLayer_Blendspace,

	AnimLayer_Nums
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
	uint32 Value;

	UPROPERTY(EditAnywhere)
	ET4SpawnMode SpawnMode; // #54

public:
	FT4ObjectID()
		: Value(T4InvalidGameObjectID)
		, SpawnMode(ET4SpawnMode::All)
	{
	}

	FT4ObjectID(const uint32& InValue)
		: Value(InValue)
		, SpawnMode(ET4SpawnMode::All)
	{
	}

	FT4ObjectID(const uint32& InValue, const ET4SpawnMode InMode)
		: Value(InValue)
		, SpawnMode(InMode)
	{
	}

	FT4ObjectID(const FT4ObjectID& InValue)
		: Value(InValue.Value)
		, SpawnMode(InValue.SpawnMode)
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
			TEXT("Playback"), // #68
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
