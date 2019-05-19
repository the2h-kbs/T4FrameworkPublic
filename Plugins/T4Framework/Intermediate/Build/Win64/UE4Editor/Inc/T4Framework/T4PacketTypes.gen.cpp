// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Public/Protocol/T4PacketTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PacketTypes() {}
// Cross Module References
	T4FRAMEWORK_API UEnum* Z_Construct_UEnum_T4Framework_ET4PacketStoC();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
	T4FRAMEWORK_API UEnum* Z_Construct_UEnum_T4Framework_ET4PacketCtoS();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4NetID();
// End Cross Module References
	static UEnum* ET4PacketStoC_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Framework_ET4PacketStoC, Z_Construct_UPackage__Script_T4Framework(), TEXT("ET4PacketStoC"));
		}
		return Singleton;
	}
	template<> T4FRAMEWORK_API UEnum* StaticEnum<ET4PacketStoC>()
	{
		return ET4PacketStoC_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4PacketStoC(ET4PacketStoC_StaticEnum, TEXT("/Script/T4Framework"), TEXT("ET4PacketStoC"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Framework_ET4PacketStoC_Hash() { return 1090604446U; }
	UEnum* Z_Construct_UEnum_T4Framework_ET4PacketStoC()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4PacketStoC"), 0, Get_Z_Construct_UEnum_T4Framework_ET4PacketStoC_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4PacketStoC::ChangeWorld", (int64)ET4PacketStoC::ChangeWorld },
				{ "ET4PacketStoC::MyPCEnter", (int64)ET4PacketStoC::MyPCEnter },
				{ "ET4PacketStoC::PCEnter", (int64)ET4PacketStoC::PCEnter },
				{ "ET4PacketStoC::PCLeave", (int64)ET4PacketStoC::PCLeave },
				{ "ET4PacketStoC::NPCEnter", (int64)ET4PacketStoC::NPCEnter },
				{ "ET4PacketStoC::NPCLeave", (int64)ET4PacketStoC::NPCLeave },
				{ "ET4PacketStoC::FOEnter", (int64)ET4PacketStoC::FOEnter },
				{ "ET4PacketStoC::FOLeave", (int64)ET4PacketStoC::FOLeave },
				{ "ET4PacketStoC::ItemEnter", (int64)ET4PacketStoC::ItemEnter },
				{ "ET4PacketStoC::ItemLeave", (int64)ET4PacketStoC::ItemLeave },
				{ "ET4PacketStoC::MoveTo", (int64)ET4PacketStoC::MoveTo },
				{ "ET4PacketStoC::JumpTo", (int64)ET4PacketStoC::JumpTo },
				{ "ET4PacketStoC::TeleportTo", (int64)ET4PacketStoC::TeleportTo },
				{ "ET4PacketStoC::Locked", (int64)ET4PacketStoC::Locked },
				{ "ET4PacketStoC::UnLocked", (int64)ET4PacketStoC::UnLocked },
				{ "ET4PacketStoC::Equip", (int64)ET4PacketStoC::Equip },
				{ "ET4PacketStoC::UnEquip", (int64)ET4PacketStoC::UnEquip },
				{ "ET4PacketStoC::Exchange", (int64)ET4PacketStoC::Exchange },
				{ "ET4PacketStoC::Attack", (int64)ET4PacketStoC::Attack },
				{ "ET4PacketStoC::Effect", (int64)ET4PacketStoC::Effect },
				{ "ET4PacketStoC::None", (int64)ET4PacketStoC::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack.ToolTip", "#37" },
				{ "FOEnter.ToolTip", "#31" },
				{ "FOLeave.ToolTip", "#31" },
				{ "ItemEnter.ToolTip", "#31" },
				{ "ItemLeave.ToolTip", "#41" },
				{ "ModuleRelativePath", "Public/Protocol/T4PacketTypes.h" },
				{ "MoveTo.ToolTip", "#41" },
				{ "NPCLeave.ToolTip", "#31" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Framework,
				nullptr,
				"ET4PacketStoC",
				"ET4PacketStoC",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ET4PacketCtoS_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Framework_ET4PacketCtoS, Z_Construct_UPackage__Script_T4Framework(), TEXT("ET4PacketCtoS"));
		}
		return Singleton;
	}
	template<> T4FRAMEWORK_API UEnum* StaticEnum<ET4PacketCtoS>()
	{
		return ET4PacketCtoS_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4PacketCtoS(ET4PacketCtoS_StaticEnum, TEXT("/Script/T4Framework"), TEXT("ET4PacketCtoS"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Framework_ET4PacketCtoS_Hash() { return 1282145307U; }
	UEnum* Z_Construct_UEnum_T4Framework_ET4PacketCtoS()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4PacketCtoS"), 0, Get_Z_Construct_UEnum_T4Framework_ET4PacketCtoS_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4PacketCtoS::MoveWarmup", (int64)ET4PacketCtoS::MoveWarmup },
				{ "ET4PacketCtoS::JumpWarmup", (int64)ET4PacketCtoS::JumpWarmup },
				{ "ET4PacketCtoS::Locked", (int64)ET4PacketCtoS::Locked },
				{ "ET4PacketCtoS::UnLocked", (int64)ET4PacketCtoS::UnLocked },
				{ "ET4PacketCtoS::Equip", (int64)ET4PacketCtoS::Equip },
				{ "ET4PacketCtoS::UnEquip", (int64)ET4PacketCtoS::UnEquip },
				{ "ET4PacketCtoS::Exchange", (int64)ET4PacketCtoS::Exchange },
				{ "ET4PacketCtoS::Attack", (int64)ET4PacketCtoS::Attack },
				{ "ET4PacketCtoS::CmdChangeWorld", (int64)ET4PacketCtoS::CmdChangeWorld },
				{ "ET4PacketCtoS::CmdPCEnter", (int64)ET4PacketCtoS::CmdPCEnter },
				{ "ET4PacketCtoS::CmdPCLeave", (int64)ET4PacketCtoS::CmdPCLeave },
				{ "ET4PacketCtoS::CmdNPCEnter", (int64)ET4PacketCtoS::CmdNPCEnter },
				{ "ET4PacketCtoS::CmdNPCLeave", (int64)ET4PacketCtoS::CmdNPCLeave },
				{ "ET4PacketCtoS::CmdFOEnter", (int64)ET4PacketCtoS::CmdFOEnter },
				{ "ET4PacketCtoS::CmdFOLeave", (int64)ET4PacketCtoS::CmdFOLeave },
				{ "ET4PacketCtoS::CmdItemEnter", (int64)ET4PacketCtoS::CmdItemEnter },
				{ "ET4PacketCtoS::CmdItemLeave", (int64)ET4PacketCtoS::CmdItemLeave },
				{ "ET4PacketCtoS::CmdTeleport", (int64)ET4PacketCtoS::CmdTeleport },
				{ "ET4PacketCtoS::None", (int64)ET4PacketCtoS::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack.ToolTip", "#37" },
				{ "CmdChangeWorld.ToolTip", "Test" },
				{ "CmdFOEnter.ToolTip", "#31" },
				{ "CmdFOLeave.ToolTip", "#31" },
				{ "CmdItemEnter.ToolTip", "#31" },
				{ "CmdItemLeave.ToolTip", "#41" },
				{ "CmdNPCLeave.ToolTip", "#31" },
				{ "CmdTeleport.ToolTip", "#41" },
				{ "Exchange.ToolTip", "#22" },
				{ "ModuleRelativePath", "Public/Protocol/T4PacketTypes.h" },
				{ "ToolTip", "// WARN : Packet \xec\xb6\x94\xea\xb0\x80 \xec\x8b\x9c\xeb\x8a\x94 \xec\x95\x84\xeb\x9e\x98 \xed\x85\x8c\xea\xb7\xb8\xeb\xa5\xbc \xec\xb0\xbe\xec\x95\x84 \xec\xb6\x94\xea\xb0\x80\xeb\x90\x9c \xed\x8c\xa8\xed\x82\xb7\xec\x9d\x84 \xeb\xaa\xa8\xeb\x91\x90 \xea\xb5\xac\xed\x98\x84\xed\x95\xb4\xec\xa3\xbc\xec\x96\xb4\xec\x95\xbc \xed\x95\xa8!!\n// #T4_ADD_PACKET_TAG" },
				{ "UnEquip.ToolTip", "#22" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Framework,
				nullptr,
				"ET4PacketCtoS",
				"ET4PacketCtoS",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FT4NetID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4NetID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4NetID, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4NetID"), sizeof(FT4NetID), Get_Z_Construct_UScriptStruct_FT4NetID_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4NetID>()
{
	return FT4NetID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4NetID(FT4NetID::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4NetID"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4NetID
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4NetID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4NetID")),new UScriptStruct::TCppStructOps<FT4NetID>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4NetID;
	struct Z_Construct_UScriptStruct_FT4NetID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NetID_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/T4PacketTypes.h" },
		{ "ToolTip", "#34 : \xeb\xb3\x84\xeb\x8f\x84 \xec\x84\x9c\xeb\xb2\x84\xec\x97\x90\xec\x84\x9c \xea\xb4\x80\xeb\xa6\xac\xed\x95\x98\xeb\x8a\x94 ID \xea\xb0\x80 \xec\x9e\x88\xeb\x8b\xa4\xeb\xa9\xb4 \xeb\x8c\x80\xec\xb2\xb4\xed\x95\x98\xea\xb8\xb0 \xec\x9c\x84\xed\x95\xb4 \xec\x82\xac\xec\x9a\xa9!!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4NetID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4NetID>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4NetID_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "T4NetID" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4NetID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4NetID, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NetID_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NetID_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4NetID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4NetID_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4NetID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		nullptr,
		&NewStructOps,
		"T4NetID",
		sizeof(FT4NetID),
		alignof(FT4NetID),
		Z_Construct_UScriptStruct_FT4NetID_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NetID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4NetID_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4NetID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4NetID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4NetID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4NetID"), sizeof(FT4NetID), Get_Z_Construct_UScriptStruct_FT4NetID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4NetID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4NetID_Hash() { return 1264876759U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
