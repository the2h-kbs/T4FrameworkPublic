// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4AssetEd/Classes/Factories/T4WeaponEntityFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4WeaponEntityFactory() {}
// Cross Module References
	T4ASSETED_API UClass* Z_Construct_UClass_UT4WeaponEntityFactory_NoRegister();
	T4ASSETED_API UClass* Z_Construct_UClass_UT4WeaponEntityFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_T4AssetEd();
// End Cross Module References
	void UT4WeaponEntityFactory::StaticRegisterNativesUT4WeaponEntityFactory()
	{
	}
	UClass* Z_Construct_UClass_UT4WeaponEntityFactory_NoRegister()
	{
		return UT4WeaponEntityFactory::StaticClass();
	}
	struct Z_Construct_UClass_UT4WeaponEntityFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4WeaponEntityFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_T4AssetEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WeaponEntityFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/T4WeaponEntityFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/T4WeaponEntityFactory.h" },
		{ "ToolTip", "#35" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4WeaponEntityFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4WeaponEntityFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4WeaponEntityFactory_Statics::ClassParams = {
		&UT4WeaponEntityFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4WeaponEntityFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4WeaponEntityFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4WeaponEntityFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4WeaponEntityFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4WeaponEntityFactory, 1432682494);
	template<> T4ASSETED_API UClass* StaticClass<UT4WeaponEntityFactory>()
	{
		return UT4WeaponEntityFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4WeaponEntityFactory(Z_Construct_UClass_UT4WeaponEntityFactory, &UT4WeaponEntityFactory::StaticClass, TEXT("/Script/T4AssetEd"), TEXT("UT4WeaponEntityFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4WeaponEntityFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
