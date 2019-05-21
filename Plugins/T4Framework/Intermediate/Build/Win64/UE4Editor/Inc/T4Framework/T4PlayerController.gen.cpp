// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Classes/Player/T4PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PlayerController() {}
// Cross Module References
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4PlayerController_NoRegister();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
// End Cross Module References
	void AT4PlayerController::StaticRegisterNativesAT4PlayerController()
	{
	}
	UClass* Z_Construct_UClass_AT4PlayerController_NoRegister()
	{
		return AT4PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AT4PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetGameplayComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NetGameplayComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/T4PlayerController.h" },
		{ "ModuleRelativePath", "Classes/Player/T4PlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PlayerController_Statics::NewProp_NetGameplayComponent_MetaData[] = {
		{ "Category", "Network" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Player/T4PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4PlayerController_Statics::NewProp_NetGameplayComponent = { "NetGameplayComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4PlayerController, NetGameplayComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4PlayerController_Statics::NewProp_NetGameplayComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AT4PlayerController_Statics::NewProp_NetGameplayComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4PlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4PlayerController_Statics::NewProp_NetGameplayComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4PlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4PlayerController_Statics::ClassParams = {
		&AT4PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AT4PlayerController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AT4PlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4PlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AT4PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4PlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4PlayerController, 3738258232);
	template<> T4FRAMEWORK_API UClass* StaticClass<AT4PlayerController>()
	{
		return AT4PlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4PlayerController(Z_Construct_UClass_AT4PlayerController, &AT4PlayerController::StaticClass, TEXT("/Script/T4Framework"), TEXT("AT4PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
