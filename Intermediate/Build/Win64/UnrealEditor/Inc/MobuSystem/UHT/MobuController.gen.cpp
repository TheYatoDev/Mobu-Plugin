// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MobuSystem/Public/Component/MobuController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMobuController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MOBUSYSTEM_API UClass* Z_Construct_UClass_UMobuController();
MOBUSYSTEM_API UClass* Z_Construct_UClass_UMobuController_NoRegister();
UPackage* Z_Construct_UPackage__Script_MobuSystem();
// End Cross Module References

// Begin Class UMobuController
void UMobuController::StaticRegisterNativesUMobuController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMobuController);
UClass* Z_Construct_UClass_UMobuController_NoRegister()
{
	return UMobuController::StaticClass();
}
struct Z_Construct_UClass_UMobuController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*ClassGroup=(Custom), meta=(BlueprintSpawnableComponent)*/" },
#endif
		{ "IncludePath", "Component/MobuController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Component/MobuController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ClassGroup=(Custom), meta=(BlueprintSpawnableComponent)" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMobuController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMobuController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MobuSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMobuController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMobuController_Statics::ClassParams = {
	&UMobuController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMobuController_Statics::Class_MetaDataParams), Z_Construct_UClass_UMobuController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMobuController()
{
	if (!Z_Registration_Info_UClass_UMobuController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMobuController.OuterSingleton, Z_Construct_UClass_UMobuController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMobuController.OuterSingleton;
}
template<> MOBUSYSTEM_API UClass* StaticClass<UMobuController>()
{
	return UMobuController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMobuController);
UMobuController::~UMobuController() {}
// End Class UMobuController

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Component_MobuController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMobuController, UMobuController::StaticClass, TEXT("UMobuController"), &Z_Registration_Info_UClass_UMobuController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMobuController), 1002305069U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Component_MobuController_h_2791222564(TEXT("/Script/MobuSystem"),
	Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Component_MobuController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Component_MobuController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
