// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/Action/T4ActionParameters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionParameters() {}
// Cross Module References
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4TargetParamBits();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4TimeParamBits();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4DefaultParamBits();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionParameters();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionTargetParameters();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionTimeParameters();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionDefaultParameters();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectID();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionKey();
// End Cross Module References
	static UEnum* ET4TargetParamBits_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4TargetParamBits, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4TargetParamBits"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4TargetParamBits>()
	{
		return ET4TargetParamBits_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4TargetParamBits(ET4TargetParamBits_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4TargetParamBits"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4TargetParamBits_Hash() { return 2130499441U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4TargetParamBits()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4TargetParamBits"), 0, Get_Z_Construct_UEnum_T4Engine_ET4TargetParamBits_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4TargetParamBits::ObjectIDBit", (int64)ET4TargetParamBits::ObjectIDBit },
				{ "ET4TargetParamBits::LocationBit", (int64)ET4TargetParamBits::LocationBit },
				{ "ET4TargetParamBits::DirectionBit", (int64)ET4TargetParamBits::DirectionBit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "ModuleRelativePath", "Classes/Action/T4ActionParameters.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4TargetParamBits",
				"ET4TargetParamBits",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ET4TimeParamBits_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4TimeParamBits, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4TimeParamBits"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4TimeParamBits>()
	{
		return ET4TimeParamBits_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4TimeParamBits(ET4TimeParamBits_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4TimeParamBits"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4TimeParamBits_Hash() { return 2857507203U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4TimeParamBits()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4TimeParamBits"), 0, Get_Z_Construct_UEnum_T4Engine_ET4TimeParamBits_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4TimeParamBits::DurationBit", (int64)ET4TimeParamBits::DurationBit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "ModuleRelativePath", "Classes/Action/T4ActionParameters.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4TimeParamBits",
				"ET4TimeParamBits",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ET4DefaultParamBits_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4DefaultParamBits, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4DefaultParamBits"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4DefaultParamBits>()
	{
		return ET4DefaultParamBits_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4DefaultParamBits(ET4DefaultParamBits_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4DefaultParamBits"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4DefaultParamBits_Hash() { return 627708584U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4DefaultParamBits()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4DefaultParamBits"), 0, Get_Z_Construct_UEnum_T4Engine_ET4DefaultParamBits_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4DefaultParamBits::ActionKeyBit", (int64)ET4DefaultParamBits::ActionKeyBit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "ModuleRelativePath", "Classes/Action/T4ActionParameters.h" },
				{ "ToolTip", "http://api.unrealengine.com/KOR/Programming/UnrealArchitecture/Reference/Properties/\n // #28" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4DefaultParamBits",
				"ET4DefaultParamBits",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FT4ActionParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ActionParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ActionParameters, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ActionParameters"), sizeof(FT4ActionParameters), Get_Z_Construct_UScriptStruct_FT4ActionParameters_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ActionParameters>()
{
	return FT4ActionParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ActionParameters(FT4ActionParameters::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ActionParameters"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionParameters
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ActionParameters")),new UScriptStruct::TCppStructOps<FT4ActionParameters>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ActionParameters;
	struct Z_Construct_UScriptStruct_FT4ActionParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4ActionParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ActionParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_TargetParams_MetaData[] = {
		{ "Category", "T4ActionParameters" },
		{ "ModuleRelativePath", "Classes/Action/T4ActionParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_TargetParams = { "TargetParams", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionParameters, TargetParams), Z_Construct_UScriptStruct_FT4ActionTargetParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_TargetParams_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_TargetParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_TimeParams_MetaData[] = {
		{ "Category", "T4ActionParameters" },
		{ "ModuleRelativePath", "Classes/Action/T4ActionParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_TimeParams = { "TimeParams", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionParameters, TimeParams), Z_Construct_UScriptStruct_FT4ActionTimeParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_TimeParams_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_TimeParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_DefaultParams_MetaData[] = {
		{ "Category", "T4ActionParameters" },
		{ "ModuleRelativePath", "Classes/Action/T4ActionParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_DefaultParams = { "DefaultParams", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionParameters, DefaultParams), Z_Construct_UScriptStruct_FT4ActionDefaultParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_DefaultParams_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_DefaultParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ActionParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_TargetParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_TimeParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionParameters_Statics::NewProp_DefaultParams,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ActionParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4ActionParameters",
		sizeof(FT4ActionParameters),
		alignof(FT4ActionParameters),
		Z_Construct_UScriptStruct_FT4ActionParameters_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionParameters_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ActionParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ActionParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ActionParameters"), sizeof(FT4ActionParameters), Get_Z_Construct_UScriptStruct_FT4ActionParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ActionParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ActionParameters_Hash() { return 1468203420U; }
class UScriptStruct* FT4ActionTargetParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ActionTargetParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ActionTargetParameters, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ActionTargetParameters"), sizeof(FT4ActionTargetParameters), Get_Z_Construct_UScriptStruct_FT4ActionTargetParameters_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ActionTargetParameters>()
{
	return FT4ActionTargetParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ActionTargetParameters(FT4ActionTargetParameters::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ActionTargetParameters"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionTargetParameters
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionTargetParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ActionTargetParameters")),new UScriptStruct::TCppStructOps<FT4ActionTargetParameters>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ActionTargetParameters;
	struct Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetObjectID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetBits_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SetBits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4ActionParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ActionTargetParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetDirection_MetaData[] = {
		{ "Category", "T4ActionTargetParameters" },
		{ "ModuleRelativePath", "Classes/Action/T4ActionParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetDirection = { "TargetDirection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionTargetParameters, TargetDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetDirection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "T4ActionTargetParameters" },
		{ "ModuleRelativePath", "Classes/Action/T4ActionParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionTargetParameters, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetObjectID_MetaData[] = {
		{ "Category", "T4ActionTargetParameters" },
		{ "ModuleRelativePath", "Classes/Action/T4ActionParameters.h" },
		{ "ToolTip", "ET4TargetParamBits" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetObjectID = { "TargetObjectID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionTargetParameters, TargetObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetObjectID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_SetBits_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ET4TargetParamBits" },
		{ "Category", "T4ActionTargetParameters" },
		{ "ModuleRelativePath", "Classes/Action/T4ActionParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_SetBits = { "SetBits", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionTargetParameters, SetBits), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_SetBits_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_SetBits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_TargetObjectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::NewProp_SetBits,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4ActionTargetParameters",
		sizeof(FT4ActionTargetParameters),
		alignof(FT4ActionTargetParameters),
		Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ActionTargetParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ActionTargetParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ActionTargetParameters"), sizeof(FT4ActionTargetParameters), Get_Z_Construct_UScriptStruct_FT4ActionTargetParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ActionTargetParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ActionTargetParameters_Hash() { return 1821470417U; }
class UScriptStruct* FT4ActionTimeParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ActionTimeParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ActionTimeParameters, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ActionTimeParameters"), sizeof(FT4ActionTimeParameters), Get_Z_Construct_UScriptStruct_FT4ActionTimeParameters_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ActionTimeParameters>()
{
	return FT4ActionTimeParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ActionTimeParameters(FT4ActionTimeParameters::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ActionTimeParameters"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionTimeParameters
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionTimeParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ActionTimeParameters")),new UScriptStruct::TCppStructOps<FT4ActionTimeParameters>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ActionTimeParameters;
	struct Z_Construct_UScriptStruct_FT4ActionTimeParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurectionSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurectionSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetBits_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SetBits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTimeParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4ActionParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ActionTimeParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ActionTimeParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTimeParameters_Statics::NewProp_DurectionSec_MetaData[] = {
		{ "Category", "T4ActionTimeParameters" },
		{ "ModuleRelativePath", "Classes/Action/T4ActionParameters.h" },
		{ "ToolTip", "ET4TimeParamBits" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4ActionTimeParameters_Statics::NewProp_DurectionSec = { "DurectionSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionTimeParameters, DurectionSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTimeParameters_Statics::NewProp_DurectionSec_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTimeParameters_Statics::NewProp_DurectionSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionTimeParameters_Statics::NewProp_SetBits_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ET4TimeParamBits" },
		{ "Category", "T4ActionTimeParameters" },
		{ "ModuleRelativePath", "Classes/Action/T4ActionParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4ActionTimeParameters_Statics::NewProp_SetBits = { "SetBits", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionTimeParameters, SetBits), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTimeParameters_Statics::NewProp_SetBits_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTimeParameters_Statics::NewProp_SetBits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ActionTimeParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionTimeParameters_Statics::NewProp_DurectionSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionTimeParameters_Statics::NewProp_SetBits,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ActionTimeParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4ActionTimeParameters",
		sizeof(FT4ActionTimeParameters),
		alignof(FT4ActionTimeParameters),
		Z_Construct_UScriptStruct_FT4ActionTimeParameters_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTimeParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionTimeParameters_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionTimeParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ActionTimeParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ActionTimeParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ActionTimeParameters"), sizeof(FT4ActionTimeParameters), Get_Z_Construct_UScriptStruct_FT4ActionTimeParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ActionTimeParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ActionTimeParameters_Hash() { return 2144262833U; }
class UScriptStruct* FT4ActionDefaultParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ActionDefaultParameters, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ActionDefaultParameters"), sizeof(FT4ActionDefaultParameters), Get_Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ActionDefaultParameters>()
{
	return FT4ActionDefaultParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ActionDefaultParameters(FT4ActionDefaultParameters::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ActionDefaultParameters"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionDefaultParameters
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionDefaultParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ActionDefaultParameters")),new UScriptStruct::TCppStructOps<FT4ActionDefaultParameters>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ActionDefaultParameters;
	struct Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetBits_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SetBits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4ActionParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ActionDefaultParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewProp_ActionKey_MetaData[] = {
		{ "Category", "T4ActionDefaultParameters" },
		{ "ModuleRelativePath", "Classes/Action/T4ActionParameters.h" },
		{ "ToolTip", "ET4DefaultParamBits" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewProp_ActionKey = { "ActionKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionDefaultParameters, ActionKey), Z_Construct_UScriptStruct_FT4ActionKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewProp_ActionKey_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewProp_ActionKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewProp_SetBits_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ET4DefaultParamBits" },
		{ "Category", "T4ActionDefaultParameters" },
		{ "ModuleRelativePath", "Classes/Action/T4ActionParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewProp_SetBits = { "SetBits", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionDefaultParameters, SetBits), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewProp_SetBits_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewProp_SetBits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewProp_ActionKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::NewProp_SetBits,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4ActionDefaultParameters",
		sizeof(FT4ActionDefaultParameters),
		alignof(FT4ActionDefaultParameters),
		Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ActionDefaultParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ActionDefaultParameters"), sizeof(FT4ActionDefaultParameters), Get_Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ActionDefaultParameters_Hash() { return 3501704649U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
