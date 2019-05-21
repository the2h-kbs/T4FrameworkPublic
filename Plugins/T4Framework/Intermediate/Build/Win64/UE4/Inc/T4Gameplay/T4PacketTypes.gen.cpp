// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Private/Network/Protocol/T4PacketTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PacketTypes() {}
// Cross Module References
	T4GAMEPLAY_API UEnum* Z_Construct_UEnum_T4Gameplay_ET4PacketStoC();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEPLAY_API UEnum* Z_Construct_UEnum_T4Gameplay_ET4PacketCtoS();
// End Cross Module References
	static UEnum* ET4PacketStoC_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Gameplay_ET4PacketStoC, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("ET4PacketStoC"));
		}
		return Singleton;
	}
	template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4PacketStoC>()
	{
		return ET4PacketStoC_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4PacketStoC(ET4PacketStoC_StaticEnum, TEXT("/Script/T4Gameplay"), TEXT("ET4PacketStoC"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Gameplay_ET4PacketStoC_Hash() { return 2049362695U; }
	UEnum* Z_Construct_UEnum_T4Gameplay_ET4PacketStoC()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4PacketStoC"), 0, Get_Z_Construct_UEnum_T4Gameplay_ET4PacketStoC_Hash(), false);
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
				{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketTypes.h" },
				{ "MoveTo.ToolTip", "#41" },
				{ "NPCLeave.ToolTip", "#31" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Gameplay,
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
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Gameplay_ET4PacketCtoS, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("ET4PacketCtoS"));
		}
		return Singleton;
	}
	template<> T4GAMEPLAY_API UEnum* StaticEnum<ET4PacketCtoS>()
	{
		return ET4PacketCtoS_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4PacketCtoS(ET4PacketCtoS_StaticEnum, TEXT("/Script/T4Gameplay"), TEXT("ET4PacketCtoS"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Gameplay_ET4PacketCtoS_Hash() { return 2625774429U; }
	UEnum* Z_Construct_UEnum_T4Gameplay_ET4PacketCtoS()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4PacketCtoS"), 0, Get_Z_Construct_UEnum_T4Gameplay_ET4PacketCtoS_Hash(), false);
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
				{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketTypes.h" },
				{ "ToolTip", "// WARN : Packet \xec\xb6\x94\xea\xb0\x80 \xec\x8b\x9c\xeb\x8a\x94 \xec\x95\x84\xeb\x9e\x98 \xed\x85\x8c\xea\xb7\xb8\xeb\xa5\xbc \xec\xb0\xbe\xec\x95\x84 \xec\xb6\x94\xea\xb0\x80\xeb\x90\x9c \xed\x8c\xa8\xed\x82\xb7\xec\x9d\x84 \xeb\xaa\xa8\xeb\x91\x90 \xea\xb5\xac\xed\x98\x84\xed\x95\xb4\xec\xa3\xbc\xec\x96\xb4\xec\x95\xbc \xed\x95\xa8!!\n// #T4_ADD_PACKET_TAG" },
				{ "UnEquip.ToolTip", "#22" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Gameplay,
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
