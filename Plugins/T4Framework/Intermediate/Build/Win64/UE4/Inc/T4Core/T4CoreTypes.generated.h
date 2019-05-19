// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4CORE_T4CoreTypes_generated_h
#error "T4CoreTypes.generated.h already included, missing '#pragma once' in T4CoreTypes.h"
#endif
#define T4CORE_T4CoreTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID T4FrameworkDeploy_Plugins_T4Framework_Source_T4Core_Public_T4CoreTypes_h


#define FOREACH_ENUM_ET4LAYERTYPE(op) \
	op(ET4LayerType::Server) \
	op(ET4LayerType::ServerMax) \
	op(ET4LayerType::Client) \
	op(ET4LayerType::ClientMax) \
	op(ET4LayerType::Preview) \
	op(ET4LayerType::PreviewMax) \
	op(ET4LayerType::LevelEditor) \
	op(ET4LayerType::Max) 

enum class ET4LayerType : uint8;
template<> T4CORE_API UEnum* StaticEnum<ET4LayerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
