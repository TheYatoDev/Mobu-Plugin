// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MobuSystem/Public/Core/MobuManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMobuManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
MOBUSYSTEM_API UClass* Z_Construct_UClass_AMobuManager();
MOBUSYSTEM_API UClass* Z_Construct_UClass_AMobuManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_MobuSystem();
// End Cross Module References

// Begin Class AMobuManager
void AMobuManager::StaticRegisterNativesAMobuManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMobuManager);
UClass* Z_Construct_UClass_AMobuManager_NoRegister()
{
	return AMobuManager::StaticClass();
}
struct Z_Construct_UClass_AMobuManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/MobuManager.h" },
		{ "ModuleRelativePath", "Public/Core/MobuManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMobuManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMobuManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MobuSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMobuManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMobuManager_Statics::ClassParams = {
	&AMobuManager::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMobuManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AMobuManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMobuManager()
{
	if (!Z_Registration_Info_UClass_AMobuManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMobuManager.OuterSingleton, Z_Construct_UClass_AMobuManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMobuManager.OuterSingleton;
}
template<> MOBUSYSTEM_API UClass* StaticClass<AMobuManager>()
{
	return AMobuManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMobuManager);
AMobuManager::~AMobuManager() {}
// End Class AMobuManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Core_MobuManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMobuManager, AMobuManager::StaticClass, TEXT("AMobuManager"), &Z_Registration_Info_UClass_AMobuManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMobuManager), 1944450373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Core_MobuManager_h_1773470055(TEXT("/Script/MobuSystem"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Core_MobuManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Core_MobuManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
