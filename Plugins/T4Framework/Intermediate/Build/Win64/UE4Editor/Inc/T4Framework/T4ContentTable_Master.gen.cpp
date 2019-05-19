// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Classes/Content/T4ContentTable_Master.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ContentTable_Master() {}
// Cross Module References
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4ContentMasterTableRow();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	T4FRAMEWORK_API UEnum* Z_Construct_UEnum_T4Framework_ET4ContentTableType();
// End Cross Module References
class UScriptStruct* FT4ContentMasterTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ContentMasterTableRow, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4ContentMasterTableRow"), sizeof(FT4ContentMasterTableRow), Get_Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4ContentMasterTableRow>()
{
	return FT4ContentMasterTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ContentMasterTableRow(FT4ContentMasterTableRow::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4ContentMasterTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4ContentMasterTableRow
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4ContentMasterTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ContentMasterTableRow")),new UScriptStruct::TCppStructOps<FT4ContentMasterTableRow>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4ContentMasterTableRow;
	struct Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Table_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Table;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Content/T4ContentTable_Master.h" },
		{ "ToolTip", "http://api.unrealengine.com/KOR/Gameplay/DataDriven/" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ContentMasterTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::NewProp_Table_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentTable_Master.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentMasterTableRow, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::NewProp_Table_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::NewProp_Table_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentTable_Master.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentMasterTableRow, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/Content/T4ContentTable_Master.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentMasterTableRow, Type), Z_Construct_UEnum_T4Framework_ET4ContentTableType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::NewProp_Table,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::NewProp_Type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"T4ContentMasterTableRow",
		sizeof(FT4ContentMasterTableRow),
		alignof(FT4ContentMasterTableRow),
		Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ContentMasterTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ContentMasterTableRow"), sizeof(FT4ContentMasterTableRow), Get_Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ContentMasterTableRow_Hash() { return 3843965466U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
