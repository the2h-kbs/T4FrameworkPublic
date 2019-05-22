// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4AssetEd/Classes/Factories/T4WorldEntityFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4WorldEntityFactory() {}
// Cross Module References
	T4ASSETED_API UClass* Z_Construct_UClass_UT4WorldEntityFactory_NoRegister();
	T4ASSETED_API UClass* Z_Construct_UClass_UT4WorldEntityFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_T4AssetEd();
// End Cross Module References
	void UT4WorldEntityFactory::StaticRegisterNativesUT4WorldEntityFactory()
	{
	}
	UClass* Z_Construct_UClass_UT4WorldEntityFactory_NoRegister()
	{
		return UT4WorldEntityFactory::StaticClass();
	}
	struct Z_Construct_UClass_UT4WorldEntityFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4WorldEntityFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_T4AssetEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WorldEntityFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/T4WorldEntityFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/T4WorldEntityFactory.h" },
		{ "ToolTip", "#35" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4WorldEntityFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4WorldEntityFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4WorldEntityFactory_Statics::ClassParams = {
		&UT4WorldEntityFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4WorldEntityFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4WorldEntityFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4WorldEntityFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4WorldEntityFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4WorldEntityFactory, 148107627);
	template<> T4ASSETED_API UClass* StaticClass<UT4WorldEntityFactory>()
	{
		return UT4WorldEntityFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4WorldEntityFactory(Z_Construct_UClass_UT4WorldEntityFactory, &UT4WorldEntityFactory::StaticClass, TEXT("/Script/T4AssetEd"), TEXT("UT4WorldEntityFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4WorldEntityFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
