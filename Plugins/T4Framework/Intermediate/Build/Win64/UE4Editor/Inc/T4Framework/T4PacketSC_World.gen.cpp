// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Public/Protocol/T4PacketSC_World.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PacketSC_World() {}
// Cross Module References
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketItemLeaveSC();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketStoC();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectID();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketItemEnterSC();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4NetID();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketFOLeaveSC();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketFOEnterSC();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketNPCLeaveSC();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketNPCEnterSC();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketPCLeaveSC();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketPCEnterSC();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketChangeWorldSC();
// End Cross Module References
class UScriptStruct* FT4PacketItemLeaveSC::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketItemLeaveSC_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketItemLeaveSC, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4PacketItemLeaveSC"), sizeof(FT4PacketItemLeaveSC), Get_Z_Construct_UScriptStruct_FT4PacketItemLeaveSC_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4PacketItemLeaveSC>()
{
	return FT4PacketItemLeaveSC::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketItemLeaveSC(FT4PacketItemLeaveSC::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4PacketItemLeaveSC"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketItemLeaveSC
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketItemLeaveSC()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketItemLeaveSC")),new UScriptStruct::TCppStructOps<FT4PacketItemLeaveSC>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4PacketItemLeaveSC;
	struct Z_Construct_UScriptStruct_FT4PacketItemLeaveSC_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketItemLeaveSC_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
		{ "ToolTip", "#41" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketItemLeaveSC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketItemLeaveSC>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketItemLeaveSC_Statics::NewProp_LeaveObjectID_MetaData[] = {
		{ "Category", "T4PacketItemLeaveSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketItemLeaveSC_Statics::NewProp_LeaveObjectID = { "LeaveObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketItemLeaveSC, LeaveObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketItemLeaveSC_Statics::NewProp_LeaveObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketItemLeaveSC_Statics::NewProp_LeaveObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketItemLeaveSC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketItemLeaveSC_Statics::NewProp_LeaveObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketItemLeaveSC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		Z_Construct_UScriptStruct_FT4PacketStoC,
		&NewStructOps,
		"T4PacketItemLeaveSC",
		sizeof(FT4PacketItemLeaveSC),
		alignof(FT4PacketItemLeaveSC),
		Z_Construct_UScriptStruct_FT4PacketItemLeaveSC_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketItemLeaveSC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketItemLeaveSC_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketItemLeaveSC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketItemLeaveSC()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketItemLeaveSC_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketItemLeaveSC"), sizeof(FT4PacketItemLeaveSC), Get_Z_Construct_UScriptStruct_FT4PacketItemLeaveSC_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketItemLeaveSC_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketItemLeaveSC_Hash() { return 3536652436U; }
class UScriptStruct* FT4PacketItemEnterSC::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketItemEnterSC, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4PacketItemEnterSC"), sizeof(FT4PacketItemEnterSC), Get_Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4PacketItemEnterSC>()
{
	return FT4PacketItemEnterSC::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketItemEnterSC(FT4PacketItemEnterSC::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4PacketItemEnterSC"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketItemEnterSC
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketItemEnterSC()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketItemEnterSC")),new UScriptStruct::TCppStructOps<FT4PacketItemEnterSC>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4PacketItemEnterSC;
	struct Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnterObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnterObjectID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NetID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
		{ "ToolTip", "#41" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketItemEnterSC>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewProp_SpawnRotation_MetaData[] = {
		{ "Category", "T4PacketItemEnterSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketItemEnterSC, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewProp_SpawnRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewProp_SpawnRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "T4PacketItemEnterSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketItemEnterSC, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewProp_SpawnLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewProp_SpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewProp_ItemNameInTable_MetaData[] = {
		{ "Category", "T4PacketItemEnterSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewProp_ItemNameInTable = { "ItemNameInTable", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketItemEnterSC, ItemNameInTable), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewProp_ItemNameInTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewProp_ItemNameInTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewProp_EnterObjectID_MetaData[] = {
		{ "Category", "T4PacketItemEnterSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewProp_EnterObjectID = { "EnterObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketItemEnterSC, EnterObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewProp_EnterObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewProp_EnterObjectID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewProp_NetID_MetaData[] = {
		{ "Category", "T4PacketItemEnterSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewProp_NetID = { "NetID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketItemEnterSC, NetID), Z_Construct_UScriptStruct_FT4NetID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewProp_NetID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewProp_NetID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewProp_ItemNameInTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewProp_EnterObjectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::NewProp_NetID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		Z_Construct_UScriptStruct_FT4PacketStoC,
		&NewStructOps,
		"T4PacketItemEnterSC",
		sizeof(FT4PacketItemEnterSC),
		alignof(FT4PacketItemEnterSC),
		Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketItemEnterSC()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketItemEnterSC"), sizeof(FT4PacketItemEnterSC), Get_Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketItemEnterSC_Hash() { return 4250741149U; }
class UScriptStruct* FT4PacketFOLeaveSC::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketFOLeaveSC_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketFOLeaveSC, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4PacketFOLeaveSC"), sizeof(FT4PacketFOLeaveSC), Get_Z_Construct_UScriptStruct_FT4PacketFOLeaveSC_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4PacketFOLeaveSC>()
{
	return FT4PacketFOLeaveSC::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketFOLeaveSC(FT4PacketFOLeaveSC::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4PacketFOLeaveSC"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketFOLeaveSC
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketFOLeaveSC()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketFOLeaveSC")),new UScriptStruct::TCppStructOps<FT4PacketFOLeaveSC>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4PacketFOLeaveSC;
	struct Z_Construct_UScriptStruct_FT4PacketFOLeaveSC_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketFOLeaveSC_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
		{ "ToolTip", "#31" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketFOLeaveSC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketFOLeaveSC>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketFOLeaveSC_Statics::NewProp_LeaveObjectID_MetaData[] = {
		{ "Category", "T4PacketFOLeaveSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketFOLeaveSC_Statics::NewProp_LeaveObjectID = { "LeaveObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketFOLeaveSC, LeaveObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketFOLeaveSC_Statics::NewProp_LeaveObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketFOLeaveSC_Statics::NewProp_LeaveObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketFOLeaveSC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketFOLeaveSC_Statics::NewProp_LeaveObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketFOLeaveSC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		Z_Construct_UScriptStruct_FT4PacketStoC,
		&NewStructOps,
		"T4PacketFOLeaveSC",
		sizeof(FT4PacketFOLeaveSC),
		alignof(FT4PacketFOLeaveSC),
		Z_Construct_UScriptStruct_FT4PacketFOLeaveSC_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketFOLeaveSC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketFOLeaveSC_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketFOLeaveSC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketFOLeaveSC()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketFOLeaveSC_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketFOLeaveSC"), sizeof(FT4PacketFOLeaveSC), Get_Z_Construct_UScriptStruct_FT4PacketFOLeaveSC_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketFOLeaveSC_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketFOLeaveSC_Hash() { return 1972778413U; }
class UScriptStruct* FT4PacketFOEnterSC::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketFOEnterSC, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4PacketFOEnterSC"), sizeof(FT4PacketFOEnterSC), Get_Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4PacketFOEnterSC>()
{
	return FT4PacketFOEnterSC::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketFOEnterSC(FT4PacketFOEnterSC::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4PacketFOEnterSC"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketFOEnterSC
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketFOEnterSC()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketFOEnterSC")),new UScriptStruct::TCppStructOps<FT4PacketFOEnterSC>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4PacketFOEnterSC;
	struct Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnterObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnterObjectID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NetID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
		{ "ToolTip", "#31" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketFOEnterSC>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewProp_SpawnRotation_MetaData[] = {
		{ "Category", "T4PacketFOEnterSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketFOEnterSC, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewProp_SpawnRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewProp_SpawnRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "T4PacketFOEnterSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketFOEnterSC, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewProp_SpawnLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewProp_SpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewProp_FONameInTable_MetaData[] = {
		{ "Category", "T4PacketFOEnterSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewProp_FONameInTable = { "FONameInTable", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketFOEnterSC, FONameInTable), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewProp_FONameInTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewProp_FONameInTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewProp_EnterObjectID_MetaData[] = {
		{ "Category", "T4PacketFOEnterSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewProp_EnterObjectID = { "EnterObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketFOEnterSC, EnterObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewProp_EnterObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewProp_EnterObjectID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewProp_NetID_MetaData[] = {
		{ "Category", "T4PacketFOEnterSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewProp_NetID = { "NetID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketFOEnterSC, NetID), Z_Construct_UScriptStruct_FT4NetID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewProp_NetID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewProp_NetID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewProp_FONameInTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewProp_EnterObjectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::NewProp_NetID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		Z_Construct_UScriptStruct_FT4PacketStoC,
		&NewStructOps,
		"T4PacketFOEnterSC",
		sizeof(FT4PacketFOEnterSC),
		alignof(FT4PacketFOEnterSC),
		Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketFOEnterSC()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketFOEnterSC"), sizeof(FT4PacketFOEnterSC), Get_Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketFOEnterSC_Hash() { return 1497063650U; }
class UScriptStruct* FT4PacketNPCLeaveSC::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketNPCLeaveSC_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketNPCLeaveSC, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4PacketNPCLeaveSC"), sizeof(FT4PacketNPCLeaveSC), Get_Z_Construct_UScriptStruct_FT4PacketNPCLeaveSC_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4PacketNPCLeaveSC>()
{
	return FT4PacketNPCLeaveSC::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketNPCLeaveSC(FT4PacketNPCLeaveSC::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4PacketNPCLeaveSC"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketNPCLeaveSC
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketNPCLeaveSC()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketNPCLeaveSC")),new UScriptStruct::TCppStructOps<FT4PacketNPCLeaveSC>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4PacketNPCLeaveSC;
	struct Z_Construct_UScriptStruct_FT4PacketNPCLeaveSC_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketNPCLeaveSC_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
		{ "ToolTip", "#31" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketNPCLeaveSC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketNPCLeaveSC>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketNPCLeaveSC_Statics::NewProp_LeaveObjectID_MetaData[] = {
		{ "Category", "T4PacketNPCLeaveSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketNPCLeaveSC_Statics::NewProp_LeaveObjectID = { "LeaveObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketNPCLeaveSC, LeaveObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketNPCLeaveSC_Statics::NewProp_LeaveObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketNPCLeaveSC_Statics::NewProp_LeaveObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketNPCLeaveSC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketNPCLeaveSC_Statics::NewProp_LeaveObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketNPCLeaveSC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		Z_Construct_UScriptStruct_FT4PacketStoC,
		&NewStructOps,
		"T4PacketNPCLeaveSC",
		sizeof(FT4PacketNPCLeaveSC),
		alignof(FT4PacketNPCLeaveSC),
		Z_Construct_UScriptStruct_FT4PacketNPCLeaveSC_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketNPCLeaveSC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketNPCLeaveSC_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketNPCLeaveSC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketNPCLeaveSC()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketNPCLeaveSC_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketNPCLeaveSC"), sizeof(FT4PacketNPCLeaveSC), Get_Z_Construct_UScriptStruct_FT4PacketNPCLeaveSC_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketNPCLeaveSC_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketNPCLeaveSC_Hash() { return 3811652471U; }
class UScriptStruct* FT4PacketNPCEnterSC::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketNPCEnterSC, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4PacketNPCEnterSC"), sizeof(FT4PacketNPCEnterSC), Get_Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4PacketNPCEnterSC>()
{
	return FT4PacketNPCEnterSC::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketNPCEnterSC(FT4PacketNPCEnterSC::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4PacketNPCEnterSC"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketNPCEnterSC
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketNPCEnterSC()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketNPCEnterSC")),new UScriptStruct::TCppStructOps<FT4PacketNPCEnterSC>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4PacketNPCEnterSC;
	struct Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnterObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnterObjectID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NetID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
		{ "ToolTip", "#31" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketNPCEnterSC>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewProp_SpawnRotation_MetaData[] = {
		{ "Category", "T4PacketNPCEnterSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketNPCEnterSC, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewProp_SpawnRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewProp_SpawnRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "T4PacketNPCEnterSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketNPCEnterSC, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewProp_SpawnLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewProp_SpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewProp_NPCNameInTable_MetaData[] = {
		{ "Category", "T4PacketNPCEnterSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewProp_NPCNameInTable = { "NPCNameInTable", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketNPCEnterSC, NPCNameInTable), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewProp_NPCNameInTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewProp_NPCNameInTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewProp_EnterObjectID_MetaData[] = {
		{ "Category", "T4PacketNPCEnterSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewProp_EnterObjectID = { "EnterObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketNPCEnterSC, EnterObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewProp_EnterObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewProp_EnterObjectID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewProp_NetID_MetaData[] = {
		{ "Category", "T4PacketNPCEnterSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewProp_NetID = { "NetID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketNPCEnterSC, NetID), Z_Construct_UScriptStruct_FT4NetID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewProp_NetID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewProp_NetID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewProp_NPCNameInTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewProp_EnterObjectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::NewProp_NetID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		Z_Construct_UScriptStruct_FT4PacketStoC,
		&NewStructOps,
		"T4PacketNPCEnterSC",
		sizeof(FT4PacketNPCEnterSC),
		alignof(FT4PacketNPCEnterSC),
		Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketNPCEnterSC()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketNPCEnterSC"), sizeof(FT4PacketNPCEnterSC), Get_Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketNPCEnterSC_Hash() { return 3853617098U; }
class UScriptStruct* FT4PacketPCLeaveSC::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketPCLeaveSC_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketPCLeaveSC, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4PacketPCLeaveSC"), sizeof(FT4PacketPCLeaveSC), Get_Z_Construct_UScriptStruct_FT4PacketPCLeaveSC_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4PacketPCLeaveSC>()
{
	return FT4PacketPCLeaveSC::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketPCLeaveSC(FT4PacketPCLeaveSC::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4PacketPCLeaveSC"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketPCLeaveSC
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketPCLeaveSC()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketPCLeaveSC")),new UScriptStruct::TCppStructOps<FT4PacketPCLeaveSC>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4PacketPCLeaveSC;
	struct Z_Construct_UScriptStruct_FT4PacketPCLeaveSC_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketPCLeaveSC_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketPCLeaveSC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketPCLeaveSC>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketPCLeaveSC_Statics::NewProp_LeaveObjectID_MetaData[] = {
		{ "Category", "T4PacketPCLeaveSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketPCLeaveSC_Statics::NewProp_LeaveObjectID = { "LeaveObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketPCLeaveSC, LeaveObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketPCLeaveSC_Statics::NewProp_LeaveObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketPCLeaveSC_Statics::NewProp_LeaveObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketPCLeaveSC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketPCLeaveSC_Statics::NewProp_LeaveObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketPCLeaveSC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		Z_Construct_UScriptStruct_FT4PacketStoC,
		&NewStructOps,
		"T4PacketPCLeaveSC",
		sizeof(FT4PacketPCLeaveSC),
		alignof(FT4PacketPCLeaveSC),
		Z_Construct_UScriptStruct_FT4PacketPCLeaveSC_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketPCLeaveSC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketPCLeaveSC_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketPCLeaveSC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketPCLeaveSC()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketPCLeaveSC_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketPCLeaveSC"), sizeof(FT4PacketPCLeaveSC), Get_Z_Construct_UScriptStruct_FT4PacketPCLeaveSC_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketPCLeaveSC_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketPCLeaveSC_Hash() { return 1306095918U; }
class UScriptStruct* FT4PacketPCEnterSC::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketPCEnterSC, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4PacketPCEnterSC"), sizeof(FT4PacketPCEnterSC), Get_Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4PacketPCEnterSC>()
{
	return FT4PacketPCEnterSC::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketPCEnterSC(FT4PacketPCEnterSC::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4PacketPCEnterSC"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketPCEnterSC
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketPCEnterSC()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketPCEnterSC")),new UScriptStruct::TCppStructOps<FT4PacketPCEnterSC>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4PacketPCEnterSC;
	struct Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterNameInTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CharacterNameInTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnterObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnterObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketPCEnterSC>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::NewProp_SpawnRotation_MetaData[] = {
		{ "Category", "T4PacketPCEnterSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketPCEnterSC, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::NewProp_SpawnRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::NewProp_SpawnRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "T4PacketPCEnterSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketPCEnterSC, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::NewProp_SpawnLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::NewProp_SpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::NewProp_CharacterNameInTable_MetaData[] = {
		{ "Category", "T4PacketPCEnterSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::NewProp_CharacterNameInTable = { "CharacterNameInTable", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketPCEnterSC, CharacterNameInTable), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::NewProp_CharacterNameInTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::NewProp_CharacterNameInTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::NewProp_EnterObjectID_MetaData[] = {
		{ "Category", "T4PacketPCEnterSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::NewProp_EnterObjectID = { "EnterObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketPCEnterSC, EnterObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::NewProp_EnterObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::NewProp_EnterObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::NewProp_CharacterNameInTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::NewProp_EnterObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		Z_Construct_UScriptStruct_FT4PacketStoC,
		&NewStructOps,
		"T4PacketPCEnterSC",
		sizeof(FT4PacketPCEnterSC),
		alignof(FT4PacketPCEnterSC),
		Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketPCEnterSC()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketPCEnterSC"), sizeof(FT4PacketPCEnterSC), Get_Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketPCEnterSC_Hash() { return 3647645067U; }
class UScriptStruct* FT4PacketMyPCEnterSC::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4PacketMyPCEnterSC"), sizeof(FT4PacketMyPCEnterSC), Get_Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4PacketMyPCEnterSC>()
{
	return FT4PacketMyPCEnterSC::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketMyPCEnterSC(FT4PacketMyPCEnterSC::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4PacketMyPCEnterSC"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketMyPCEnterSC
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketMyPCEnterSC()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketMyPCEnterSC")),new UScriptStruct::TCppStructOps<FT4PacketMyPCEnterSC>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4PacketMyPCEnterSC;
	struct Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterNameInTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CharacterNameInTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnterObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnterObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketMyPCEnterSC>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::NewProp_SpawnRotation_MetaData[] = {
		{ "Category", "T4PacketMyPCEnterSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketMyPCEnterSC, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::NewProp_SpawnRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::NewProp_SpawnRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "T4PacketMyPCEnterSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketMyPCEnterSC, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::NewProp_SpawnLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::NewProp_SpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::NewProp_CharacterNameInTable_MetaData[] = {
		{ "Category", "T4PacketMyPCEnterSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::NewProp_CharacterNameInTable = { "CharacterNameInTable", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketMyPCEnterSC, CharacterNameInTable), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::NewProp_CharacterNameInTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::NewProp_CharacterNameInTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::NewProp_EnterObjectID_MetaData[] = {
		{ "Category", "T4PacketMyPCEnterSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::NewProp_EnterObjectID = { "EnterObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketMyPCEnterSC, EnterObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::NewProp_EnterObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::NewProp_EnterObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::NewProp_CharacterNameInTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::NewProp_EnterObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		Z_Construct_UScriptStruct_FT4PacketStoC,
		&NewStructOps,
		"T4PacketMyPCEnterSC",
		sizeof(FT4PacketMyPCEnterSC),
		alignof(FT4PacketMyPCEnterSC),
		Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketMyPCEnterSC"), sizeof(FT4PacketMyPCEnterSC), Get_Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketMyPCEnterSC_Hash() { return 148990355U; }
class UScriptStruct* FT4PacketChangeWorldSC::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketChangeWorldSC_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketChangeWorldSC, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4PacketChangeWorldSC"), sizeof(FT4PacketChangeWorldSC), Get_Z_Construct_UScriptStruct_FT4PacketChangeWorldSC_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4PacketChangeWorldSC>()
{
	return FT4PacketChangeWorldSC::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketChangeWorldSC(FT4PacketChangeWorldSC::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4PacketChangeWorldSC"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketChangeWorldSC
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketChangeWorldSC()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketChangeWorldSC")),new UScriptStruct::TCppStructOps<FT4PacketChangeWorldSC>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4PacketChangeWorldSC;
	struct Z_Construct_UScriptStruct_FT4PacketChangeWorldSC_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketChangeWorldSC_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
		{ "ToolTip", "ET4PacketStoC::ItemEnter  #41\nET4PacketStoC::ItemLeave  #41" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketChangeWorldSC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketChangeWorldSC>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketChangeWorldSC_Statics::NewProp_WorldNameInTable_MetaData[] = {
		{ "Category", "T4PacketChangeWorldSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_World.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4PacketChangeWorldSC_Statics::NewProp_WorldNameInTable = { "WorldNameInTable", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketChangeWorldSC, WorldNameInTable), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketChangeWorldSC_Statics::NewProp_WorldNameInTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketChangeWorldSC_Statics::NewProp_WorldNameInTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketChangeWorldSC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketChangeWorldSC_Statics::NewProp_WorldNameInTable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketChangeWorldSC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		Z_Construct_UScriptStruct_FT4PacketStoC,
		&NewStructOps,
		"T4PacketChangeWorldSC",
		sizeof(FT4PacketChangeWorldSC),
		alignof(FT4PacketChangeWorldSC),
		Z_Construct_UScriptStruct_FT4PacketChangeWorldSC_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketChangeWorldSC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketChangeWorldSC_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketChangeWorldSC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketChangeWorldSC()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketChangeWorldSC_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketChangeWorldSC"), sizeof(FT4PacketChangeWorldSC), Get_Z_Construct_UScriptStruct_FT4PacketChangeWorldSC_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketChangeWorldSC_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketChangeWorldSC_Hash() { return 3385840409U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
