// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MobuSystem/Public/Data/StationType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStationType() {}

// Begin Cross Module References
MOBUSYSTEM_API UEnum* Z_Construct_UEnum_MobuSystem_EStationType();
UPackage* Z_Construct_UPackage__Script_MobuSystem();
// End Cross Module References

// Begin Enum EStationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStationType;
static UEnum* EStationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MobuSystem_EStationType, (UObject*)Z_Construct_UPackage__Script_MobuSystem(), TEXT("EStationType"));
	}
	return Z_Registration_Info_UEnum_EStationType.OuterSingleton;
}
template<> MOBUSYSTEM_API UEnum* StaticEnum<EStationType>()
{
	return EStationType_StaticEnum();
}
struct Z_Construct_UEnum_MobuSystem_EStationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Linked.Comment", "// This station is linked to 1 or more other stations and will be part of the Priority queue\n" },
		{ "Linked.DisplayName", "Linked" },
		{ "Linked.Name", "EStationType::Linked" },
		{ "Linked.ToolTip", "This station is linked to 1 or more other stations and will be part of the Priority queue" },
		{ "ModuleRelativePath", "Public/Data/StationType.h" },
		{ "Regular.Comment", "// This station can be used by any NPC randomly\n" },
		{ "Regular.DisplayName", "Regular" },
		{ "Regular.Name", "EStationType::Regular" },
		{ "Regular.ToolTip", "This station can be used by any NPC randomly" },
		{ "Sequence.Comment", "// This station is part of a sequence and will be reserved for NPCs on this sequence only\n" },
		{ "Sequence.DisplayName", "Sequence" },
		{ "Sequence.Name", "EStationType::Sequence" },
		{ "Sequence.ToolTip", "This station is part of a sequence and will be reserved for NPCs on this sequence only" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStationType::Regular", (int64)EStationType::Regular },
		{ "EStationType::Linked", (int64)EStationType::Linked },
		{ "EStationType::Sequence", (int64)EStationType::Sequence },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MobuSystem_EStationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MobuSystem,
	nullptr,
	"EStationType",
	"EStationType",
	Z_Construct_UEnum_MobuSystem_EStationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MobuSystem_EStationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MobuSystem_EStationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MobuSystem_EStationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MobuSystem_EStationType()
{
	if (!Z_Registration_Info_UEnum_EStationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStationType.InnerSingleton, Z_Construct_UEnum_MobuSystem_EStationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStationType.InnerSingleton;
}
// End Enum EStationType

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_StationType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStationType_StaticEnum, TEXT("EStationType"), &Z_Registration_Info_UEnum_EStationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2388034734U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_StationType_h_2376214465(TEXT("/Script/MobuSystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_StationType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_StationType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
