// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Core/Public/T4CoreTypes.h"
#include "T4Engine/Public/T4EngineUtils.h"

class IT4GameObject;

namespace T4FrameworkUtil
{
	T4FRAMEWORK_API IT4GameObject* GetMouseOverGameObject(ET4LayerType InLayerType);
	T4FRAMEWORK_API bool GetMousePickingLocation(ET4LayerType InLayerType, FVector& OutLocation);
}
