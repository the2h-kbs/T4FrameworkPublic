// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Classes/Player/T4PlayerCameraManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PlayerCameraManager() {}
// Cross Module References
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4PlayerCameraManager_NoRegister();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4PlayerCameraManager();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
// End Cross Module References
	void AT4PlayerCameraManager::StaticRegisterNativesAT4PlayerCameraManager()
	{
	}
	UClass* Z_Construct_UClass_AT4PlayerCameraManager_NoRegister()
	{
		return AT4PlayerCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_AT4PlayerCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4PlayerCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PlayerCameraManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/T4PlayerCameraManager.h" },
		{ "ModuleRelativePath", "Classes/Player/T4PlayerCameraManager.h" },
		{ "ToolTip", "https://docs.unrealengine.com/en-US/Gameplay/Framework/Camera" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4PlayerCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4PlayerCameraManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4PlayerCameraManager_Statics::ClassParams = {
		&AT4PlayerCameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AT4PlayerCameraManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AT4PlayerCameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4PlayerCameraManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4PlayerCameraManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4PlayerCameraManager, 132043841);
	template<> T4FRAMEWORK_API UClass* StaticClass<AT4PlayerCameraManager>()
	{
		return AT4PlayerCameraManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4PlayerCameraManager(Z_Construct_UClass_AT4PlayerCameraManager, &AT4PlayerCameraManager::StaticClass, TEXT("/Script/T4Framework"), TEXT("AT4PlayerCameraManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4PlayerCameraManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
