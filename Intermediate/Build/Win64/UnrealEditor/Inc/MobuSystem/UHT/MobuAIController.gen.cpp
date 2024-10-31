// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MobuSystem/Public/AI/MobuAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMobuAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
MOBUSYSTEM_API UClass* Z_Construct_UClass_AMobuAIController();
MOBUSYSTEM_API UClass* Z_Construct_UClass_AMobuAIController_NoRegister();
MOBUSYSTEM_API UClass* Z_Construct_UClass_UMobuRoutineTree_NoRegister();
UPackage* Z_Construct_UPackage__Script_MobuSystem();
// End Cross Module References

// Begin Class AMobuAIController
void AMobuAIController::StaticRegisterNativesAMobuAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMobuAIController);
UClass* Z_Construct_UClass_AMobuAIController_NoRegister()
{
	return AMobuAIController::StaticClass();
}
struct Z_Construct_UClass_AMobuAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/MobuAIController.h" },
		{ "ModuleRelativePath", "Public/AI/MobuAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobuRoutineTree_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/MobuAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobuRoutineTree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMobuAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMobuAIController_Statics::NewProp_MobuRoutineTree = { "MobuRoutineTree", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMobuAIController, MobuRoutineTree), Z_Construct_UClass_UMobuRoutineTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobuRoutineTree_MetaData), NewProp_MobuRoutineTree_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMobuAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobuAIController_Statics::NewProp_MobuRoutineTree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMobuAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMobuAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_MobuSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMobuAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMobuAIController_Statics::ClassParams = {
	&AMobuAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMobuAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMobuAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMobuAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMobuAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMobuAIController()
{
	if (!Z_Registration_Info_UClass_AMobuAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMobuAIController.OuterSingleton, Z_Construct_UClass_AMobuAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMobuAIController.OuterSingleton;
}
template<> MOBUSYSTEM_API UClass* StaticClass<AMobuAIController>()
{
	return AMobuAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMobuAIController);
AMobuAIController::~AMobuAIController() {}
// End Class AMobuAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_AI_MobuAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMobuAIController, AMobuAIController::StaticClass, TEXT("AMobuAIController"), &Z_Registration_Info_UClass_AMobuAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMobuAIController), 716428730U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_AI_MobuAIController_h_3911911363(TEXT("/Script/MobuSystem"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_AI_MobuAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_AI_MobuAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
