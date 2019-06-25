// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4EngineActionTypes.h"
#include "Public/T4EngineTypes.h"
#include "T4Core/Public/T4CoreMacros.h"
#include "T4EngineActionParameters.generated.h"

/**
  * http://api.unrealengine.com/KOR/Programming/UnrealArchitecture/Reference/Properties/
 */
// #28
#define BIT_LEFTSHIFT(x) (1 << (uint32)(x)) // #30

UENUM(Meta = (Bitflags))
enum class ET4DefaultParamBits
{
	ActionKeyBit,
};

UENUM(Meta = (Bitflags))
enum class ET4TimeParamBits
{
	DurationBit,
};

UENUM(Meta = (Bitflags))
enum class ET4TargetParamBits
{
	ObjectIDBit,
	LocationBit,
	DirectionBit,
};

USTRUCT()
struct FT4ActionDefaultParameters
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Meta=(Bitmask, BitmaskEnum="ET4DefaultParamBits"))
	uint32 SetBits; // ET4DefaultParamBits

	UPROPERTY(EditAnywhere)
	FT4ActionKey ActionKey; // #32

public:
	FT4ActionDefaultParameters()
		: SetBits(0)
	{
	}
};

USTRUCT()
struct FT4ActionTimeParameters
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Meta=(Bitmask, BitmaskEnum="ET4TimeParamBits"))
	uint32 SetBits; // ET4TimeParamBits

	UPROPERTY(EditAnywhere)
	float DurectionSec;

public:
	FT4ActionTimeParameters()
		: SetBits(0)
		, DurectionSec(0.0f)
	{
	}
};

USTRUCT()
struct FT4ActionTargetParameters
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Meta=(Bitmask, BitmaskEnum="ET4TargetParamBits"))
	uint32 SetBits; // ET4TargetParamBits

	UPROPERTY(EditAnywhere)
	FT4ObjectID TargetObjectID;

	UPROPERTY(EditAnywhere)
	FVector TargetLocation;

	UPROPERTY(EditAnywhere)
	FVector TargetDirection;

public:
	FT4ActionTargetParameters()
		: SetBits(0)
		, TargetLocation(FVector::ZeroVector)
		, TargetDirection(FVector::ZeroVector)
	{
	}
};

USTRUCT()
struct FT4ActionParameters
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FT4ActionDefaultParameters DefaultParams;

	UPROPERTY(EditAnywhere)
	FT4ActionTimeParameters TimeParams;

	UPROPERTY(EditAnywhere)
	FT4ActionTargetParameters TargetParams;

public:
	FT4ActionParameters()
	{
	}

	FT4ActionParameters(const FT4ActionParameters& InParameters)
	{
		*this = InParameters;
	}

	bool CheckBits(ET4DefaultParamBits InCheckBit) const
	{
		return (DefaultParams.SetBits & BIT_LEFTSHIFT(InCheckBit)) ? true : false;
	}

	bool CheckBits(ET4TimeParamBits InCheckBit) const
	{
		return (TimeParams.SetBits & BIT_LEFTSHIFT(InCheckBit)) ? true : false;
	}

	bool CheckBits(ET4TargetParamBits InCheckBit) const
	{
		return (TargetParams.SetBits & BIT_LEFTSHIFT(InCheckBit)) ? true : false;
	}

	void SetActionKey(const FT4ActionKey& InActionKey)
	{
		DefaultParams.ActionKey = InActionKey;
		DefaultParams.SetBits |= BIT_LEFTSHIFT(ET4DefaultParamBits::ActionKeyBit);
	}

	void SetDurationSec(float InDurationSec)
	{
		TimeParams.DurectionSec = InDurationSec;
		TimeParams.SetBits |= BIT_LEFTSHIFT(ET4TimeParamBits::DurationBit);
	}

	void SetTargetObjectID(const FT4ObjectID& InTargetObjectID)
	{
		TargetParams.TargetObjectID = InTargetObjectID;
		TargetParams.SetBits |= BIT_LEFTSHIFT(ET4TargetParamBits::ObjectIDBit);
	}

	void SetTargetLocation(const FVector& InTargetLocation)
	{
		TargetParams.TargetLocation = InTargetLocation;
		TargetParams.SetBits |= BIT_LEFTSHIFT(ET4TargetParamBits::LocationBit);
	}

	void SetTargetDirection(const FVector& InTargetDirection)
	{
		TargetParams.TargetDirection = InTargetDirection;
		TargetParams.SetBits |= BIT_LEFTSHIFT(ET4TargetParamBits::DirectionBit);
	}

	static T4ENGINE_API const FT4ActionParameters DefaultActionParameter; // #32
};
