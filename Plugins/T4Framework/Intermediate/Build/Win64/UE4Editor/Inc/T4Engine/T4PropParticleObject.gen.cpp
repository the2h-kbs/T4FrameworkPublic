// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/Object/Subobject/T4PropParticleObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PropParticleObject() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_AT4PropParticleObject_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_AT4PropParticleObject();
	T4ENGINE_API UClass* Z_Construct_UClass_AT4GameObject();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UFunction* Z_Construct_UFunction_AT4PropParticleObject_OnParticleSystemFinished();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4ParticleSystemComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4CapsuleComponent_NoRegister();
// End Cross Module References
	void AT4PropParticleObject::StaticRegisterNativesAT4PropParticleObject()
	{
		UClass* Class = AT4PropParticleObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnParticleSystemFinished", &AT4PropParticleObject::execOnParticleSystemFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AT4PropParticleObject_OnParticleSystemFinished_Statics
	{
		struct T4PropParticleObject_eventOnParticleSystemFinished_Parms
		{
			UParticleSystemComponent* FinishedComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinishedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FinishedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4PropParticleObject_OnParticleSystemFinished_Statics::NewProp_FinishedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4PropParticleObject_OnParticleSystemFinished_Statics::NewProp_FinishedComponent = { "FinishedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4PropParticleObject_eventOnParticleSystemFinished_Parms, FinishedComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AT4PropParticleObject_OnParticleSystemFinished_Statics::NewProp_FinishedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AT4PropParticleObject_OnParticleSystemFinished_Statics::NewProp_FinishedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AT4PropParticleObject_OnParticleSystemFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4PropParticleObject_OnParticleSystemFinished_Statics::NewProp_FinishedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4PropParticleObject_OnParticleSystemFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Object/Subobject/T4PropParticleObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4PropParticleObject_OnParticleSystemFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4PropParticleObject, nullptr, "OnParticleSystemFinished", sizeof(T4PropParticleObject_eventOnParticleSystemFinished_Parms), Z_Construct_UFunction_AT4PropParticleObject_OnParticleSystemFinished_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AT4PropParticleObject_OnParticleSystemFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4PropParticleObject_OnParticleSystemFinished_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AT4PropParticleObject_OnParticleSystemFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4PropParticleObject_OnParticleSystemFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AT4PropParticleObject_OnParticleSystemFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AT4PropParticleObject_NoRegister()
	{
		return AT4PropParticleObject::StaticClass();
	}
	struct Z_Construct_UClass_AT4PropParticleObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnSystemFinish_MetaData[];
#endif
		static void NewProp_bDestroyOnSystemFinish_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnSystemFinish;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPostUpdateTickGroup_MetaData[];
#endif
		static void NewProp_bPostUpdateTickGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPostUpdateTickGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystemComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4PropParticleObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AT4GameObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AT4PropParticleObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AT4PropParticleObject_OnParticleSystemFinished, "OnParticleSystemFinished" }, // 407503675
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PropParticleObject_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Object/Subobject/T4PropParticleObject.h" },
		{ "ModuleRelativePath", "Private/Object/Subobject/T4PropParticleObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PropParticleObject_Statics::NewProp_bDestroyOnSystemFinish_MetaData[] = {
		{ "ModuleRelativePath", "Private/Object/Subobject/T4PropParticleObject.h" },
	};
#endif
	void Z_Construct_UClass_AT4PropParticleObject_Statics::NewProp_bDestroyOnSystemFinish_SetBit(void* Obj)
	{
		((AT4PropParticleObject*)Obj)->bDestroyOnSystemFinish = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AT4PropParticleObject_Statics::NewProp_bDestroyOnSystemFinish = { "bDestroyOnSystemFinish", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AT4PropParticleObject), &Z_Construct_UClass_AT4PropParticleObject_Statics::NewProp_bDestroyOnSystemFinish_SetBit, METADATA_PARAMS(Z_Construct_UClass_AT4PropParticleObject_Statics::NewProp_bDestroyOnSystemFinish_MetaData, ARRAY_COUNT(Z_Construct_UClass_AT4PropParticleObject_Statics::NewProp_bDestroyOnSystemFinish_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PropParticleObject_Statics::NewProp_bPostUpdateTickGroup_MetaData[] = {
		{ "Category", "Prop" },
		{ "ModuleRelativePath", "Private/Object/Subobject/T4PropParticleObject.h" },
	};
#endif
	void Z_Construct_UClass_AT4PropParticleObject_Statics::NewProp_bPostUpdateTickGroup_SetBit(void* Obj)
	{
		((AT4PropParticleObject*)Obj)->bPostUpdateTickGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AT4PropParticleObject_Statics::NewProp_bPostUpdateTickGroup = { "bPostUpdateTickGroup", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AT4PropParticleObject), &Z_Construct_UClass_AT4PropParticleObject_Statics::NewProp_bPostUpdateTickGroup_SetBit, METADATA_PARAMS(Z_Construct_UClass_AT4PropParticleObject_Statics::NewProp_bPostUpdateTickGroup_MetaData, ARRAY_COUNT(Z_Construct_UClass_AT4PropParticleObject_Statics::NewProp_bPostUpdateTickGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PropParticleObject_Statics::NewProp_ParticleSystemComponent_MetaData[] = {
		{ "Category", "Prop" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Object/Subobject/T4PropParticleObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4PropParticleObject_Statics::NewProp_ParticleSystemComponent = { "ParticleSystemComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4PropParticleObject, ParticleSystemComponent), Z_Construct_UClass_UT4ParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4PropParticleObject_Statics::NewProp_ParticleSystemComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AT4PropParticleObject_Statics::NewProp_ParticleSystemComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PropParticleObject_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "Category", "Prop" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Object/Subobject/T4PropParticleObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4PropParticleObject_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4PropParticleObject, CapsuleComponent), Z_Construct_UClass_UT4CapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4PropParticleObject_Statics::NewProp_CapsuleComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AT4PropParticleObject_Statics::NewProp_CapsuleComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4PropParticleObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4PropParticleObject_Statics::NewProp_bDestroyOnSystemFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4PropParticleObject_Statics::NewProp_bPostUpdateTickGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4PropParticleObject_Statics::NewProp_ParticleSystemComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4PropParticleObject_Statics::NewProp_CapsuleComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4PropParticleObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4PropParticleObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4PropParticleObject_Statics::ClassParams = {
		&AT4PropParticleObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AT4PropParticleObject_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AT4PropParticleObject_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AT4PropParticleObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AT4PropParticleObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4PropParticleObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4PropParticleObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4PropParticleObject, 2877800394);
	template<> T4ENGINE_API UClass* StaticClass<AT4PropParticleObject>()
	{
		return AT4PropParticleObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4PropParticleObject(Z_Construct_UClass_AT4PropParticleObject, &AT4PropParticleObject::StaticClass, TEXT("/Script/T4Engine"), TEXT("AT4PropParticleObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4PropParticleObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
