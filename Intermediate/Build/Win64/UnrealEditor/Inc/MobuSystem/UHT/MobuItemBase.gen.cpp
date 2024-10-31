// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MobuSystem/Public/Item/MobuItemBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMobuItemBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
MOBUSYSTEM_API UClass* Z_Construct_UClass_AMobuItemBase();
MOBUSYSTEM_API UClass* Z_Construct_UClass_AMobuItemBase_NoRegister();
MOBUSYSTEM_API UClass* Z_Construct_UClass_UMobuInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MobuSystem();
// End Cross Module References

// Begin Class AMobuItemBase Function GetInteractionText
struct Z_Construct_UFunction_AMobuItemBase_GetInteractionText_Statics
{
	struct MobuItemBase_eventGetInteractionText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Interaction" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Item/MobuItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AMobuItemBase_GetInteractionText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobuItemBase_eventGetInteractionText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMobuItemBase_GetInteractionText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMobuItemBase_GetInteractionText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMobuItemBase_GetInteractionText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMobuItemBase_GetInteractionText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMobuItemBase, nullptr, "GetInteractionText", nullptr, nullptr, Z_Construct_UFunction_AMobuItemBase_GetInteractionText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMobuItemBase_GetInteractionText_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMobuItemBase_GetInteractionText_Statics::MobuItemBase_eventGetInteractionText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMobuItemBase_GetInteractionText_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMobuItemBase_GetInteractionText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMobuItemBase_GetInteractionText_Statics::MobuItemBase_eventGetInteractionText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMobuItemBase_GetInteractionText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMobuItemBase_GetInteractionText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMobuItemBase::execGetInteractionText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetInteractionText();
	P_NATIVE_END;
}
// End Class AMobuItemBase Function GetInteractionText

// Begin Class AMobuItemBase Function GetInteractionTextAttach
struct Z_Construct_UFunction_AMobuItemBase_GetInteractionTextAttach_Statics
{
	struct MobuItemBase_eventGetInteractionTextAttach_Parms
	{
		USceneComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Interaction" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Item/MobuItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMobuItemBase_GetInteractionTextAttach_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobuItemBase_eventGetInteractionTextAttach_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMobuItemBase_GetInteractionTextAttach_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMobuItemBase_GetInteractionTextAttach_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMobuItemBase_GetInteractionTextAttach_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMobuItemBase_GetInteractionTextAttach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMobuItemBase, nullptr, "GetInteractionTextAttach", nullptr, nullptr, Z_Construct_UFunction_AMobuItemBase_GetInteractionTextAttach_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMobuItemBase_GetInteractionTextAttach_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMobuItemBase_GetInteractionTextAttach_Statics::MobuItemBase_eventGetInteractionTextAttach_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMobuItemBase_GetInteractionTextAttach_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMobuItemBase_GetInteractionTextAttach_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMobuItemBase_GetInteractionTextAttach_Statics::MobuItemBase_eventGetInteractionTextAttach_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMobuItemBase_GetInteractionTextAttach()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMobuItemBase_GetInteractionTextAttach_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMobuItemBase::execGetInteractionTextAttach)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->GetInteractionTextAttach();
	P_NATIVE_END;
}
// End Class AMobuItemBase Function GetInteractionTextAttach

// Begin Class AMobuItemBase
void AMobuItemBase::StaticRegisterNativesAMobuItemBase()
{
	UClass* Class = AMobuItemBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInteractionText", &AMobuItemBase::execGetInteractionText },
		{ "GetInteractionTextAttach", &AMobuItemBase::execGetInteractionTextAttach },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMobuItemBase);
UClass* Z_Construct_UClass_AMobuItemBase_NoRegister()
{
	return AMobuItemBase::StaticClass();
}
struct Z_Construct_UClass_AMobuItemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Item/MobuItemBase.h" },
		{ "ModuleRelativePath", "Public/Item/MobuItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Item/MobuItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextAttach_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Item/MobuItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionRange_MetaData[] = {
		{ "Category", "MobuItemBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Item/MobuItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InteractionText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextAttach;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMobuItemBase_GetInteractionText, "GetInteractionText" }, // 2902596695
		{ &Z_Construct_UFunction_AMobuItemBase_GetInteractionTextAttach, "GetInteractionTextAttach" }, // 210027760
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMobuItemBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AMobuItemBase_Statics::NewProp_InteractionText = { "InteractionText", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMobuItemBase, InteractionText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionText_MetaData), NewProp_InteractionText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMobuItemBase_Statics::NewProp_TextAttach = { "TextAttach", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMobuItemBase, TextAttach), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextAttach_MetaData), NewProp_TextAttach_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMobuItemBase_Statics::NewProp_InteractionRange = { "InteractionRange", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMobuItemBase, InteractionRange), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionRange_MetaData), NewProp_InteractionRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMobuItemBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobuItemBase_Statics::NewProp_InteractionText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobuItemBase_Statics::NewProp_TextAttach,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobuItemBase_Statics::NewProp_InteractionRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMobuItemBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMobuItemBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MobuSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMobuItemBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMobuItemBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMobuInterface_NoRegister, (int32)VTABLE_OFFSET(AMobuItemBase, IMobuInterface), false },  // 3269873130
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMobuItemBase_Statics::ClassParams = {
	&AMobuItemBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMobuItemBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMobuItemBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMobuItemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMobuItemBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMobuItemBase()
{
	if (!Z_Registration_Info_UClass_AMobuItemBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMobuItemBase.OuterSingleton, Z_Construct_UClass_AMobuItemBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMobuItemBase.OuterSingleton;
}
template<> MOBUSYSTEM_API UClass* StaticClass<AMobuItemBase>()
{
	return AMobuItemBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMobuItemBase);
AMobuItemBase::~AMobuItemBase() {}
// End Class AMobuItemBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Item_MobuItemBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMobuItemBase, AMobuItemBase::StaticClass, TEXT("AMobuItemBase"), &Z_Registration_Info_UClass_AMobuItemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMobuItemBase), 4255867714U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Item_MobuItemBase_h_2199826540(TEXT("/Script/MobuSystem"),
	Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Item_MobuItemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Item_MobuItemBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
