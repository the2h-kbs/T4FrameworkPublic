// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Classes/Action/T4ActionTypes.h"

/**
  *
 */
// #34
struct T4ENGINE_API FT4GameObjectProperty
{
	FT4GameObjectProperty()
	{
		Reset();
	}

	void Reset()
	{
		MoveSpeed[(uint8)ET4MoveType::Sync] = 0.0f;
		MoveSpeed[(uint8)ET4MoveType::Async] = 0.0f;
		CapsuleRadius = 0.0f;
		HalfHeight = 0.0f;
		MeshImportRotation = FRotator::ZeroRotator;
	}

	const float GetMoveSpeed(const ET4MoveType InMoveType) const
	{
		return MoveSpeed[(uint8)InMoveType]; // #33
	}

	void SetMoveSpeed(ET4MoveType InMoveType, float InMoveSpeed)
	{
		MoveSpeed[(uint8)InMoveType] = InMoveSpeed;
	}

	float MoveSpeed[(uint8)ET4MoveType::Count];

	float CapsuleRadius;
	float HalfHeight; // #18
	FRotator MeshImportRotation; // #30
};

class IT4GameObject;
struct T4ENGINE_API FT4HitSingleResult
{
public:
	ECollisionChannel QueryCollisionChannel;

	IT4GameObject* ResultObject;
	FVector ResultLocation;

public:
	FT4HitSingleResult()
		: QueryCollisionChannel(ECollisionChannel::ECC_MAX)
		, ResultObject(nullptr)
		, ResultLocation(FVector::ZeroVector)
	{
	}
};
