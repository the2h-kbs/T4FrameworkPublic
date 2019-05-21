// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Private/Network/Protocol/T4PacketCS_Command.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PacketCS_Command() {}
// Cross Module References
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCtoS();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectID();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCmdItemLeaveCS();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCmdFOLeaveCS();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCmdNPCLeaveCS();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCmdPCLeaveCS();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCmdChangeWorldCS();
// End Cross Module References
class UScriptStruct* FT4PacketCmdTeleportCS::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4PacketCmdTeleportCS"), sizeof(FT4PacketCmdTeleportCS), Get_Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4PacketCmdTeleportCS>()
{
	return FT4PacketCmdTeleportCS::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketCmdTeleportCS(FT4PacketCmdTeleportCS::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4PacketCmdTeleportCS"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdTeleportCS
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdTeleportCS()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketCmdTeleportCS")),new UScriptStruct::TCppStructOps<FT4PacketCmdTeleportCS>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdTeleportCS;
	struct Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenderID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketCmdTeleportCS>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "T4PacketCmdTeleportCS" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketCmdTeleportCS, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS_Statics::NewProp_TargetLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS_Statics::NewProp_SenderID_MetaData[] = {
		{ "Category", "T4PacketCmdTeleportCS" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS_Statics::NewProp_SenderID = { "SenderID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketCmdTeleportCS, SenderID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS_Statics::NewProp_SenderID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS_Statics::NewProp_SenderID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS_Statics::NewProp_SenderID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4PacketCtoS,
		&NewStructOps,
		"T4PacketCmdTeleportCS",
		sizeof(FT4PacketCmdTeleportCS),
		alignof(FT4PacketCmdTeleportCS),
		Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketCmdTeleportCS"), sizeof(FT4PacketCmdTeleportCS), Get_Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdTeleportCS_Hash() { return 2804093269U; }
class UScriptStruct* FT4PacketCmdItemLeaveCS::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdItemLeaveCS_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketCmdItemLeaveCS, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4PacketCmdItemLeaveCS"), sizeof(FT4PacketCmdItemLeaveCS), Get_Z_Construct_UScriptStruct_FT4PacketCmdItemLeaveCS_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4PacketCmdItemLeaveCS>()
{
	return FT4PacketCmdItemLeaveCS::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketCmdItemLeaveCS(FT4PacketCmdItemLeaveCS::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4PacketCmdItemLeaveCS"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdItemLeaveCS
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdItemLeaveCS()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketCmdItemLeaveCS")),new UScriptStruct::TCppStructOps<FT4PacketCmdItemLeaveCS>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdItemLeaveCS;
	struct Z_Construct_UScriptStruct_FT4PacketCmdItemLeaveCS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaveObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeaveObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdItemLeaveCS_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
		{ "ToolTip", "#41" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketCmdItemLeaveCS_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketCmdItemLeaveCS>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdItemLeaveCS_Statics::NewProp_LeaveObjectID_MetaData[] = {
		{ "Category", "T4PacketCmdItemLeaveCS" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketCmdItemLeaveCS_Statics::NewProp_LeaveObjectID = { "LeaveObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketCmdItemLeaveCS, LeaveObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdItemLeaveCS_Statics::NewProp_LeaveObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdItemLeaveCS_Statics::NewProp_LeaveObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketCmdItemLeaveCS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketCmdItemLeaveCS_Statics::NewProp_LeaveObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketCmdItemLeaveCS_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4PacketCtoS,
		&NewStructOps,
		"T4PacketCmdItemLeaveCS",
		sizeof(FT4PacketCmdItemLeaveCS),
		alignof(FT4PacketCmdItemLeaveCS),
		Z_Construct_UScriptStruct_FT4PacketCmdItemLeaveCS_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdItemLeaveCS_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdItemLeaveCS_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdItemLeaveCS_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCmdItemLeaveCS()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdItemLeaveCS_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketCmdItemLeaveCS"), sizeof(FT4PacketCmdItemLeaveCS), Get_Z_Construct_UScriptStruct_FT4PacketCmdItemLeaveCS_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketCmdItemLeaveCS_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdItemLeaveCS_Hash() { return 3734169329U; }
class UScriptStruct* FT4PacketCmdItemEnterCS::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4PacketCmdItemEnterCS"), sizeof(FT4PacketCmdItemEnterCS), Get_Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4PacketCmdItemEnterCS>()
{
	return FT4PacketCmdItemEnterCS::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketCmdItemEnterCS(FT4PacketCmdItemEnterCS::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4PacketCmdItemEnterCS"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdItemEnterCS
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdItemEnterCS()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketCmdItemEnterCS")),new UScriptStruct::TCppStructOps<FT4PacketCmdItemEnterCS>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdItemEnterCS;
	struct Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemNameInTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemNameInTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
		{ "ToolTip", "#41" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketCmdItemEnterCS>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Statics::NewProp_SpawnRotation_MetaData[] = {
		{ "Category", "T4PacketCmdItemEnterCS" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketCmdItemEnterCS, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Statics::NewProp_SpawnRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Statics::NewProp_SpawnRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "T4PacketCmdItemEnterCS" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketCmdItemEnterCS, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Statics::NewProp_SpawnLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Statics::NewProp_SpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Statics::NewProp_ItemNameInTable_MetaData[] = {
		{ "Category", "T4PacketCmdItemEnterCS" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Statics::NewProp_ItemNameInTable = { "ItemNameInTable", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketCmdItemEnterCS, ItemNameInTable), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Statics::NewProp_ItemNameInTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Statics::NewProp_ItemNameInTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Statics::NewProp_ItemNameInTable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4PacketCtoS,
		&NewStructOps,
		"T4PacketCmdItemEnterCS",
		sizeof(FT4PacketCmdItemEnterCS),
		alignof(FT4PacketCmdItemEnterCS),
		Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketCmdItemEnterCS"), sizeof(FT4PacketCmdItemEnterCS), Get_Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdItemEnterCS_Hash() { return 2754979388U; }
class UScriptStruct* FT4PacketCmdFOLeaveCS::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdFOLeaveCS_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketCmdFOLeaveCS, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4PacketCmdFOLeaveCS"), sizeof(FT4PacketCmdFOLeaveCS), Get_Z_Construct_UScriptStruct_FT4PacketCmdFOLeaveCS_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4PacketCmdFOLeaveCS>()
{
	return FT4PacketCmdFOLeaveCS::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketCmdFOLeaveCS(FT4PacketCmdFOLeaveCS::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4PacketCmdFOLeaveCS"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdFOLeaveCS
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdFOLeaveCS()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketCmdFOLeaveCS")),new UScriptStruct::TCppStructOps<FT4PacketCmdFOLeaveCS>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdFOLeaveCS;
	struct Z_Construct_UScriptStruct_FT4PacketCmdFOLeaveCS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaveObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeaveObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdFOLeaveCS_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
		{ "ToolTip", "#31" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketCmdFOLeaveCS_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketCmdFOLeaveCS>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdFOLeaveCS_Statics::NewProp_LeaveObjectID_MetaData[] = {
		{ "Category", "T4PacketCmdFOLeaveCS" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketCmdFOLeaveCS_Statics::NewProp_LeaveObjectID = { "LeaveObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketCmdFOLeaveCS, LeaveObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdFOLeaveCS_Statics::NewProp_LeaveObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdFOLeaveCS_Statics::NewProp_LeaveObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketCmdFOLeaveCS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketCmdFOLeaveCS_Statics::NewProp_LeaveObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketCmdFOLeaveCS_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4PacketCtoS,
		&NewStructOps,
		"T4PacketCmdFOLeaveCS",
		sizeof(FT4PacketCmdFOLeaveCS),
		alignof(FT4PacketCmdFOLeaveCS),
		Z_Construct_UScriptStruct_FT4PacketCmdFOLeaveCS_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdFOLeaveCS_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdFOLeaveCS_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdFOLeaveCS_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCmdFOLeaveCS()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdFOLeaveCS_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketCmdFOLeaveCS"), sizeof(FT4PacketCmdFOLeaveCS), Get_Z_Construct_UScriptStruct_FT4PacketCmdFOLeaveCS_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketCmdFOLeaveCS_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdFOLeaveCS_Hash() { return 1884667958U; }
class UScriptStruct* FT4PacketCmdFOEnterCS::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4PacketCmdFOEnterCS"), sizeof(FT4PacketCmdFOEnterCS), Get_Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4PacketCmdFOEnterCS>()
{
	return FT4PacketCmdFOEnterCS::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketCmdFOEnterCS(FT4PacketCmdFOEnterCS::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4PacketCmdFOEnterCS"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdFOEnterCS
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdFOEnterCS()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketCmdFOEnterCS")),new UScriptStruct::TCppStructOps<FT4PacketCmdFOEnterCS>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdFOEnterCS;
	struct Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FONameInTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FONameInTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
		{ "ToolTip", "#31" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketCmdFOEnterCS>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Statics::NewProp_SpawnRotation_MetaData[] = {
		{ "Category", "T4PacketCmdFOEnterCS" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketCmdFOEnterCS, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Statics::NewProp_SpawnRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Statics::NewProp_SpawnRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "T4PacketCmdFOEnterCS" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketCmdFOEnterCS, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Statics::NewProp_SpawnLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Statics::NewProp_SpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Statics::NewProp_FONameInTable_MetaData[] = {
		{ "Category", "T4PacketCmdFOEnterCS" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Statics::NewProp_FONameInTable = { "FONameInTable", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketCmdFOEnterCS, FONameInTable), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Statics::NewProp_FONameInTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Statics::NewProp_FONameInTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Statics::NewProp_FONameInTable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4PacketCtoS,
		&NewStructOps,
		"T4PacketCmdFOEnterCS",
		sizeof(FT4PacketCmdFOEnterCS),
		alignof(FT4PacketCmdFOEnterCS),
		Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketCmdFOEnterCS"), sizeof(FT4PacketCmdFOEnterCS), Get_Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdFOEnterCS_Hash() { return 2601029901U; }
class UScriptStruct* FT4PacketCmdNPCLeaveCS::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdNPCLeaveCS_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketCmdNPCLeaveCS, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4PacketCmdNPCLeaveCS"), sizeof(FT4PacketCmdNPCLeaveCS), Get_Z_Construct_UScriptStruct_FT4PacketCmdNPCLeaveCS_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4PacketCmdNPCLeaveCS>()
{
	return FT4PacketCmdNPCLeaveCS::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketCmdNPCLeaveCS(FT4PacketCmdNPCLeaveCS::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4PacketCmdNPCLeaveCS"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdNPCLeaveCS
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdNPCLeaveCS()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketCmdNPCLeaveCS")),new UScriptStruct::TCppStructOps<FT4PacketCmdNPCLeaveCS>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdNPCLeaveCS;
	struct Z_Construct_UScriptStruct_FT4PacketCmdNPCLeaveCS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaveObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeaveObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdNPCLeaveCS_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
		{ "ToolTip", "#31" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketCmdNPCLeaveCS_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketCmdNPCLeaveCS>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdNPCLeaveCS_Statics::NewProp_LeaveObjectID_MetaData[] = {
		{ "Category", "T4PacketCmdNPCLeaveCS" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketCmdNPCLeaveCS_Statics::NewProp_LeaveObjectID = { "LeaveObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketCmdNPCLeaveCS, LeaveObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdNPCLeaveCS_Statics::NewProp_LeaveObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdNPCLeaveCS_Statics::NewProp_LeaveObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketCmdNPCLeaveCS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketCmdNPCLeaveCS_Statics::NewProp_LeaveObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketCmdNPCLeaveCS_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4PacketCtoS,
		&NewStructOps,
		"T4PacketCmdNPCLeaveCS",
		sizeof(FT4PacketCmdNPCLeaveCS),
		alignof(FT4PacketCmdNPCLeaveCS),
		Z_Construct_UScriptStruct_FT4PacketCmdNPCLeaveCS_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdNPCLeaveCS_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdNPCLeaveCS_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdNPCLeaveCS_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCmdNPCLeaveCS()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdNPCLeaveCS_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketCmdNPCLeaveCS"), sizeof(FT4PacketCmdNPCLeaveCS), Get_Z_Construct_UScriptStruct_FT4PacketCmdNPCLeaveCS_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketCmdNPCLeaveCS_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdNPCLeaveCS_Hash() { return 2365336785U; }
class UScriptStruct* FT4PacketCmdNPCEnterCS::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4PacketCmdNPCEnterCS"), sizeof(FT4PacketCmdNPCEnterCS), Get_Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4PacketCmdNPCEnterCS>()
{
	return FT4PacketCmdNPCEnterCS::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketCmdNPCEnterCS(FT4PacketCmdNPCEnterCS::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4PacketCmdNPCEnterCS"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdNPCEnterCS
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdNPCEnterCS()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketCmdNPCEnterCS")),new UScriptStruct::TCppStructOps<FT4PacketCmdNPCEnterCS>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdNPCEnterCS;
	struct Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPCNameInTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NPCNameInTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
		{ "ToolTip", "#31" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketCmdNPCEnterCS>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Statics::NewProp_SpawnRotation_MetaData[] = {
		{ "Category", "T4PacketCmdNPCEnterCS" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketCmdNPCEnterCS, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Statics::NewProp_SpawnRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Statics::NewProp_SpawnRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "T4PacketCmdNPCEnterCS" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketCmdNPCEnterCS, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Statics::NewProp_SpawnLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Statics::NewProp_SpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Statics::NewProp_NPCNameInTable_MetaData[] = {
		{ "Category", "T4PacketCmdNPCEnterCS" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Statics::NewProp_NPCNameInTable = { "NPCNameInTable", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketCmdNPCEnterCS, NPCNameInTable), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Statics::NewProp_NPCNameInTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Statics::NewProp_NPCNameInTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Statics::NewProp_NPCNameInTable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4PacketCtoS,
		&NewStructOps,
		"T4PacketCmdNPCEnterCS",
		sizeof(FT4PacketCmdNPCEnterCS),
		alignof(FT4PacketCmdNPCEnterCS),
		Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketCmdNPCEnterCS"), sizeof(FT4PacketCmdNPCEnterCS), Get_Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdNPCEnterCS_Hash() { return 3394095055U; }
class UScriptStruct* FT4PacketCmdPCLeaveCS::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdPCLeaveCS_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketCmdPCLeaveCS, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4PacketCmdPCLeaveCS"), sizeof(FT4PacketCmdPCLeaveCS), Get_Z_Construct_UScriptStruct_FT4PacketCmdPCLeaveCS_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4PacketCmdPCLeaveCS>()
{
	return FT4PacketCmdPCLeaveCS::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketCmdPCLeaveCS(FT4PacketCmdPCLeaveCS::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4PacketCmdPCLeaveCS"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdPCLeaveCS
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdPCLeaveCS()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketCmdPCLeaveCS")),new UScriptStruct::TCppStructOps<FT4PacketCmdPCLeaveCS>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdPCLeaveCS;
	struct Z_Construct_UScriptStruct_FT4PacketCmdPCLeaveCS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaveObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeaveObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdPCLeaveCS_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketCmdPCLeaveCS_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketCmdPCLeaveCS>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdPCLeaveCS_Statics::NewProp_LeaveObjectID_MetaData[] = {
		{ "Category", "T4PacketCmdPCLeaveCS" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketCmdPCLeaveCS_Statics::NewProp_LeaveObjectID = { "LeaveObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketCmdPCLeaveCS, LeaveObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdPCLeaveCS_Statics::NewProp_LeaveObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdPCLeaveCS_Statics::NewProp_LeaveObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketCmdPCLeaveCS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketCmdPCLeaveCS_Statics::NewProp_LeaveObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketCmdPCLeaveCS_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4PacketCtoS,
		&NewStructOps,
		"T4PacketCmdPCLeaveCS",
		sizeof(FT4PacketCmdPCLeaveCS),
		alignof(FT4PacketCmdPCLeaveCS),
		Z_Construct_UScriptStruct_FT4PacketCmdPCLeaveCS_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdPCLeaveCS_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdPCLeaveCS_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdPCLeaveCS_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCmdPCLeaveCS()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdPCLeaveCS_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketCmdPCLeaveCS"), sizeof(FT4PacketCmdPCLeaveCS), Get_Z_Construct_UScriptStruct_FT4PacketCmdPCLeaveCS_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketCmdPCLeaveCS_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdPCLeaveCS_Hash() { return 2699411026U; }
class UScriptStruct* FT4PacketCmdPCEnterCS::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4PacketCmdPCEnterCS"), sizeof(FT4PacketCmdPCEnterCS), Get_Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4PacketCmdPCEnterCS>()
{
	return FT4PacketCmdPCEnterCS::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketCmdPCEnterCS(FT4PacketCmdPCEnterCS::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4PacketCmdPCEnterCS"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdPCEnterCS
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdPCEnterCS()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketCmdPCEnterCS")),new UScriptStruct::TCppStructOps<FT4PacketCmdPCEnterCS>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdPCEnterCS;
	struct Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetViewTarget_MetaData[];
#endif
		static void NewProp_bSetViewTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetViewTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterNameInTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CharacterNameInTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketCmdPCEnterCS>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::NewProp_bSetViewTarget_MetaData[] = {
		{ "Category", "T4PacketCmdPCEnterCS" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::NewProp_bSetViewTarget_SetBit(void* Obj)
	{
		((FT4PacketCmdPCEnterCS*)Obj)->bSetViewTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::NewProp_bSetViewTarget = { "bSetViewTarget", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4PacketCmdPCEnterCS), &Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::NewProp_bSetViewTarget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::NewProp_bSetViewTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::NewProp_bSetViewTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::NewProp_SpawnRotation_MetaData[] = {
		{ "Category", "T4PacketCmdPCEnterCS" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketCmdPCEnterCS, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::NewProp_SpawnRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::NewProp_SpawnRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "T4PacketCmdPCEnterCS" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketCmdPCEnterCS, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::NewProp_SpawnLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::NewProp_SpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::NewProp_CharacterNameInTable_MetaData[] = {
		{ "Category", "T4PacketCmdPCEnterCS" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::NewProp_CharacterNameInTable = { "CharacterNameInTable", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketCmdPCEnterCS, CharacterNameInTable), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::NewProp_CharacterNameInTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::NewProp_CharacterNameInTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::NewProp_bSetViewTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::NewProp_CharacterNameInTable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4PacketCtoS,
		&NewStructOps,
		"T4PacketCmdPCEnterCS",
		sizeof(FT4PacketCmdPCEnterCS),
		alignof(FT4PacketCmdPCEnterCS),
		Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketCmdPCEnterCS"), sizeof(FT4PacketCmdPCEnterCS), Get_Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdPCEnterCS_Hash() { return 3599048628U; }
class UScriptStruct* FT4PacketCmdChangeWorldCS::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdChangeWorldCS_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketCmdChangeWorldCS, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4PacketCmdChangeWorldCS"), sizeof(FT4PacketCmdChangeWorldCS), Get_Z_Construct_UScriptStruct_FT4PacketCmdChangeWorldCS_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4PacketCmdChangeWorldCS>()
{
	return FT4PacketCmdChangeWorldCS::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketCmdChangeWorldCS(FT4PacketCmdChangeWorldCS::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4PacketCmdChangeWorldCS"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdChangeWorldCS
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdChangeWorldCS()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketCmdChangeWorldCS")),new UScriptStruct::TCppStructOps<FT4PacketCmdChangeWorldCS>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCmdChangeWorldCS;
	struct Z_Construct_UScriptStruct_FT4PacketCmdChangeWorldCS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldNameInTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WorldNameInTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdChangeWorldCS_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
		{ "ToolTip", "ET4PacketCtoS::CmdTeleport" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketCmdChangeWorldCS_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketCmdChangeWorldCS>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCmdChangeWorldCS_Statics::NewProp_WorldNameInTable_MetaData[] = {
		{ "Category", "T4PacketCmdChangeWorldCS" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Command.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4PacketCmdChangeWorldCS_Statics::NewProp_WorldNameInTable = { "WorldNameInTable", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketCmdChangeWorldCS, WorldNameInTable), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdChangeWorldCS_Statics::NewProp_WorldNameInTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdChangeWorldCS_Statics::NewProp_WorldNameInTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketCmdChangeWorldCS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketCmdChangeWorldCS_Statics::NewProp_WorldNameInTable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketCmdChangeWorldCS_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4PacketCtoS,
		&NewStructOps,
		"T4PacketCmdChangeWorldCS",
		sizeof(FT4PacketCmdChangeWorldCS),
		alignof(FT4PacketCmdChangeWorldCS),
		Z_Construct_UScriptStruct_FT4PacketCmdChangeWorldCS_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdChangeWorldCS_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCmdChangeWorldCS_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCmdChangeWorldCS_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCmdChangeWorldCS()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdChangeWorldCS_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketCmdChangeWorldCS"), sizeof(FT4PacketCmdChangeWorldCS), Get_Z_Construct_UScriptStruct_FT4PacketCmdChangeWorldCS_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketCmdChangeWorldCS_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketCmdChangeWorldCS_Hash() { return 990151088U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
