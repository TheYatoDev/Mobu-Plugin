// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MobuSystem/Public/MobuNPC/MobuNPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMobuNPC() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
MOBUSYSTEM_API UClass* Z_Construct_UClass_AMobuNPC();
MOBUSYSTEM_API UClass* Z_Construct_UClass_AMobuNPC_NoRegister();
MOBUSYSTEM_API UClass* Z_Construct_UClass_UMobuController_NoRegister();
UPackage* Z_Construct_UPackage__Script_MobuSystem();
// End Cross Module References

// Begin Class AMobuNPC
void AMobuNPC::StaticRegisterNativesAMobuNPC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMobuNPC);
UClass* Z_Construct_UClass_AMobuNPC_NoRegister()
{
	return AMobuNPC::StaticClass();
}
struct Z_Construct_UClass_AMobuNPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MobuNPC/MobuNPC.h" },
		{ "ModuleRelativePath", "Public/MobuNPC/MobuNPC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobuController_MetaData[] = {
		{ "Category", "MobuNPC" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MobuNPC/MobuNPC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobuController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMobuNPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMobuNPC_Statics::NewProp_MobuController = { "MobuController", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMobuNPC, MobuController), Z_Construct_UClass_UMobuController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobuController_MetaData), NewProp_MobuController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMobuNPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobuNPC_Statics::NewProp_MobuController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMobuNPC_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMobuNPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MobuSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMobuNPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMobuNPC_Statics::ClassParams = {
	&AMobuNPC::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMobuNPC_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMobuNPC_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMobuNPC_Statics::Class_MetaDataParams), Z_Construct_UClass_AMobuNPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMobuNPC()
{
	if (!Z_Registration_Info_UClass_AMobuNPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMobuNPC.OuterSingleton, Z_Construct_UClass_AMobuNPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMobuNPC.OuterSingleton;
}
template<> MOBUSYSTEM_API UClass* StaticClass<AMobuNPC>()
{
	return AMobuNPC::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMobuNPC);
AMobuNPC::~AMobuNPC() {}
// End Class AMobuNPC

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_MobuNPC_MobuNPC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMobuNPC, AMobuNPC::StaticClass, TEXT("AMobuNPC"), &Z_Registration_Info_UClass_AMobuNPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMobuNPC), 2638629630U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_MobuNPC_MobuNPC_h_1182492796(TEXT("/Script/MobuSystem"),
	Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_MobuNPC_MobuNPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_MobuNPC_MobuNPC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
