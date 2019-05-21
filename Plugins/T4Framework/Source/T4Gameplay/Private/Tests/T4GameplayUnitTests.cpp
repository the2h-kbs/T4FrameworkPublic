// Copyright 2019 Tech4 Labs. All Rights Reserved.

#include "Misc/AutomationTest.h"
#include "T4Framework/Public/T4FrameworkNet.h"
#include "T4GameplayInternal.h"

/**
  * https://docs.unrealengine.com/en-US/Programming/Automation#enablingautomationtestplugins
 */

#if WITH_DEV_AUTOMATION_TESTS

/*
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FT4NetIDTest, "T4Gameplay.Type.FT4NetID", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::SmokeFilter)

bool FT4NetIDTest::RunTest(const FString& Parameters)
{
	FT4NetID TestNetID;

	TestFalse(FString(TEXT("Testing Default FT4NetID::IsValid()")), TestNetID.IsValid());

	return true;
}
*/

#endif //WITH_DEV_AUTOMATION_TESTS