// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MobuSystem/Public/Data/TaskOrder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskOrder() {}

// Begin Cross Module References
MOBUSYSTEM_API UEnum* Z_Construct_UEnum_MobuSystem_ETaskOrder();
UPackage* Z_Construct_UPackage__Script_MobuSystem();
// End Cross Module References

// Begin Enum ETaskOrder
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETaskOrder;
static UEnum* ETaskOrder_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETaskOrder.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETaskOrder.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MobuSystem_ETaskOrder, (UObject*)Z_Construct_UPackage__Script_MobuSystem(), TEXT("ETaskOrder"));
	}
	return Z_Registration_Info_UEnum_ETaskOrder.OuterSingleton;
}
template<> MOBUSYSTEM_API UEnum* StaticEnum<ETaskOrder>()
{
	return ETaskOrder_StaticEnum();
}
struct Z_Construct_UEnum_MobuSystem_ETaskOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Custom.Comment", "// You can override function ovSelectTask and add your own logic to select the Task to execute\n" },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "ETaskOrder::Custom" },
		{ "Custom.ToolTip", "You can override function ovSelectTask and add your own logic to select the Task to execute" },
		{ "ModuleRelativePath", "Public/Data/TaskOrder.h" },
		{ "Random.Comment", "// The NPC will pick a random Task to execute. The Profile will never end\n" },
		{ "Random.DisplayName", "Random" },
		{ "Random.Name", "ETaskOrder::Random" },
		{ "Random.ToolTip", "The NPC will pick a random Task to execute. The Profile will never end" },
		{ "Sequential.Comment", "// Tasks as executed in the order they were added in the Profile\n" },
		{ "Sequential.DisplayName", "Sequential" },
		{ "Sequential.Name", "ETaskOrder::Sequential" },
		{ "Sequential.ToolTip", "Tasks as executed in the order they were added in the Profile" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETaskOrder::Sequential", (int64)ETaskOrder::Sequential },
		{ "ETaskOrder::Random", (int64)ETaskOrder::Random },
		{ "ETaskOrder::Custom", (int64)ETaskOrder::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MobuSystem_ETaskOrder_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MobuSystem,
	nullptr,
	"ETaskOrder",
	"ETaskOrder",
	Z_Construct_UEnum_MobuSystem_ETaskOrder_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MobuSystem_ETaskOrder_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MobuSystem_ETaskOrder_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MobuSystem_ETaskOrder_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MobuSystem_ETaskOrder()
{
	if (!Z_Registration_Info_UEnum_ETaskOrder.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETaskOrder.InnerSingleton, Z_Construct_UEnum_MobuSystem_ETaskOrder_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETaskOrder.InnerSingleton;
}
// End Enum ETaskOrder

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_TaskOrder_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETaskOrder_StaticEnum, TEXT("ETaskOrder"), &Z_Registration_Info_UEnum_ETaskOrder, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2936925607U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_TaskOrder_h_3121347133(TEXT("/Script/MobuSystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_TaskOrder_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_TaskOrder_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
