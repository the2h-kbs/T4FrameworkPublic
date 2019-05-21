// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Public/T4FrameworkNet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4FrameworkNet() {}
// Cross Module References
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4NetID();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
// End Cross Module References
class UScriptStruct* FT4NetID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4NetID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4NetID, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4NetID"), sizeof(FT4NetID), Get_Z_Construct_UScriptStruct_FT4NetID_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4NetID>()
{
	return FT4NetID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4NetID(FT4NetID::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4NetID"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4NetID
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4NetID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4NetID")),new UScriptStruct::TCppStructOps<FT4NetID>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4NetID;
	struct Z_Construct_UScriptStruct_FT4NetID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NetID_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/T4FrameworkNet.h" },
		{ "ToolTip", "#34 : \xeb\xb3\x84\xeb\x8f\x84 \xec\x84\x9c\xeb\xb2\x84\xec\x97\x90\xec\x84\x9c \xea\xb4\x80\xeb\xa6\xac\xed\x95\x98\xeb\x8a\x94 ID \xea\xb0\x80 \xec\x9e\x88\xeb\x8b\xa4\xeb\xa9\xb4 \xeb\x8c\x80\xec\xb2\xb4\xed\x95\x98\xea\xb8\xb0 \xec\x9c\x84\xed\x95\xb4 \xec\x82\xac\xec\x9a\xa9!!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4NetID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4NetID>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NetID_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "T4NetID" },
		{ "ModuleRelativePath", "Public/T4FrameworkNet.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4NetID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NetID, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NetID_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NetID_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4NetID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NetID_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4NetID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		nullptr,
		&NewStructOps,
		"T4NetID",
		sizeof(FT4NetID),
		alignof(FT4NetID),
		Z_Construct_UScriptStruct_FT4NetID_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NetID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NetID_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NetID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4NetID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4NetID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4NetID"), sizeof(FT4NetID), Get_Z_Construct_UScriptStruct_FT4NetID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4NetID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4NetID_Hash() { return 4067396217U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
