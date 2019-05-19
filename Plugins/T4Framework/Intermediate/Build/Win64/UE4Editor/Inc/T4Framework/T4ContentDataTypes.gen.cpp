// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Classes/Content/T4ContentDataTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ContentDataTypes() {}
// Cross Module References
	T4FRAMEWORK_API UEnum* Z_Construct_UEnum_T4Framework_ET4ContentTableType();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
// End Cross Module References
	static UEnum* ET4ContentTableType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Framework_ET4ContentTableType, Z_Construct_UPackage__Script_T4Framework(), TEXT("ET4ContentTableType"));
		}
		return Singleton;
	}
	template<> T4FRAMEWORK_API UEnum* StaticEnum<ET4ContentTableType>()
	{
		return ET4ContentTableType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4ContentTableType(ET4ContentTableType_StaticEnum, TEXT("/Script/T4Framework"), TEXT("ET4ContentTableType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Framework_ET4ContentTableType_Hash() { return 1351108305U; }
	UEnum* Z_Construct_UEnum_T4Framework_ET4ContentTableType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4ContentTableType"), 0, Get_Z_Construct_UEnum_T4Framework_ET4ContentTableType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4ContentTableType::World", (int64)ET4ContentTableType::World },
				{ "ET4ContentTableType::Player", (int64)ET4ContentTableType::Player },
				{ "ET4ContentTableType::NPC", (int64)ET4ContentTableType::NPC },
				{ "ET4ContentTableType::FO", (int64)ET4ContentTableType::FO },
				{ "ET4ContentTableType::Item", (int64)ET4ContentTableType::Item },
				{ "ET4ContentTableType::Skill", (int64)ET4ContentTableType::Skill },
				{ "ET4ContentTableType::Effect", (int64)ET4ContentTableType::Effect },
				{ "ET4ContentTableType::Max", (int64)ET4ContentTableType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Content/T4ContentDataTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Framework,
				nullptr,
				"ET4ContentTableType",
				"ET4ContentTableType",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
