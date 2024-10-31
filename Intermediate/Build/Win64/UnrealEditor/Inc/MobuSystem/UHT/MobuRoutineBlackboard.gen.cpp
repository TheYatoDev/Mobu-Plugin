// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MobuSystem/Public/AI/MobuRoutineBlackboard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMobuRoutineBlackboard() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData();
MOBUSYSTEM_API UClass* Z_Construct_UClass_UMobuRoutineBlackboard();
MOBUSYSTEM_API UClass* Z_Construct_UClass_UMobuRoutineBlackboard_NoRegister();
UPackage* Z_Construct_UPackage__Script_MobuSystem();
// End Cross Module References

// Begin Class UMobuRoutineBlackboard
void UMobuRoutineBlackboard::StaticRegisterNativesUMobuRoutineBlackboard()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMobuRoutineBlackboard);
UClass* Z_Construct_UClass_UMobuRoutineBlackboard_NoRegister()
{
	return UMobuRoutineBlackboard::StaticClass();
}
struct Z_Construct_UClass_UMobuRoutineBlackboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Blackboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/MobuRoutineBlackboard.h" },
		{ "ModuleRelativePath", "Public/AI/MobuRoutineBlackboard.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMobuRoutineBlackboard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMobuRoutineBlackboard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlackboardData,
	(UObject* (*)())Z_Construct_UPackage__Script_MobuSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMobuRoutineBlackboard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMobuRoutineBlackboard_Statics::ClassParams = {
	&UMobuRoutineBlackboard::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMobuRoutineBlackboard_Statics::Class_MetaDataParams), Z_Construct_UClass_UMobuRoutineBlackboard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMobuRoutineBlackboard()
{
	if (!Z_Registration_Info_UClass_UMobuRoutineBlackboard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMobuRoutineBlackboard.OuterSingleton, Z_Construct_UClass_UMobuRoutineBlackboard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMobuRoutineBlackboard.OuterSingleton;
}
template<> MOBUSYSTEM_API UClass* StaticClass<UMobuRoutineBlackboard>()
{
	return UMobuRoutineBlackboard::StaticClass();
}
UMobuRoutineBlackboard::UMobuRoutineBlackboard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMobuRoutineBlackboard);
UMobuRoutineBlackboard::~UMobuRoutineBlackboard() {}
// End Class UMobuRoutineBlackboard

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_AI_MobuRoutineBlackboard_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMobuRoutineBlackboard, UMobuRoutineBlackboard::StaticClass, TEXT("UMobuRoutineBlackboard"), &Z_Registration_Info_UClass_UMobuRoutineBlackboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMobuRoutineBlackboard), 1193980396U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_AI_MobuRoutineBlackboard_h_690224388(TEXT("/Script/MobuSystem"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_AI_MobuRoutineBlackboard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_AI_MobuRoutineBlackboard_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
