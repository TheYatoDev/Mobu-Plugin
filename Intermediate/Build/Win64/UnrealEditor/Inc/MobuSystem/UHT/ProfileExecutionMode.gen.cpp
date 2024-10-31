// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MobuSystem/Public/Data/ProfileExecutionMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfileExecutionMode() {}

// Begin Cross Module References
MOBUSYSTEM_API UEnum* Z_Construct_UEnum_MobuSystem_EProfileExecutionMode();
UPackage* Z_Construct_UPackage__Script_MobuSystem();
// End Cross Module References

// Begin Enum EProfileExecutionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProfileExecutionMode;
static UEnum* EProfileExecutionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProfileExecutionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProfileExecutionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MobuSystem_EProfileExecutionMode, (UObject*)Z_Construct_UPackage__Script_MobuSystem(), TEXT("EProfileExecutionMode"));
	}
	return Z_Registration_Info_UEnum_EProfileExecutionMode.OuterSingleton;
}
template<> MOBUSYSTEM_API UEnum* StaticEnum<EProfileExecutionMode>()
{
	return EProfileExecutionMode_StaticEnum();
}
struct Z_Construct_UEnum_MobuSystem_EProfileExecutionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LoopLastTaskIndefinitely.DisplayName", "Loop Last Task Indefinitely" },
		{ "LoopLastTaskIndefinitely.Name", "EProfileExecutionMode::LoopLastTaskIndefinitely" },
		{ "ModuleRelativePath", "Public/Data/ProfileExecutionMode.h" },
		{ "RepeatIndefinitely.DisplayName", "Repeat Indefinitely" },
		{ "RepeatIndefinitely.Name", "EProfileExecutionMode::RepeatIndefinitely" },
		{ "ReturnHome.DisplayName", "Return Home" },
		{ "ReturnHome.Name", "EProfileExecutionMode::ReturnHome" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProfileExecutionMode::RepeatIndefinitely", (int64)EProfileExecutionMode::RepeatIndefinitely },
		{ "EProfileExecutionMode::ReturnHome", (int64)EProfileExecutionMode::ReturnHome },
		{ "EProfileExecutionMode::LoopLastTaskIndefinitely", (int64)EProfileExecutionMode::LoopLastTaskIndefinitely },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MobuSystem_EProfileExecutionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MobuSystem,
	nullptr,
	"EProfileExecutionMode",
	"EProfileExecutionMode",
	Z_Construct_UEnum_MobuSystem_EProfileExecutionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MobuSystem_EProfileExecutionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MobuSystem_EProfileExecutionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MobuSystem_EProfileExecutionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MobuSystem_EProfileExecutionMode()
{
	if (!Z_Registration_Info_UEnum_EProfileExecutionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProfileExecutionMode.InnerSingleton, Z_Construct_UEnum_MobuSystem_EProfileExecutionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProfileExecutionMode.InnerSingleton;
}
// End Enum EProfileExecutionMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_ProfileExecutionMode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EProfileExecutionMode_StaticEnum, TEXT("EProfileExecutionMode"), &Z_Registration_Info_UEnum_EProfileExecutionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3184692048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_ProfileExecutionMode_h_129426760(TEXT("/Script/MobuSystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_ProfileExecutionMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_ProfileExecutionMode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
