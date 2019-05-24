// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Core/Public/T4CoreTypes.h"
#include "T4EngineTypes.generated.h"

/**
  * http://api.unrealengine.com/KOR/Programming/UnrealArchitecture/Reference/Properties/
 */
UENUM()
enum class ET4WorldType : uint8
{
	Null,
	Client,
	Server,

	Max	UMETA(Hidden)
};

static const uint32 PLAYER_OBJECT_ID = 0;
static const uint32 INVALID_OBJECT_ID = (uint32)-1;

typedef int32 FT4AnimInstanceID;

UENUM()
enum class ET4ObjectType : uint8
{
	NullObject,
	GameObject,

	Max	UMETA(Hidden)
};

UENUM()
enum class ET4ControllerType : uint8
{
	Player,
	NPCAI,

	All	UMETA(Hidden)
};

enum ET4InputMode
{
	GameAndUI,
	GameOnly,
};

enum ET4CameraType
{
	TPS,
	//Quarter,
	//FPS
	Editor,
};

UENUM()
enum class ET4AnimMontageLayer
{
	Movement,
	Skill,

	Max UMETA(Hidden)
};

USTRUCT()
struct FT4ObjectID
{
public:
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	uint32 Value;

public:
	FT4ObjectID()
		: Value(INVALID_OBJECT_ID)
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
		if (INVALID_OBJECT_ID == Value)
		{
			Value = 1; // reserved PLAYER_OBJECT_ID
		}
		return *this;
	}

	FORCEINLINE FT4ObjectID& operator++(int)
	{
		Value++;
		if (INVALID_OBJECT_ID == Value)
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
		return (INVALID_OBJECT_ID != Value) ? true : false;
	}

	FORCEINLINE void SetNone()
	{
		Value = INVALID_OBJECT_ID;
	}

	FORCEINLINE FString ToString() const
	{
		return FString::Printf(TEXT("FT4ObjectID '%u'"), Value);
	}
};

UENUM()
enum class ET4CollisionChannel : uint8
{
	WorldStatic,
	SpawnObject,
	CollisionVisibility,

	Max	UMETA(Hidden)
};

static const float DefaultLineTraceMaxDistance = 10000.0f;
