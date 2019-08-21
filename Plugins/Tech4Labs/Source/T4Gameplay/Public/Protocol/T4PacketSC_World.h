// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4PacketSC.h"
#include "T4Framework/Public/T4FrameworkNet.h" // #42
#include "T4PacketSC_World.generated.h"

/**
  *
 */
 // #T4_ADD_PACKET_TAG_SC

// ET4PacketStoC::ChangeWorld

// ET4PacketStoC::MyPCEnter
// ET4PacketStoC::MyPCChange // #11, #52

// ET4PacketStoC::PCEnter
// ET4PacketStoC::PCLeave

// ET4PacketStoC::NPCEnter // #31
// ET4PacketStoC::NPCLeave // #31

// ET4PacketStoC::FOEnter // #31
// ET4PacketStoC::FOLeave // #31

// ET4PacketStoC::ItemEnter // #41
// ET4PacketStoC::ItemLeave // #41

USTRUCT()
struct FT4PacketChangeWorldSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4GameDataID WorldDataID;

public:
	FT4PacketChangeWorldSC()
		: FT4PacketStoC(ET4PacketStoC::ChangeWorld)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:ChangeWorld"));
	}
};

USTRUCT()
struct FT4PacketMyPCEnterSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID EnterObjectID;

	UPROPERTY(VisibleAnywhere)
	FT4GameDataID PlayerDataID;

	UPROPERTY(VisibleAnywhere)
	FVector SpawnLocation;

	UPROPERTY(VisibleAnywhere)
	FRotator SpawnRotation;

public:
	FT4PacketMyPCEnterSC()
		: FT4PacketStoC(ET4PacketStoC::MyPCEnter)
		, SpawnLocation(FVector::ZeroVector)
		, SpawnRotation(FRotator::ZeroRotator)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:MyPCEnter"));
	}
};

// #11, #52
USTRUCT()
struct FT4PacketMyPCChangeSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID NewPlayerObjectID;

public:
	FT4PacketMyPCChangeSC()
		: FT4PacketStoC(ET4PacketStoC::MyPCChange)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:MyPCChange"));
	}
};

USTRUCT()
struct FT4PacketPCEnterSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID EnterObjectID;

	UPROPERTY(VisibleAnywhere)
	FT4GameDataID PlayerDataID;

	UPROPERTY(VisibleAnywhere)
	FVector SpawnLocation;

	UPROPERTY(VisibleAnywhere)
	FRotator SpawnRotation;
	
public:
	FT4PacketPCEnterSC()
		: FT4PacketStoC(ET4PacketStoC::PCEnter)
		, SpawnLocation(FVector::ZeroVector)
		, SpawnRotation(FRotator::ZeroRotator)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:PCEnter"));
	}
};


USTRUCT()
struct FT4PacketPCLeaveSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID LeaveObjectID;
	
public:
	FT4PacketPCLeaveSC()
		: FT4PacketStoC(ET4PacketStoC::PCLeave)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:PCLeave"));
	}
};

// #31
USTRUCT()
struct FT4PacketNPCEnterSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4NetID NetID;

	UPROPERTY(VisibleAnywhere)
	FT4ObjectID EnterObjectID;

	UPROPERTY(VisibleAnywhere)
	FT4GameDataID NPCDataID;

	UPROPERTY(VisibleAnywhere)
	FVector SpawnLocation;

	UPROPERTY(VisibleAnywhere)
	FRotator SpawnRotation;
	
public:
	FT4PacketNPCEnterSC()
		: FT4PacketStoC(ET4PacketStoC::NPCEnter)
		, SpawnLocation(FVector::ZeroVector)
		, SpawnRotation(FRotator::ZeroRotator)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:NPCEnter"));
	}
};

// #31
USTRUCT()
struct FT4PacketNPCLeaveSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID LeaveObjectID;
	
public:
	FT4PacketNPCLeaveSC()
		: FT4PacketStoC(ET4PacketStoC::NPCLeave)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:NPCLeave"));
	}
};

// #31
USTRUCT()
struct FT4PacketFOEnterSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4NetID NetID;

	UPROPERTY(VisibleAnywhere)
	FT4ObjectID EnterObjectID;

	UPROPERTY(VisibleAnywhere)
	FT4GameDataID FODataID;

	UPROPERTY(VisibleAnywhere)
	FVector SpawnLocation;

	UPROPERTY(VisibleAnywhere)
	FRotator SpawnRotation;
	
public:
	FT4PacketFOEnterSC()
		: FT4PacketStoC(ET4PacketStoC::FOEnter)
		, SpawnLocation(FVector::ZeroVector)
		, SpawnRotation(FRotator::ZeroRotator)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:FOEnter"));
	}
};

// #31
USTRUCT()
struct FT4PacketFOLeaveSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID LeaveObjectID;
	
public:
	FT4PacketFOLeaveSC()
		: FT4PacketStoC(ET4PacketStoC::FOLeave)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:FOLeave"));
	}
};

// #41
USTRUCT()
struct FT4PacketItemEnterSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4NetID NetID;

	UPROPERTY(VisibleAnywhere)
	FT4ObjectID EnterObjectID;

	UPROPERTY(VisibleAnywhere)
	FT4GameDataID ItemDataID;

	UPROPERTY(VisibleAnywhere)
	FVector SpawnLocation;

	UPROPERTY(VisibleAnywhere)
	FRotator SpawnRotation;
	
public:
	FT4PacketItemEnterSC()
		: FT4PacketStoC(ET4PacketStoC::ItemEnter)
		, SpawnLocation(FVector::ZeroVector)
		, SpawnRotation(FRotator::ZeroRotator)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:ItemEnter"));
	}
};

// #41
USTRUCT()
struct FT4PacketItemLeaveSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID LeaveObjectID;
	
public:
	FT4PacketItemLeaveSC()
		: FT4PacketStoC(ET4PacketStoC::ItemLeave)
	{
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:ItemLeave"));
	}
};
