// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Core/Public/T4CoreTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4CoreTypes() {}
// Cross Module References
	T4CORE_API UEnum* Z_Construct_UEnum_T4Core_ET4LayerType();
	UPackage* Z_Construct_UPackage__Script_T4Core();
// End Cross Module References
	static UEnum* ET4LayerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Core_ET4LayerType, Z_Construct_UPackage__Script_T4Core(), TEXT("ET4LayerType"));
		}
		return Singleton;
	}
	template<> T4CORE_API UEnum* StaticEnum<ET4LayerType>()
	{
		return ET4LayerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4LayerType(ET4LayerType_StaticEnum, TEXT("/Script/T4Core"), TEXT("ET4LayerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Core_ET4LayerType_Hash() { return 2505904844U; }
	UEnum* Z_Construct_UEnum_T4Core_ET4LayerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4LayerType"), 0, Get_Z_Construct_UEnum_T4Core_ET4LayerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4LayerType::Server", (int64)ET4LayerType::Server },
				{ "ET4LayerType::ServerMax", (int64)ET4LayerType::ServerMax },
				{ "ET4LayerType::Client", (int64)ET4LayerType::Client },
				{ "ET4LayerType::ClientMax", (int64)ET4LayerType::ClientMax },
				{ "ET4LayerType::Preview", (int64)ET4LayerType::Preview },
				{ "ET4LayerType::PreviewMax", (int64)ET4LayerType::PreviewMax },
				{ "ET4LayerType::LevelEditor", (int64)ET4LayerType::LevelEditor },
				{ "ET4LayerType::Max", (int64)ET4LayerType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Max.ToolTip", "#17" },
				{ "ModuleRelativePath", "Public/T4CoreTypes.h" },
				{ "PreviewMax.ToolTip", "#30" },
				{ "ServerMax.ToolTip", "#15" },
				{ "ToolTip", "http://api.unrealengine.com/KOR/Programming/UnrealArchitecture/Reference/Properties/" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Core,
				nullptr,
				"ET4LayerType",
				"ET4LayerType",
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
