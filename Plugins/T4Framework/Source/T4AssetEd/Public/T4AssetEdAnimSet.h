// Copyright 2019 Tech4 Labs. All Rights Reserved.

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

T4ASSETED_API bool T4AssetEdAnimSetAnimSequenceAddOrUpdate(
	UT4AnimSetAsset* InOutAnimSetAsset,
	ET4AnimMontageLayer InAnimMontageLayer,
	const FName& InAnimSequenceName,
	TSoftObjectPtr<UAnimSequence>& InAnimSequence,
	FString& OutErrorMessage
);

T4ASSETED_API bool T4AssetEdAnimSetAnimSequenceRemove(
	UT4AnimSetAsset* InOutAnimSetAsset,
	ET4AnimMontageLayer InAnimMontageLayer,
	const FName& InAnimSequenceName,
	FString& OutErrorMessage
);

T4ASSETED_API bool T4AssetEdAnimSetBaseBlendSpaceAddOrUpdate(
	UT4AnimSetAsset* InOutAnimSetAsset,
	const FName& InBlendSpaceName,
	TSoftObjectPtr<UBlendSpace>& InBlendSpace,
	FString& OutErrorMessage
);

T4ASSETED_API bool T4AssetEdAnimSetBaseBlendSpaceRemove(
	UT4AnimSetAsset* InOutAnimSetAsset,
	const FName& InBlendSpaceName,
	FString& OutErrorMessage
);

T4ASSETED_API bool T4AssetEdAnimSetAnimMontageBuild(
	UT4AnimSetAsset* InOutAnimSetAsset,
	ET4AnimMontageLayer InAnimMontageLayer,
	const FName& InObjectName
);

T4ASSETED_API bool T4AssetEdAnimSetBaseBlendSpaceBuild(
	UT4AnimSetAsset* InOutAnimSetAsset
);

T4ASSETED_API bool T4AssetEdAnimSetBuild(
	UT4AnimSetAsset* InOutAnimSetAsset,
	FString& OutErrorMessage
);

#endif