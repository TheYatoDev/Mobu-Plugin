// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MobuSystem/Public/Data/TaskMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskMode() {}

// Begin Cross Module References
MOBUSYSTEM_API UEnum* Z_Construct_UEnum_MobuSystem_ETaskMode();
UPackage* Z_Construct_UPackage__Script_MobuSystem();
// End Cross Module References

// Begin Enum ETaskMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETaskMode;
static UEnum* ETaskMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETaskMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETaskMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MobuSystem_ETaskMode, (UObject*)Z_Construct_UPackage__Script_MobuSystem(), TEXT("ETaskMode"));
	}
	return Z_Registration_Info_UEnum_ETaskMode.OuterSingleton;
}
template<> MOBUSYSTEM_API UEnum* StaticEnum<ETaskMode>()
{
	return ETaskMode_StaticEnum();
}
struct Z_Construct_UEnum_MobuSystem_ETaskMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CustomTask.DisplayName", "Custom\x09Task" },
		{ "CustomTask.Name", "ETaskMode::CustomTask" },
		{ "Location.DisplayName", "Location" },
		{ "Location.Name", "ETaskMode::Location" },
		{ "ModuleRelativePath", "Public/Data/TaskMode.h" },
		{ "POI.DisplayName", "POI" },
		{ "POI.Name", "ETaskMode::POI" },
		{ "StandardTask.DisplayName", "Standard Task" },
		{ "StandardTask.Name", "ETaskMode::StandardTask" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETaskMode::POI", (int64)ETaskMode::POI },
		{ "ETaskMode::StandardTask", (int64)ETaskMode::StandardTask },
		{ "ETaskMode::Location", (int64)ETaskMode::Location },
		{ "ETaskMode::CustomTask", (int64)ETaskMode::CustomTask },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MobuSystem_ETaskMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MobuSystem,
	nullptr,
	"ETaskMode",
	"ETaskMode",
	Z_Construct_UEnum_MobuSystem_ETaskMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MobuSystem_ETaskMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MobuSystem_ETaskMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MobuSystem_ETaskMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MobuSystem_ETaskMode()
{
	if (!Z_Registration_Info_UEnum_ETaskMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETaskMode.InnerSingleton, Z_Construct_UEnum_MobuSystem_ETaskMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETaskMode.InnerSingleton;
}
// End Enum ETaskMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_TaskMode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETaskMode_StaticEnum, TEXT("ETaskMode"), &Z_Registration_Info_UEnum_ETaskMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4156478020U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_TaskMode_h_2312663463(TEXT("/Script/MobuSystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_TaskMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_TaskMode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
