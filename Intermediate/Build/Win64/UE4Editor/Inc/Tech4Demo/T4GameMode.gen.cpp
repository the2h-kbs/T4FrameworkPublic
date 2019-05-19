// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tech4Demo/T4GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameMode() {}
// Cross Module References
	TECH4DEMO_API UClass* Z_Construct_UClass_AT4GameMode_NoRegister();
	TECH4DEMO_API UClass* Z_Construct_UClass_AT4GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Tech4Demo();
// End Cross Module References
	void AT4GameMode::StaticRegisterNativesAT4GameMode()
	{
	}
	UClass* Z_Construct_UClass_AT4GameMode_NoRegister()
	{
		return AT4GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AT4GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tech4Demo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "T4GameMode.h" },
		{ "ModuleRelativePath", "T4GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "http://api.unrealengine.com/KOR/Gameplay/Framework/GameMode/" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4GameMode_Statics::ClassParams = {
		&AT4GameMode::StaticClass,
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
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AT4GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AT4GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4GameMode, 1125465209);
	template<> TECH4DEMO_API UClass* StaticClass<AT4GameMode>()
	{
		return AT4GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4GameMode(Z_Construct_UClass_AT4GameMode, &AT4GameMode::StaticClass, TEXT("/Script/Tech4Demo"), TEXT("AT4GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
