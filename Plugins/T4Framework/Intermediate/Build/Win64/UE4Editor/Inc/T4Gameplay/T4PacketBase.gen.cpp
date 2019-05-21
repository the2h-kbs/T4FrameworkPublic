// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Private/Network/Protocol/T4PacketBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PacketBase() {}
// Cross Module References
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketStoC();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEPLAY_API UEnum* Z_Construct_UEnum_T4Gameplay_ET4PacketStoC();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCtoS();
	T4GAMEPLAY_API UEnum* Z_Construct_UEnum_T4Gameplay_ET4PacketCtoS();
// End Cross Module References
class UScriptStruct* FT4PacketStoC::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketStoC_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketStoC, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4PacketStoC"), sizeof(FT4PacketStoC), Get_Z_Construct_UScriptStruct_FT4PacketStoC_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4PacketStoC>()
{
	return FT4PacketStoC::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketStoC(FT4PacketStoC::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4PacketStoC"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketStoC
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketStoC()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketStoC")),new UScriptStruct::TCppStructOps<FT4PacketStoC>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketStoC;
	struct Z_Construct_UScriptStruct_FT4PacketStoC_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PacketSC_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PacketSC;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PacketSC_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketStoC_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketStoC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketStoC>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketStoC_Statics::NewProp_PacketSC_MetaData[] = {
		{ "Category", "T4PacketStoC" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4PacketStoC_Statics::NewProp_PacketSC = { "PacketSC", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketStoC, PacketSC), Z_Construct_UEnum_T4Gameplay_ET4PacketStoC, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketStoC_Statics::NewProp_PacketSC_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketStoC_Statics::NewProp_PacketSC_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4PacketStoC_Statics::NewProp_PacketSC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketStoC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketStoC_Statics::NewProp_PacketSC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketStoC_Statics::NewProp_PacketSC_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketStoC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		nullptr,
		&NewStructOps,
		"T4PacketStoC",
		sizeof(FT4PacketStoC),
		alignof(FT4PacketStoC),
		Z_Construct_UScriptStruct_FT4PacketStoC_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketStoC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketStoC_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketStoC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketStoC()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketStoC_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketStoC"), sizeof(FT4PacketStoC), Get_Z_Construct_UScriptStruct_FT4PacketStoC_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketStoC_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketStoC_Hash() { return 2065205236U; }
class UScriptStruct* FT4PacketCtoS::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketCtoS_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketCtoS, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4PacketCtoS"), sizeof(FT4PacketCtoS), Get_Z_Construct_UScriptStruct_FT4PacketCtoS_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4PacketCtoS>()
{
	return FT4PacketCtoS::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketCtoS(FT4PacketCtoS::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4PacketCtoS"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCtoS
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCtoS()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketCtoS")),new UScriptStruct::TCppStructOps<FT4PacketCtoS>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketCtoS;
	struct Z_Construct_UScriptStruct_FT4PacketCtoS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PacketCS_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PacketCS;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PacketCS_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCtoS_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketCtoS_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketCtoS>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketCtoS_Statics::NewProp_PacketCS_MetaData[] = {
		{ "Category", "T4PacketCtoS" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4PacketCtoS_Statics::NewProp_PacketCS = { "PacketCS", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketCtoS, PacketCS), Z_Construct_UEnum_T4Gameplay_ET4PacketCtoS, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCtoS_Statics::NewProp_PacketCS_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCtoS_Statics::NewProp_PacketCS_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4PacketCtoS_Statics::NewProp_PacketCS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketCtoS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketCtoS_Statics::NewProp_PacketCS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketCtoS_Statics::NewProp_PacketCS_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketCtoS_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		nullptr,
		&NewStructOps,
		"T4PacketCtoS",
		sizeof(FT4PacketCtoS),
		alignof(FT4PacketCtoS),
		Z_Construct_UScriptStruct_FT4PacketCtoS_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCtoS_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketCtoS_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketCtoS_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCtoS()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketCtoS_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketCtoS"), sizeof(FT4PacketCtoS), Get_Z_Construct_UScriptStruct_FT4PacketCtoS_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketCtoS_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketCtoS_Hash() { return 75943075U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
