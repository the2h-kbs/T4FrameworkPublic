// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Private/Framework/Client/T4ClientDevHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ClientDevHUD() {}
// Cross Module References
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4ClientDevHUD_NoRegister();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4ClientDevHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
// End Cross Module References
	void AT4ClientDevHUD::StaticRegisterNativesAT4ClientDevHUD()
	{
	}
	UClass* Z_Construct_UClass_AT4ClientDevHUD_NoRegister()
	{
		return AT4ClientDevHUD::StaticClass();
	}
	struct Z_Construct_UClass_AT4ClientDevHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4ClientDevHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4ClientDevHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Framework/Client/T4ClientDevHUD.h" },
		{ "ModuleRelativePath", "Private/Framework/Client/T4ClientDevHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4ClientDevHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4ClientDevHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4ClientDevHUD_Statics::ClassParams = {
		&AT4ClientDevHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AT4ClientDevHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AT4ClientDevHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4ClientDevHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4ClientDevHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4ClientDevHUD, 4291009488);
	template<> T4FRAMEWORK_API UClass* StaticClass<AT4ClientDevHUD>()
	{
		return AT4ClientDevHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4ClientDevHUD(Z_Construct_UClass_AT4ClientDevHUD, &AT4ClientDevHUD::StaticClass, TEXT("/Script/T4Framework"), TEXT("AT4ClientDevHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4ClientDevHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
