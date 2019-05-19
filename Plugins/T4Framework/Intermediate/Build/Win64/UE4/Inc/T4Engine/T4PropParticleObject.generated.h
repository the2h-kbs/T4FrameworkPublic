// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UParticleSystemComponent;
#ifdef T4ENGINE_T4PropParticleObject_generated_h
#error "T4PropParticleObject.generated.h already included, missing '#pragma once' in T4PropParticleObject.h"
#endif
#define T4ENGINE_T4PropParticleObject_generated_h

#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Subobject_T4PropParticleObject_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnParticleSystemFinished) \
	{ \
		P_GET_OBJECT(UParticleSystemComponent,Z_Param_FinishedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnParticleSystemFinished(Z_Param_FinishedComponent); \
		P_NATIVE_END; \
	}


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Subobject_T4PropParticleObject_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnParticleSystemFinished) \
	{ \
		P_GET_OBJECT(UParticleSystemComponent,Z_Param_FinishedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnParticleSystemFinished(Z_Param_FinishedComponent); \
		P_NATIVE_END; \
	}


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Subobject_T4PropParticleObject_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAT4PropParticleObject(); \
	friend struct Z_Construct_UClass_AT4PropParticleObject_Statics; \
public: \
	DECLARE_CLASS(AT4PropParticleObject, AT4GameObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/T4Engine"), NO_API) \
	DECLARE_SERIALIZER(AT4PropParticleObject)


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Subobject_T4PropParticleObject_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAT4PropParticleObject(); \
	friend struct Z_Construct_UClass_AT4PropParticleObject_Statics; \
public: \
	DECLARE_CLASS(AT4PropParticleObject, AT4GameObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/T4Engine"), NO_API) \
	DECLARE_SERIALIZER(AT4PropParticleObject)


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Subobject_T4PropParticleObject_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AT4PropParticleObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AT4PropParticleObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT4PropParticleObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT4PropParticleObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT4PropParticleObject(AT4PropParticleObject&&); \
	NO_API AT4PropParticleObject(const AT4PropParticleObject&); \
public:


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Subobject_T4PropParticleObject_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AT4PropParticleObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT4PropParticleObject(AT4PropParticleObject&&); \
	NO_API AT4PropParticleObject(const AT4PropParticleObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT4PropParticleObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT4PropParticleObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AT4PropParticleObject)


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Subobject_T4PropParticleObject_h_23_PRIVATE_PROPERTY_OFFSET
#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Subobject_T4PropParticleObject_h_20_PROLOG
#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Subobject_T4PropParticleObject_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Subobject_T4PropParticleObject_h_23_PRIVATE_PROPERTY_OFFSET \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Subobject_T4PropParticleObject_h_23_RPC_WRAPPERS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Subobject_T4PropParticleObject_h_23_INCLASS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Subobject_T4PropParticleObject_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Subobject_T4PropParticleObject_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Subobject_T4PropParticleObject_h_23_PRIVATE_PROPERTY_OFFSET \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Subobject_T4PropParticleObject_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Subobject_T4PropParticleObject_h_23_INCLASS_NO_PURE_DECLS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Subobject_T4PropParticleObject_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class T4PropParticleObject."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> T4ENGINE_API UClass* StaticClass<class AT4PropParticleObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Subobject_T4PropParticleObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
