// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MobuSystem/Public/AI/MobuRoutineTree.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMobuRoutineTree() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree();
MOBUSYSTEM_API UClass* Z_Construct_UClass_UMobuRoutineTree();
MOBUSYSTEM_API UClass* Z_Construct_UClass_UMobuRoutineTree_NoRegister();
UPackage* Z_Construct_UPackage__Script_MobuSystem();
// End Cross Module References

// Begin Class UMobuRoutineTree
void UMobuRoutineTree::StaticRegisterNativesUMobuRoutineTree()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMobuRoutineTree);
UClass* Z_Construct_UClass_UMobuRoutineTree_NoRegister()
{
	return UMobuRoutineTree::StaticClass();
}
struct Z_Construct_UClass_UMobuRoutineTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/MobuRoutineTree.h" },
		{ "ModuleRelativePath", "Public/AI/MobuRoutineTree.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMobuRoutineTree>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMobuRoutineTree_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviorTree,
	(UObject* (*)())Z_Construct_UPackage__Script_MobuSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMobuRoutineTree_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMobuRoutineTree_Statics::ClassParams = {
	&UMobuRoutineTree::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMobuRoutineTree_Statics::Class_MetaDataParams), Z_Construct_UClass_UMobuRoutineTree_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMobuRoutineTree()
{
	if (!Z_Registration_Info_UClass_UMobuRoutineTree.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMobuRoutineTree.OuterSingleton, Z_Construct_UClass_UMobuRoutineTree_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMobuRoutineTree.OuterSingleton;
}
template<> MOBUSYSTEM_API UClass* StaticClass<UMobuRoutineTree>()
{
	return UMobuRoutineTree::StaticClass();
}
UMobuRoutineTree::UMobuRoutineTree(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMobuRoutineTree);
UMobuRoutineTree::~UMobuRoutineTree() {}
// End Class UMobuRoutineTree

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_AI_MobuRoutineTree_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMobuRoutineTree, UMobuRoutineTree::StaticClass, TEXT("UMobuRoutineTree"), &Z_Registration_Info_UClass_UMobuRoutineTree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMobuRoutineTree), 2634940986U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_AI_MobuRoutineTree_h_853984512(TEXT("/Script/MobuSystem"),
	Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_AI_MobuRoutineTree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_AI_MobuRoutineTree_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
