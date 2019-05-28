// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
  *
 */
#define SAFE_DELETE(x) if (nullptr != x) { delete x; x = nullptr; }

#define BIT_LEFTSHIFT(x) (1 << (uint32)(x)) // #30