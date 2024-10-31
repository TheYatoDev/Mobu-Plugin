// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MobuSystem/Public/Item/Collectable/Collectable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectable() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
MOBUSYSTEM_API UClass* Z_Construct_UClass_ACollectable();
MOBUSYSTEM_API UClass* Z_Construct_UClass_ACollectable_NoRegister();
MOBUSYSTEM_API UClass* Z_Construct_UClass_AMobuItemBase();
UPackage* Z_Construct_UPackage__Script_MobuSystem();
// End Cross Module References

// Begin Class ACollectable
void ACollectable::StaticRegisterNativesACollectable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACollectable);
UClass* Z_Construct_UClass_ACollectable_NoRegister()
{
	return ACollectable::StaticClass();
}
struct Z_Construct_UClass_ACollectable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Item/Collectable/Collectable.h" },
		{ "ModuleRelativePath", "Public/Item/Collectable/Collectable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectableMesh_MetaData[] = {
		{ "Category", "Collectable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Item/Collectable/Collectable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollectableMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACollectable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_CollectableMesh = { "CollectableMesh", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollectable, CollectableMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectableMesh_MetaData), NewProp_CollectableMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACollectable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_CollectableMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACollectable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMobuItemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MobuSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACollectable_Statics::ClassParams = {
	&ACollectable::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACollectable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::Class_MetaDataParams), Z_Construct_UClass_ACollectable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACollectable()
{
	if (!Z_Registration_Info_UClass_ACollectable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACollectable.OuterSingleton, Z_Construct_UClass_ACollectable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACollectable.OuterSingleton;
}
template<> MOBUSYSTEM_API UClass* StaticClass<ACollectable>()
{
	return ACollectable::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACollectable);
ACollectable::~ACollectable() {}
// End Class ACollectable

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Item_Collectable_Collectable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACollectable, ACollectable::StaticClass, TEXT("ACollectable"), &Z_Registration_Info_UClass_ACollectable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACollectable), 287907810U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Item_Collectable_Collectable_h_401469480(TEXT("/Script/MobuSystem"),
	Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Item_Collectable_Collectable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Item_Collectable_Collectable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
