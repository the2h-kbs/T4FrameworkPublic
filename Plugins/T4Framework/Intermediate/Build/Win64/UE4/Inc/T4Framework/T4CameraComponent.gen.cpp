// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Classes/Player/Component/T4CameraComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4CameraComponent() {}
// Cross Module References
	T4FRAMEWORK_API UClass* Z_Construct_UClass_UT4CameraComponent_NoRegister();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_UT4CameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
// End Cross Module References
	void UT4CameraComponent::StaticRegisterNativesUT4CameraComponent()
	{
	}
	UClass* Z_Construct_UClass_UT4CameraComponent_NoRegister()
	{
		return UT4CameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UT4CameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4CameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4CameraComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "Player/Component/T4CameraComponent.h" },
		{ "ModuleRelativePath", "Classes/Player/Component/T4CameraComponent.h" },
		{ "ToolTip", "http://api.unrealengine.com/KOR/Gameplay/Framework/Camera/index.html" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4CameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4CameraComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4CameraComponent_Statics::ClassParams = {
		&UT4CameraComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UT4CameraComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4CameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4CameraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4CameraComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4CameraComponent, 2812582550);
	template<> T4FRAMEWORK_API UClass* StaticClass<UT4CameraComponent>()
	{
		return UT4CameraComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4CameraComponent(Z_Construct_UClass_UT4CameraComponent, &UT4CameraComponent::StaticClass, TEXT("/Script/T4Framework"), TEXT("UT4CameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4CameraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
