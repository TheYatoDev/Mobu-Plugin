// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MobuSystem/Public/Data/StandardTasks.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStandardTasks() {}

// Begin Cross Module References
MOBUSYSTEM_API UEnum* Z_Construct_UEnum_MobuSystem_EStandardTasks();
UPackage* Z_Construct_UPackage__Script_MobuSystem();
// End Cross Module References

// Begin Enum EStandardTasks
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStandardTasks;
static UEnum* EStandardTasks_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStandardTasks.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStandardTasks.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MobuSystem_EStandardTasks, (UObject*)Z_Construct_UPackage__Script_MobuSystem(), TEXT("EStandardTasks"));
	}
	return Z_Registration_Info_UEnum_EStandardTasks.OuterSingleton;
}
template<> MOBUSYSTEM_API UEnum* StaticEnum<EStandardTasks>()
{
	return EStandardTasks_StaticEnum();
}
struct Z_Construct_UEnum_MobuSystem_EStandardTasks_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bounds.Comment", "// Will search for nearby Bounds and will roam freely inside\n" },
		{ "Bounds.DisplayName", "Bounds" },
		{ "Bounds.Name", "EStandardTasks::Bounds" },
		{ "Bounds.ToolTip", "Will search for nearby Bounds and will roam freely inside" },
		{ "Home.DisplayName", "Home" },
		{ "Home.Name", "EStandardTasks::Home" },
		{ "ModuleRelativePath", "Public/Data/StandardTasks.h" },
		{ "Path.Comment", "// Will search for nearby paths and will follow one\n" },
		{ "Path.DisplayName", "Path" },
		{ "Path.Name", "EStandardTasks::Path" },
		{ "Path.ToolTip", "Will search for nearby paths and will follow one" },
		{ "Waypoint.Comment", "// Wil search for a nearby waypoint\n" },
		{ "Waypoint.DisplayName", "Waypoint" },
		{ "Waypoint.Name", "EStandardTasks::Waypoint" },
		{ "Waypoint.ToolTip", "Wil search for a nearby waypoint" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStandardTasks::Home", (int64)EStandardTasks::Home },
		{ "EStandardTasks::Bounds", (int64)EStandardTasks::Bounds },
		{ "EStandardTasks::Waypoint", (int64)EStandardTasks::Waypoint },
		{ "EStandardTasks::Path", (int64)EStandardTasks::Path },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MobuSystem_EStandardTasks_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MobuSystem,
	nullptr,
	"EStandardTasks",
	"EStandardTasks",
	Z_Construct_UEnum_MobuSystem_EStandardTasks_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MobuSystem_EStandardTasks_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MobuSystem_EStandardTasks_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MobuSystem_EStandardTasks_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MobuSystem_EStandardTasks()
{
	if (!Z_Registration_Info_UEnum_EStandardTasks.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStandardTasks.InnerSingleton, Z_Construct_UEnum_MobuSystem_EStandardTasks_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStandardTasks.InnerSingleton;
}
// End Enum EStandardTasks

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_StandardTasks_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStandardTasks_StaticEnum, TEXT("EStandardTasks"), &Z_Registration_Info_UEnum_EStandardTasks, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2140033390U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_StandardTasks_h_1393231622(TEXT("/Script/MobuSystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_StandardTasks_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_StandardTasks_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
