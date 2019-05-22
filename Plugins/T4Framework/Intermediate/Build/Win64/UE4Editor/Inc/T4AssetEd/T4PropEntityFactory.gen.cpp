// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4AssetEd/Classes/Factories/T4PropEntityFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PropEntityFactory() {}
// Cross Module References
	T4ASSETED_API UClass* Z_Construct_UClass_UT4PropEntityFactory_NoRegister();
	T4ASSETED_API UClass* Z_Construct_UClass_UT4PropEntityFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_T4AssetEd();
// End Cross Module References
	void UT4PropEntityFactory::StaticRegisterNativesUT4PropEntityFactory()
	{
	}
	UClass* Z_Construct_UClass_UT4PropEntityFactory_NoRegister()
	{
		return UT4PropEntityFactory::StaticClass();
	}
	struct Z_Construct_UClass_UT4PropEntityFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4PropEntityFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_T4AssetEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PropEntityFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/T4PropEntityFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/T4PropEntityFactory.h" },
		{ "ToolTip", "#35" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4PropEntityFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4PropEntityFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4PropEntityFactory_Statics::ClassParams = {
		&UT4PropEntityFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4PropEntityFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4PropEntityFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4PropEntityFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4PropEntityFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4PropEntityFactory, 695184965);
	template<> T4ASSETED_API UClass* StaticClass<UT4PropEntityFactory>()
	{
		return UT4PropEntityFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4PropEntityFactory(Z_Construct_UClass_UT4PropEntityFactory, &UT4PropEntityFactory::StaticClass, TEXT("/Script/T4AssetEd"), TEXT("UT4PropEntityFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4PropEntityFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
