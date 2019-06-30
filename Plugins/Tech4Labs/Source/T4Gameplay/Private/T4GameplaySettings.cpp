// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4GameplaySettings.h"

#include "T4GameplayInternal.h"

#define LOCTEXT_NAMESPACE "T4GameplaySettings"

/**
  * #43
 */
UT4GameplaySettings::UT4GameplaySettings()
{
	// Plugins/Tech4Labs/Config/DefaultTech4Labs.ini
}

#if WITH_EDITOR
void UT4GameplaySettings::PostEditChangeProperty(
	struct FPropertyChangedEvent& PropertyChangedEvent
)
{
}
#endif

#undef LOCTEXT_NAMESPACE