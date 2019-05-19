// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Public/Protocol/T4PacketSC_Status.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PacketSC_Status() {}
// Cross Module References
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketExchangeSC();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketStoC();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectID();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketUnEquipSC();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketEquipSC();
// End Cross Module References
class UScriptStruct* FT4PacketExchangeSC::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketExchangeSC_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketExchangeSC, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4PacketExchangeSC"), sizeof(FT4PacketExchangeSC), Get_Z_Construct_UScriptStruct_FT4PacketExchangeSC_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4PacketExchangeSC>()
{
	return FT4PacketExchangeSC::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketExchangeSC(FT4PacketExchangeSC::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4PacketExchangeSC"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketExchangeSC
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketExchangeSC()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketExchangeSC")),new UScriptStruct::TCppStructOps<FT4PacketExchangeSC>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4PacketExchangeSC;
	struct Z_Construct_UScriptStruct_FT4PacketExchangeSC_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketExchangeSC_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_Status.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketExchangeSC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketExchangeSC>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketExchangeSC_Statics::NewProp_ItemNameInTable_MetaData[] = {
		{ "Category", "T4PacketExchangeSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4PacketExchangeSC_Statics::NewProp_ItemNameInTable = { "ItemNameInTable", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketExchangeSC, ItemNameInTable), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketExchangeSC_Statics::NewProp_ItemNameInTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketExchangeSC_Statics::NewProp_ItemNameInTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketExchangeSC_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "T4PacketExchangeSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketExchangeSC_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketExchangeSC, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketExchangeSC_Statics::NewProp_ObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketExchangeSC_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketExchangeSC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketExchangeSC_Statics::NewProp_ItemNameInTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketExchangeSC_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketExchangeSC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		Z_Construct_UScriptStruct_FT4PacketStoC,
		&NewStructOps,
		"T4PacketExchangeSC",
		sizeof(FT4PacketExchangeSC),
		alignof(FT4PacketExchangeSC),
		Z_Construct_UScriptStruct_FT4PacketExchangeSC_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketExchangeSC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketExchangeSC_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketExchangeSC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketExchangeSC()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketExchangeSC_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketExchangeSC"), sizeof(FT4PacketExchangeSC), Get_Z_Construct_UScriptStruct_FT4PacketExchangeSC_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketExchangeSC_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketExchangeSC_Hash() { return 4044364873U; }
class UScriptStruct* FT4PacketUnEquipSC::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketUnEquipSC_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketUnEquipSC, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4PacketUnEquipSC"), sizeof(FT4PacketUnEquipSC), Get_Z_Construct_UScriptStruct_FT4PacketUnEquipSC_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4PacketUnEquipSC>()
{
	return FT4PacketUnEquipSC::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketUnEquipSC(FT4PacketUnEquipSC::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4PacketUnEquipSC"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketUnEquipSC
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketUnEquipSC()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketUnEquipSC")),new UScriptStruct::TCppStructOps<FT4PacketUnEquipSC>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4PacketUnEquipSC;
	struct Z_Construct_UScriptStruct_FT4PacketUnEquipSC_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketUnEquipSC_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_Status.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketUnEquipSC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketUnEquipSC>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketUnEquipSC_Statics::NewProp_ItemNameInTable_MetaData[] = {
		{ "Category", "T4PacketUnEquipSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4PacketUnEquipSC_Statics::NewProp_ItemNameInTable = { "ItemNameInTable", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketUnEquipSC, ItemNameInTable), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketUnEquipSC_Statics::NewProp_ItemNameInTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketUnEquipSC_Statics::NewProp_ItemNameInTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketUnEquipSC_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "T4PacketUnEquipSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketUnEquipSC_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketUnEquipSC, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketUnEquipSC_Statics::NewProp_ObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketUnEquipSC_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketUnEquipSC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketUnEquipSC_Statics::NewProp_ItemNameInTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketUnEquipSC_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketUnEquipSC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		Z_Construct_UScriptStruct_FT4PacketStoC,
		&NewStructOps,
		"T4PacketUnEquipSC",
		sizeof(FT4PacketUnEquipSC),
		alignof(FT4PacketUnEquipSC),
		Z_Construct_UScriptStruct_FT4PacketUnEquipSC_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketUnEquipSC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketUnEquipSC_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketUnEquipSC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketUnEquipSC()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketUnEquipSC_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketUnEquipSC"), sizeof(FT4PacketUnEquipSC), Get_Z_Construct_UScriptStruct_FT4PacketUnEquipSC_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketUnEquipSC_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketUnEquipSC_Hash() { return 229011791U; }
class UScriptStruct* FT4PacketEquipSC::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketEquipSC_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketEquipSC, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4PacketEquipSC"), sizeof(FT4PacketEquipSC), Get_Z_Construct_UScriptStruct_FT4PacketEquipSC_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4PacketEquipSC>()
{
	return FT4PacketEquipSC::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketEquipSC(FT4PacketEquipSC::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4PacketEquipSC"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketEquipSC
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketEquipSC()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketEquipSC")),new UScriptStruct::TCppStructOps<FT4PacketEquipSC>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4PacketEquipSC;
	struct Z_Construct_UScriptStruct_FT4PacketEquipSC_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketEquipSC_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_Status.h" },
		{ "ToolTip", "ET4PacketStoC::Equip\nET4PacketStoC::UnEquip\nET4PacketStoC::Exchange" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketEquipSC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketEquipSC>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketEquipSC_Statics::NewProp_ItemNameInTable_MetaData[] = {
		{ "Category", "T4PacketEquipSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4PacketEquipSC_Statics::NewProp_ItemNameInTable = { "ItemNameInTable", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketEquipSC, ItemNameInTable), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketEquipSC_Statics::NewProp_ItemNameInTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketEquipSC_Statics::NewProp_ItemNameInTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketEquipSC_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "T4PacketEquipSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_Status.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketEquipSC_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketEquipSC, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketEquipSC_Statics::NewProp_ObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketEquipSC_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketEquipSC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketEquipSC_Statics::NewProp_ItemNameInTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketEquipSC_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketEquipSC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		Z_Construct_UScriptStruct_FT4PacketStoC,
		&NewStructOps,
		"T4PacketEquipSC",
		sizeof(FT4PacketEquipSC),
		alignof(FT4PacketEquipSC),
		Z_Construct_UScriptStruct_FT4PacketEquipSC_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketEquipSC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketEquipSC_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketEquipSC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketEquipSC()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketEquipSC_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketEquipSC"), sizeof(FT4PacketEquipSC), Get_Z_Construct_UScriptStruct_FT4PacketEquipSC_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketEquipSC_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketEquipSC_Hash() { return 2019151683U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
