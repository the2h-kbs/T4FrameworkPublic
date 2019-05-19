// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Public/Protocol/T4PacketCS_Status.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PacketCS_Status() {}
// Cross Module References
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketExchangeCS();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCtoS();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectID();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketUnEquipCS();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketEquipCS();
// End Cross Module References
class UScriptStruct* FT4PacketExchangeCS::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketExchangeCS_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketExchangeCS, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4PacketExchangeCS"), sizeof(FT4PacketExchangeCS), Get_Z_Construct_UScriptStruct_FT4PacketExchangeCS_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4PacketExchangeCS>()
{
	return FT4PacketExchangeCS::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketExchangeCS(FT4PacketExchangeCS::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4PacketExchangeCS"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketExchangeCS
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketExchangeCS()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketExchangeCS")),new UScriptStruct::TCppStructOps<FT4PacketExchangeCS>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4PacketExchangeCS;
	struct Z_Construct_UScriptStruct_FT4PacketExchangeCS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemNameInTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemNameInTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenderID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketExchangeCS_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/T4PacketCS_Status.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketExchangeCS_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketExchangeCS>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketExchangeCS_Statics::NewProp_ItemNameInTable_MetaData[] = {
		{ "Category", "T4PacketExchangeCS" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketCS_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4PacketExchangeCS_Statics::NewProp_ItemNameInTable = { "ItemNameInTable", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketExchangeCS, ItemNameInTable), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketExchangeCS_Statics::NewProp_ItemNameInTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketExchangeCS_Statics::NewProp_ItemNameInTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketExchangeCS_Statics::NewProp_SenderID_MetaData[] = {
		{ "Category", "T4PacketExchangeCS" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketCS_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketExchangeCS_Statics::NewProp_SenderID = { "SenderID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketExchangeCS, SenderID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketExchangeCS_Statics::NewProp_SenderID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketExchangeCS_Statics::NewProp_SenderID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketExchangeCS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketExchangeCS_Statics::NewProp_ItemNameInTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketExchangeCS_Statics::NewProp_SenderID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketExchangeCS_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		Z_Construct_UScriptStruct_FT4PacketCtoS,
		&NewStructOps,
		"T4PacketExchangeCS",
		sizeof(FT4PacketExchangeCS),
		alignof(FT4PacketExchangeCS),
		Z_Construct_UScriptStruct_FT4PacketExchangeCS_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketExchangeCS_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketExchangeCS_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketExchangeCS_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketExchangeCS()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketExchangeCS_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketExchangeCS"), sizeof(FT4PacketExchangeCS), Get_Z_Construct_UScriptStruct_FT4PacketExchangeCS_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketExchangeCS_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketExchangeCS_Hash() { return 2684724765U; }
class UScriptStruct* FT4PacketUnEquipCS::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketUnEquipCS_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketUnEquipCS, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4PacketUnEquipCS"), sizeof(FT4PacketUnEquipCS), Get_Z_Construct_UScriptStruct_FT4PacketUnEquipCS_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4PacketUnEquipCS>()
{
	return FT4PacketUnEquipCS::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketUnEquipCS(FT4PacketUnEquipCS::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4PacketUnEquipCS"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketUnEquipCS
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketUnEquipCS()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketUnEquipCS")),new UScriptStruct::TCppStructOps<FT4PacketUnEquipCS>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4PacketUnEquipCS;
	struct Z_Construct_UScriptStruct_FT4PacketUnEquipCS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemNameInTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemNameInTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenderID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketUnEquipCS_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/T4PacketCS_Status.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketUnEquipCS_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketUnEquipCS>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketUnEquipCS_Statics::NewProp_ItemNameInTable_MetaData[] = {
		{ "Category", "T4PacketUnEquipCS" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketCS_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4PacketUnEquipCS_Statics::NewProp_ItemNameInTable = { "ItemNameInTable", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketUnEquipCS, ItemNameInTable), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketUnEquipCS_Statics::NewProp_ItemNameInTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketUnEquipCS_Statics::NewProp_ItemNameInTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketUnEquipCS_Statics::NewProp_SenderID_MetaData[] = {
		{ "Category", "T4PacketUnEquipCS" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketCS_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketUnEquipCS_Statics::NewProp_SenderID = { "SenderID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketUnEquipCS, SenderID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketUnEquipCS_Statics::NewProp_SenderID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketUnEquipCS_Statics::NewProp_SenderID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketUnEquipCS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketUnEquipCS_Statics::NewProp_ItemNameInTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketUnEquipCS_Statics::NewProp_SenderID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketUnEquipCS_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		Z_Construct_UScriptStruct_FT4PacketCtoS,
		&NewStructOps,
		"T4PacketUnEquipCS",
		sizeof(FT4PacketUnEquipCS),
		alignof(FT4PacketUnEquipCS),
		Z_Construct_UScriptStruct_FT4PacketUnEquipCS_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketUnEquipCS_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketUnEquipCS_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketUnEquipCS_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketUnEquipCS()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketUnEquipCS_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketUnEquipCS"), sizeof(FT4PacketUnEquipCS), Get_Z_Construct_UScriptStruct_FT4PacketUnEquipCS_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketUnEquipCS_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketUnEquipCS_Hash() { return 772044181U; }
class UScriptStruct* FT4PacketEquipCS::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketEquipCS_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketEquipCS, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4PacketEquipCS"), sizeof(FT4PacketEquipCS), Get_Z_Construct_UScriptStruct_FT4PacketEquipCS_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4PacketEquipCS>()
{
	return FT4PacketEquipCS::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketEquipCS(FT4PacketEquipCS::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4PacketEquipCS"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketEquipCS
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketEquipCS()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketEquipCS")),new UScriptStruct::TCppStructOps<FT4PacketEquipCS>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4PacketEquipCS;
	struct Z_Construct_UScriptStruct_FT4PacketEquipCS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemNameInTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemNameInTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenderID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketEquipCS_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/T4PacketCS_Status.h" },
		{ "ToolTip", "ET4PacketCtoS::Equip\nET4PacketCtoS::UnEquip\nET4PacketCtoS::Exchange" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketEquipCS_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketEquipCS>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketEquipCS_Statics::NewProp_ItemNameInTable_MetaData[] = {
		{ "Category", "T4PacketEquipCS" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketCS_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4PacketEquipCS_Statics::NewProp_ItemNameInTable = { "ItemNameInTable", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketEquipCS, ItemNameInTable), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketEquipCS_Statics::NewProp_ItemNameInTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketEquipCS_Statics::NewProp_ItemNameInTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketEquipCS_Statics::NewProp_SenderID_MetaData[] = {
		{ "Category", "T4PacketEquipCS" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketCS_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketEquipCS_Statics::NewProp_SenderID = { "SenderID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketEquipCS, SenderID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketEquipCS_Statics::NewProp_SenderID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketEquipCS_Statics::NewProp_SenderID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketEquipCS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketEquipCS_Statics::NewProp_ItemNameInTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketEquipCS_Statics::NewProp_SenderID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketEquipCS_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		Z_Construct_UScriptStruct_FT4PacketCtoS,
		&NewStructOps,
		"T4PacketEquipCS",
		sizeof(FT4PacketEquipCS),
		alignof(FT4PacketEquipCS),
		Z_Construct_UScriptStruct_FT4PacketEquipCS_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketEquipCS_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketEquipCS_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketEquipCS_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketEquipCS()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketEquipCS_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketEquipCS"), sizeof(FT4PacketEquipCS), Get_Z_Construct_UScriptStruct_FT4PacketEquipCS_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketEquipCS_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketEquipCS_Hash() { return 3897545808U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
