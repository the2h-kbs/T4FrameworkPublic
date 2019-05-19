// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TECH4DEMO_T4GameInstance_generated_h
#error "T4GameInstance.generated.h already included, missing '#pragma once' in T4GameInstance.h"
#endif
#define TECH4DEMO_T4GameInstance_generated_h

#define T4FrameworkDeploy_Source_Tech4Demo_T4GameInstance_h_18_RPC_WRAPPERS
#define T4FrameworkDeploy_Source_Tech4Demo_T4GameInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define T4FrameworkDeploy_Source_Tech4Demo_T4GameInstance_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUT4GameInstance(); \
	friend struct Z_Construct_UClass_UT4GameInstance_Statics; \
public: \
	DECLARE_CLASS(UT4GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Tech4Demo"), NO_API) \
	DECLARE_SERIALIZER(UT4GameInstance)


#define T4FrameworkDeploy_Source_Tech4Demo_T4GameInstance_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUT4GameInstance(); \
	friend struct Z_Construct_UClass_UT4GameInstance_Statics; \
public: \
	DECLARE_CLASS(UT4GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Tech4Demo"), NO_API) \
	DECLARE_SERIALIZER(UT4GameInstance)


#define T4FrameworkDeploy_Source_Tech4Demo_T4GameInstance_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UT4GameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UT4GameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UT4GameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UT4GameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UT4GameInstance(UT4GameInstance&&); \
	NO_API UT4GameInstance(const UT4GameInstance&); \
public:


#define T4FrameworkDeploy_Source_Tech4Demo_T4GameInstance_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UT4GameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UT4GameInstance(UT4GameInstance&&); \
	NO_API UT4GameInstance(const UT4GameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UT4GameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UT4GameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UT4GameInstance)


#define T4FrameworkDeploy_Source_Tech4Demo_T4GameInstance_h_18_PRIVATE_PROPERTY_OFFSET
#define T4FrameworkDeploy_Source_Tech4Demo_T4GameInstance_h_15_PROLOG
#define T4FrameworkDeploy_Source_Tech4Demo_T4GameInstance_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	T4FrameworkDeploy_Source_Tech4Demo_T4GameInstance_h_18_PRIVATE_PROPERTY_OFFSET \
	T4FrameworkDeploy_Source_Tech4Demo_T4GameInstance_h_18_RPC_WRAPPERS \
	T4FrameworkDeploy_Source_Tech4Demo_T4GameInstance_h_18_INCLASS \
	T4FrameworkDeploy_Source_Tech4Demo_T4GameInstance_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define T4FrameworkDeploy_Source_Tech4Demo_T4GameInstance_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	T4FrameworkDeploy_Source_Tech4Demo_T4GameInstance_h_18_PRIVATE_PROPERTY_OFFSET \
	T4FrameworkDeploy_Source_Tech4Demo_T4GameInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	T4FrameworkDeploy_Source_Tech4Demo_T4GameInstance_h_18_INCLASS_NO_PURE_DECLS \
	T4FrameworkDeploy_Source_Tech4Demo_T4GameInstance_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class T4GameInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TECH4DEMO_API UClass* StaticClass<class UT4GameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID T4FrameworkDeploy_Source_Tech4Demo_T4GameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
