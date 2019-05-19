// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Public/T4Framework.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4Framework() {}
// Cross Module References
	T4FRAMEWORK_API UEnum* Z_Construct_UEnum_T4Framework_ET4FrameworkType();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
// End Cross Module References
	static UEnum* ET4FrameworkType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Framework_ET4FrameworkType, Z_Construct_UPackage__Script_T4Framework(), TEXT("ET4FrameworkType"));
		}
		return Singleton;
	}
	template<> T4FRAMEWORK_API UEnum* StaticEnum<ET4FrameworkType>()
	{
		return ET4FrameworkType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4FrameworkType(ET4FrameworkType_StaticEnum, TEXT("/Script/T4Framework"), TEXT("ET4FrameworkType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Framework_ET4FrameworkType_Hash() { return 1739896780U; }
	UEnum* Z_Construct_UEnum_T4Framework_ET4FrameworkType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4FrameworkType"), 0, Get_Z_Construct_UEnum_T4Framework_ET4FrameworkType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4FrameworkType::Client", (int64)ET4FrameworkType::Client },
				{ "ET4FrameworkType::Server", (int64)ET4FrameworkType::Server },
				{ "ET4FrameworkType::None", (int64)ET4FrameworkType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/T4Framework.h" },
				{ "None.Hidden", "" },
				{ "ToolTip", "#30" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Framework,
				nullptr,
				"ET4FrameworkType",
				"ET4FrameworkType",
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
