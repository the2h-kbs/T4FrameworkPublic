// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4ActionKey.h"
#include "Public/T4EngineTypes.h"
#include "T4Asset/Public/Action/T4ActionTypes.h"
#include "T4ActionParameters.generated.h"

/**
  * http://api.unrealengine.com/KOR/Programming/UnrealArchitecture/Reference/Properties/
 */
// #28
#define BIT_LEFTSHIFT(x) (1 << (uint32)(x)) // #30

UENUM(Meta = (Bitflags))
enum class ET4DefaultParamBits
{
	ActionKeyBit,
	ContidionNameBit, // #54
};

UENUM(Meta = (Bitflags))
enum class ET4TimeParamBits
{
	DurationBit,
	OffsetTimeBit, // #56

	ProjectileSpeedBit, // #63
	ProjectileDurationBit, // #63
};

UENUM(Meta = (Bitflags))
enum class ET4TargetParamBits
{
	ObjectIDBit,
	LocationBit,
	DirectionBit,
};

UENUM(Meta = (Bitflags))
enum class ET4AnimationParamBits
{
	NoBlendInTimeWithOffsetPlayBit, // #54 : 애니 BlendIn Time 을 없앤다. (현재는 툴용)
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

	UPROPERTY(EditAnywhere)
	FName ActiveConditionName; // #54

public:
	FT4ActionDefaultParameters()
		: SetBits(0)
		, ActiveConditionName(NAME_None)
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

	UPROPERTY(EditAnywhere)
	float OffsetTimeSec; // #56

	UPROPERTY(EditAnywhere)
	float ProjectileSpeed; // #63

	UPROPERTY(EditAnywhere)
	float ProjectileDurationSec; // #63

public:
	FT4ActionTimeParameters()
		: SetBits(0)
		, DurectionSec(0.0f)
		, OffsetTimeSec(0.0f) // #56
		, ProjectileSpeed(0.0f) // #63
		, ProjectileDurationSec(0.0f) // #63
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
struct FT4ActionAnimationParameters
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Meta=(Bitmask, BitmaskEnum="ET4AnimationParamBits"))
	uint32 SetBits; // ET4AnimationParamBits

public:
	FT4ActionAnimationParameters()
		: SetBits(0)
	{
	}
};

USTRUCT()
struct FT4EditorParameters
{
	GENERATED_USTRUCT_BODY()

public:
	TSet<uint32> InvisibleActionSet; // #56 : Conti Editor 에서 Invisible or Isolate 로 출력을 제어한다.
	TSet<uint32> IsolationActionSet; // #56 : Conti Editor 에서 Invisible or Isolate 로 출력을 제어한다.
};

USTRUCT()
struct FT4ActionParameters
{
	GENERATED_USTRUCT_BODY()

public:
	bool bDirty; // #68

	UPROPERTY(Transient)
	FT4EditorParameters EditorParams; // #56 : Only Editor, Conti Editor 에서 Invisible or Isolate 로 출력을 제어할 때 더미용으로 사용(delay, duration 동작 보장)

private:
	UPROPERTY(EditAnywhere)
	FT4ActionDefaultParameters DefaultParams;

	UPROPERTY(EditAnywhere)
	FT4ActionTimeParameters TimeParams;

	UPROPERTY(EditAnywhere)
	FT4ActionTargetParameters TargetParams;

	UPROPERTY(EditAnywhere)
	FT4ActionAnimationParameters AnimationParams; // #54

public:
	FT4ActionParameters()
		: bDirty(false)
	{
	}

	FT4ActionParameters(const FT4ActionParameters& InParameters)
	{
		*this = InParameters;
	}

	FORCEINLINE const FT4ActionDefaultParameters& GetDefaultParams() const
	{
		return DefaultParams;
	}

	FORCEINLINE const FT4ActionTimeParameters& GetTimeParams() const
	{
		return TimeParams;
	}

	FORCEINLINE const FT4ActionTargetParameters& GetTargetParams() const
	{
		return TargetParams;
	}

	FORCEINLINE const FT4ActionAnimationParameters& GetAnimationParams() const
	{
		return AnimationParams;
	}

	FORCEINLINE bool CheckBits(ET4DefaultParamBits InCheckBit) const
	{
		return (DefaultParams.SetBits & BIT_LEFTSHIFT(InCheckBit)) ? true : false;
	}

	FORCEINLINE bool CheckBits(ET4TimeParamBits InCheckBit) const
	{
		return (TimeParams.SetBits & BIT_LEFTSHIFT(InCheckBit)) ? true : false;
	}

	FORCEINLINE bool CheckBits(ET4TargetParamBits InCheckBit) const
	{
		return (TargetParams.SetBits & BIT_LEFTSHIFT(InCheckBit)) ? true : false;
	}

	FORCEINLINE bool CheckBits(ET4AnimationParamBits InCheckBit) const
	{
		return (AnimationParams.SetBits & BIT_LEFTSHIFT(InCheckBit)) ? true : false;
	}

	FORCEINLINE void SetActionKey(const FT4ActionKey& InActionKey)
	{
		DefaultParams.ActionKey = InActionKey;
		DefaultParams.SetBits |= BIT_LEFTSHIFT(ET4DefaultParamBits::ActionKeyBit);
		bDirty = true; // #68
	}

	FORCEINLINE void SetConditionName(const FName& InConditionName)
	{
		DefaultParams.ActiveConditionName = InConditionName;
		DefaultParams.SetBits |= BIT_LEFTSHIFT(ET4DefaultParamBits::ContidionNameBit);
		bDirty = true; // #68
	}

	FORCEINLINE void SetDurationSec(float InDurationSec)
	{
		TimeParams.DurectionSec = InDurationSec;
		TimeParams.SetBits |= BIT_LEFTSHIFT(ET4TimeParamBits::DurationBit);
		bDirty = true; // #68
	}

	FORCEINLINE void SetOffsetTimeSec(float InOffsetTimeSec)
	{
		TimeParams.OffsetTimeSec = InOffsetTimeSec;
		TimeParams.SetBits |= BIT_LEFTSHIFT(ET4TimeParamBits::OffsetTimeBit); // #56
		bDirty = true; // #68
	}

	FORCEINLINE void SetProjectileSpeed(const float& InProjectileSpeed) // #63
	{
		TimeParams.ProjectileSpeed = InProjectileSpeed;
		TimeParams.SetBits |= BIT_LEFTSHIFT(ET4TimeParamBits::ProjectileSpeedBit);
		bDirty = true; // #68
	}

	FORCEINLINE void SetProjectileDurationSec(const float& InProjectileDurationSec) // #63
	{
		TimeParams.ProjectileDurationSec = InProjectileDurationSec;
		TimeParams.SetBits |= BIT_LEFTSHIFT(ET4TimeParamBits::ProjectileDurationBit);
		bDirty = true; // #68
	}

	FORCEINLINE void SetTargetObjectID(const FT4ObjectID& InTargetObjectID)
	{
		TargetParams.TargetObjectID = InTargetObjectID;
		TargetParams.SetBits |= BIT_LEFTSHIFT(ET4TargetParamBits::ObjectIDBit);
		bDirty = true; // #68
	}

	FORCEINLINE void SetTargetLocation(const FVector& InTargetLocation)
	{
		TargetParams.TargetLocation = InTargetLocation;
		TargetParams.SetBits |= BIT_LEFTSHIFT(ET4TargetParamBits::LocationBit);
		bDirty = true; // #68
	}

	FORCEINLINE void SetTargetDirection(const FVector& InTargetDirection)
	{
		TargetParams.TargetDirection = InTargetDirection;
		TargetParams.SetBits |= BIT_LEFTSHIFT(ET4TargetParamBits::DirectionBit);
		bDirty = true; // #68
	}

	FORCEINLINE void SetAnimationNoBlendInTimeWithOffsetPlay() // #54 : 애니 BlendIn Time 을 없앤다. (현재는 툴용)
	{
		AnimationParams.SetBits |= BIT_LEFTSHIFT(ET4AnimationParamBits::NoBlendInTimeWithOffsetPlayBit);
		bDirty = true; // #68
	}

	bool T4ENGINE_API GetTargetObject(
		ET4LayerType InLayerType,
		class IT4GameObject** OutTargetObject, 
		const TCHAR* InDebugString = nullptr
	) const; // #28
	bool T4ENGINE_API GetTargetLocation(
		FVector& OutTargetLocation, 
		const TCHAR* InDebugString = nullptr
	) const; // #28
	bool T4ENGINE_API GetTargetDirection(
		FVector& OutTargetDirection, 
		const TCHAR* InDebugString = nullptr
	) const; // #28

	static T4ENGINE_API const FT4ActionParameters DefaultActionParameter; // #32
};
