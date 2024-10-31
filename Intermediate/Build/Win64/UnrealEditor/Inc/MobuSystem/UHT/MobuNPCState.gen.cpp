// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MobuSystem/Public/Data/MobuNPCState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMobuNPCState() {}

// Begin Cross Module References
MOBUSYSTEM_API UEnum* Z_Construct_UEnum_MobuSystem_EMobuNPCState();
UPackage* Z_Construct_UPackage__Script_MobuSystem();
// End Cross Module References

// Begin Enum EMobuNPCState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMobuNPCState;
static UEnum* EMobuNPCState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMobuNPCState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMobuNPCState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MobuSystem_EMobuNPCState, (UObject*)Z_Construct_UPackage__Script_MobuSystem(), TEXT("EMobuNPCState"));
	}
	return Z_Registration_Info_UEnum_EMobuNPCState.OuterSingleton;
}
template<> MOBUSYSTEM_API UEnum* StaticEnum<EMobuNPCState>()
{
	return EMobuNPCState_StaticEnum();
}
struct Z_Construct_UEnum_MobuSystem_EMobuNPCState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bounds.Comment", "// Find a nearby bounds and roam inside it\n" },
		{ "Bounds.DisplayName", "Bounds" },
		{ "Bounds.Name", "EMobuNPCState::Bounds" },
		{ "Bounds.ToolTip", "Find a nearby bounds and roam inside it" },
		{ "Interrupt.Comment", "// NPC is being interrupted from the routine\n" },
		{ "Interrupt.DisplayName", "Interrupt" },
		{ "Interrupt.Name", "EMobuNPCState::Interrupt" },
		{ "Interrupt.ToolTip", "NPC is being interrupted from the routine" },
		{ "ModuleRelativePath", "Public/Data/MobuNPCState.h" },
		{ "Path.Comment", "// Find a nearby path and follow it\n" },
		{ "Path.DisplayName", "Path" },
		{ "Path.Name", "EMobuNPCState::Path" },
		{ "Path.ToolTip", "Find a nearby path and follow it" },
		{ "RoamPOI.Comment", "// NPC will roam inside the POI\n" },
		{ "RoamPOI.DisplayName", "Roam POI" },
		{ "RoamPOI.Name", "EMobuNPCState::RoamPOI" },
		{ "RoamPOI.ToolTip", "NPC will roam inside the POI" },
		{ "Station.Comment", "// NPC is performing a station activity\n" },
		{ "Station.DisplayName", "Station" },
		{ "Station.Name", "EMobuNPCState::Station" },
		{ "Station.ToolTip", "NPC is performing a station activity" },
		{ "Travel.Comment", "// NPC is travelling to a location\n" },
		{ "Travel.DisplayName", "Travel" },
		{ "Travel.Name", "EMobuNPCState::Travel" },
		{ "Travel.ToolTip", "NPC is travelling to a location" },
		{ "Waypoint.Comment", "// Find a new waypoint and go to itt\n" },
		{ "Waypoint.DisplayName", "Waypoint" },
		{ "Waypoint.Name", "EMobuNPCState::Waypoint" },
		{ "Waypoint.ToolTip", "Find a new waypoint and go to itt" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMobuNPCState::Travel", (int64)EMobuNPCState::Travel },
		{ "EMobuNPCState::Station", (int64)EMobuNPCState::Station },
		{ "EMobuNPCState::Interrupt", (int64)EMobuNPCState::Interrupt },
		{ "EMobuNPCState::RoamPOI", (int64)EMobuNPCState::RoamPOI },
		{ "EMobuNPCState::Bounds", (int64)EMobuNPCState::Bounds },
		{ "EMobuNPCState::Waypoint", (int64)EMobuNPCState::Waypoint },
		{ "EMobuNPCState::Path", (int64)EMobuNPCState::Path },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MobuSystem_EMobuNPCState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MobuSystem,
	nullptr,
	"EMobuNPCState",
	"EMobuNPCState",
	Z_Construct_UEnum_MobuSystem_EMobuNPCState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MobuSystem_EMobuNPCState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MobuSystem_EMobuNPCState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MobuSystem_EMobuNPCState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MobuSystem_EMobuNPCState()
{
	if (!Z_Registration_Info_UEnum_EMobuNPCState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMobuNPCState.InnerSingleton, Z_Construct_UEnum_MobuSystem_EMobuNPCState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMobuNPCState.InnerSingleton;
}
// End Enum EMobuNPCState

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_MobuNPCState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMobuNPCState_StaticEnum, TEXT("EMobuNPCState"), &Z_Registration_Info_UEnum_EMobuNPCState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2615419262U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_MobuNPCState_h_3343129819(TEXT("/Script/MobuSystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_MobuNPCState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_MobuNPCState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
