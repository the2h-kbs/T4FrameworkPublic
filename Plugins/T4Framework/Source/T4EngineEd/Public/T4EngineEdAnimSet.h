// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "T4Engine/Public/T4EngineTypes.h"

/**
  * #39
 */
#if WITH_EDITOR

class UBlendSpace;
class UAnimSequence;
class UT4AnimSetAsset;

T4ENGINEED_API bool T4EngineEdAnimSetAnimSequenceAddOrUpdate(
	UT4AnimSetAsset* InOutAnimSetAsset,
	ET4AnimMontageLayer InAnimMontageLayer,
	const FName& InAnimSequenceName,
	TSoftObjectPtr<UAnimSequence>& InAnimSequence,
	FString& OutErrorMessage
);

T4ENGINEED_API bool T4EngineEdAnimSetAnimSequenceRemove(
	UT4AnimSetAsset* InOutAnimSetAsset,
	ET4AnimMontageLayer InAnimMontageLayer,
	const FName& InAnimSequenceName,
	FString& OutErrorMessage
);

T4ENGINEED_API bool T4EngineEdAnimSetBaseBlendSpaceAddOrUpdate(
	UT4AnimSetAsset* InOutAnimSetAsset,
	const FName& InBlendSpaceName,
	TSoftObjectPtr<UBlendSpace>& InBlendSpace,
	FString& OutErrorMessage
);

T4ENGINEED_API bool T4EngineEdAnimSetBaseBlendSpaceRemove(
	UT4AnimSetAsset* InOutAnimSetAsset,
	const FName& InBlendSpaceName,
	FString& OutErrorMessage
);

T4ENGINEED_API bool T4EngineEdAnimSetAnimMontageBuild(
	UT4AnimSetAsset* InOutAnimSetAsset,
	ET4AnimMontageLayer InAnimMontageLayer,
	const FName& InObjectName
);

T4ENGINEED_API bool T4EngineEdAnimSetBaseBlendSpaceBuild(
	UT4AnimSetAsset* InOutAnimSetAsset
);

T4ENGINEED_API bool T4EngineEdAnimSetBuild(
	UT4AnimSetAsset* InOutAnimSetAsset,
	FString& OutErrorMessage
);

#endif