// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Classes/Player/T4PlayerDefaultPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PlayerDefaultPawn() {}
// Cross Module References
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4PlayerDefaultPawn_NoRegister();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4PlayerDefaultPawn();
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
// End Cross Module References
	void AT4PlayerDefaultPawn::StaticRegisterNativesAT4PlayerDefaultPawn()
	{
	}
	UClass* Z_Construct_UClass_AT4PlayerDefaultPawn_NoRegister()
	{
		return AT4PlayerDefaultPawn::StaticClass();
	}
	struct Z_Construct_UClass_AT4PlayerDefaultPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4PlayerDefaultPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADefaultPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PlayerDefaultPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/T4PlayerDefaultPawn.h" },
		{ "ModuleRelativePath", "Classes/Player/T4PlayerDefaultPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4PlayerDefaultPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4PlayerDefaultPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4PlayerDefaultPawn_Statics::ClassParams = {
		&AT4PlayerDefaultPawn::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AT4PlayerDefaultPawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AT4PlayerDefaultPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4PlayerDefaultPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4PlayerDefaultPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4PlayerDefaultPawn, 1630434049);
	template<> T4FRAMEWORK_API UClass* StaticClass<AT4PlayerDefaultPawn>()
	{
		return AT4PlayerDefaultPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4PlayerDefaultPawn(Z_Construct_UClass_AT4PlayerDefaultPawn, &AT4PlayerDefaultPawn::StaticClass, TEXT("/Script/T4Framework"), TEXT("AT4PlayerDefaultPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4PlayerDefaultPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
