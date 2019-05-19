// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TECH4DEMO_T4GameMode_generated_h
#error "T4GameMode.generated.h already included, missing '#pragma once' in T4GameMode.h"
#endif
#define TECH4DEMO_T4GameMode_generated_h

#define T4FrameworkDeploy_Source_Tech4Demo_T4GameMode_h_17_RPC_WRAPPERS
#define T4FrameworkDeploy_Source_Tech4Demo_T4GameMode_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define T4FrameworkDeploy_Source_Tech4Demo_T4GameMode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAT4GameMode(); \
	friend struct Z_Construct_UClass_AT4GameMode_Statics; \
public: \
	DECLARE_CLASS(AT4GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Tech4Demo"), NO_API) \
	DECLARE_SERIALIZER(AT4GameMode)


#define T4FrameworkDeploy_Source_Tech4Demo_T4GameMode_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAT4GameMode(); \
	friend struct Z_Construct_UClass_AT4GameMode_Statics; \
public: \
	DECLARE_CLASS(AT4GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Tech4Demo"), NO_API) \
	DECLARE_SERIALIZER(AT4GameMode)


#define T4FrameworkDeploy_Source_Tech4Demo_T4GameMode_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AT4GameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AT4GameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT4GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT4GameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT4GameMode(AT4GameMode&&); \
	NO_API AT4GameMode(const AT4GameMode&); \
public:


#define T4FrameworkDeploy_Source_Tech4Demo_T4GameMode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AT4GameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT4GameMode(AT4GameMode&&); \
	NO_API AT4GameMode(const AT4GameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT4GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT4GameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AT4GameMode)


#define T4FrameworkDeploy_Source_Tech4Demo_T4GameMode_h_17_PRIVATE_PROPERTY_OFFSET
#define T4FrameworkDeploy_Source_Tech4Demo_T4GameMode_h_14_PROLOG
#define T4FrameworkDeploy_Source_Tech4Demo_T4GameMode_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	T4FrameworkDeploy_Source_Tech4Demo_T4GameMode_h_17_PRIVATE_PROPERTY_OFFSET \
	T4FrameworkDeploy_Source_Tech4Demo_T4GameMode_h_17_RPC_WRAPPERS \
	T4FrameworkDeploy_Source_Tech4Demo_T4GameMode_h_17_INCLASS \
	T4FrameworkDeploy_Source_Tech4Demo_T4GameMode_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define T4FrameworkDeploy_Source_Tech4Demo_T4GameMode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	T4FrameworkDeploy_Source_Tech4Demo_T4GameMode_h_17_PRIVATE_PROPERTY_OFFSET \
	T4FrameworkDeploy_Source_Tech4Demo_T4GameMode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	T4FrameworkDeploy_Source_Tech4Demo_T4GameMode_h_17_INCLASS_NO_PURE_DECLS \
	T4FrameworkDeploy_Source_Tech4Demo_T4GameMode_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class T4GameMode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TECH4DEMO_API UClass* StaticClass<class AT4GameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID T4FrameworkDeploy_Source_Tech4Demo_T4GameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
