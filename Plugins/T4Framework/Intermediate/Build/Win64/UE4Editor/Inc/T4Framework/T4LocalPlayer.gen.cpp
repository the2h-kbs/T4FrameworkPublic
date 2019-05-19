// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Classes/Player/T4LocalPlayer.h"
#include "Engine/Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4LocalPlayer() {}
// Cross Module References
	T4FRAMEWORK_API UClass* Z_Construct_UClass_UT4LocalPlayer_NoRegister();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_UT4LocalPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
// End Cross Module References
	void UT4LocalPlayer::StaticRegisterNativesUT4LocalPlayer()
	{
	}
	UClass* Z_Construct_UClass_UT4LocalPlayer_NoRegister()
	{
		return UT4LocalPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UT4LocalPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4LocalPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4LocalPlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/T4LocalPlayer.h" },
		{ "ModuleRelativePath", "Classes/Player/T4LocalPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4LocalPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4LocalPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4LocalPlayer_Statics::ClassParams = {
		&UT4LocalPlayer::StaticClass,
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
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UT4LocalPlayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4LocalPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4LocalPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4LocalPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4LocalPlayer, 3384044060);
	template<> T4FRAMEWORK_API UClass* StaticClass<UT4LocalPlayer>()
	{
		return UT4LocalPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4LocalPlayer(Z_Construct_UClass_UT4LocalPlayer, &UT4LocalPlayer::StaticClass, TEXT("/Script/T4Framework"), TEXT("UT4LocalPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4LocalPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
