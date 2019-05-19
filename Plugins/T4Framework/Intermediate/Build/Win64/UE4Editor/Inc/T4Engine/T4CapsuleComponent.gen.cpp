// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/Object/Component/T4CapsuleComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4CapsuleComponent() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4CapsuleComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4CapsuleComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
// End Cross Module References
	void UT4CapsuleComponent::StaticRegisterNativesUT4CapsuleComponent()
	{
	}
	UClass* Z_Construct_UClass_UT4CapsuleComponent_NoRegister()
	{
		return UT4CapsuleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UT4CapsuleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4CapsuleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCapsuleComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4CapsuleComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
		{ "IncludePath", "Object/Component/T4CapsuleComponent.h" },
		{ "ModuleRelativePath", "Private/Object/Component/T4CapsuleComponent.h" },
		{ "ToolTip", "http://api.unrealengine.com/KOR/Gameplay/Framework/Pawn/Character/index.html" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4CapsuleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4CapsuleComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4CapsuleComponent_Statics::ClassParams = {
		&UT4CapsuleComponent::StaticClass,
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
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UT4CapsuleComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4CapsuleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4CapsuleComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4CapsuleComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4CapsuleComponent, 3222043887);
	template<> T4ENGINE_API UClass* StaticClass<UT4CapsuleComponent>()
	{
		return UT4CapsuleComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4CapsuleComponent(Z_Construct_UClass_UT4CapsuleComponent, &UT4CapsuleComponent::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4CapsuleComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4CapsuleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
