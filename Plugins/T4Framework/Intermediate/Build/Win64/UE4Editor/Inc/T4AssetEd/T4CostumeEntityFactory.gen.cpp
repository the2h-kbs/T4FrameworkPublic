// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4AssetEd/Classes/Factories/T4CostumeEntityFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4CostumeEntityFactory() {}
// Cross Module References
	T4ASSETED_API UClass* Z_Construct_UClass_UT4CostumeEntityFactory_NoRegister();
	T4ASSETED_API UClass* Z_Construct_UClass_UT4CostumeEntityFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_T4AssetEd();
// End Cross Module References
	void UT4CostumeEntityFactory::StaticRegisterNativesUT4CostumeEntityFactory()
	{
	}
	UClass* Z_Construct_UClass_UT4CostumeEntityFactory_NoRegister()
	{
		return UT4CostumeEntityFactory::StaticClass();
	}
	struct Z_Construct_UClass_UT4CostumeEntityFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4CostumeEntityFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_T4AssetEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4CostumeEntityFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/T4CostumeEntityFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/T4CostumeEntityFactory.h" },
		{ "ToolTip", "#35" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4CostumeEntityFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4CostumeEntityFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4CostumeEntityFactory_Statics::ClassParams = {
		&UT4CostumeEntityFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4CostumeEntityFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4CostumeEntityFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4CostumeEntityFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4CostumeEntityFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4CostumeEntityFactory, 71276864);
	template<> T4ASSETED_API UClass* StaticClass<UT4CostumeEntityFactory>()
	{
		return UT4CostumeEntityFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4CostumeEntityFactory(Z_Construct_UClass_UT4CostumeEntityFactory, &UT4CostumeEntityFactory::StaticClass, TEXT("/Script/T4AssetEd"), TEXT("UT4CostumeEntityFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4CostumeEntityFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
