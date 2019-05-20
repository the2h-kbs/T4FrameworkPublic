// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Core/Public/T4CoreTypes.h"

class IT4GameObject;

namespace T4FrameworkUtil
{
	IT4GameObject* GetMouseOverGameObject(ET4LayerType InLayerType);
	bool GetMousePickingLocation(ET4LayerType InLayerType, FVector& OutLocation);
}