// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MobuSystem/Public/Interface/MobuInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMobuInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOBUSYSTEM_API UClass* Z_Construct_UClass_UMobuInterface();
MOBUSYSTEM_API UClass* Z_Construct_UClass_UMobuInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MobuSystem();
// End Cross Module References

// Begin Interface UMobuInterface Function OnMobuInteract
void IMobuInterface::OnMobuInteract()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnMobuInteract instead.");
}
static FName NAME_UMobuInterface_OnMobuInteract = FName(TEXT("OnMobuInteract"));
void IMobuInterface::Execute_OnMobuInteract(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMobuInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMobuInterface_OnMobuInteract);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMobuInterface*)(O->GetNativeInterfaceAddress(UMobuInterface::StaticClass())))
	{
		I->OnMobuInteract_Implementation();
	}
}
struct Z_Construct_UFunction_UMobuInterface_OnMobuInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add interface functions to this class. This is the class that will be inherited to implement this interface.\n" },
#endif
		{ "ModuleRelativePath", "Public/Interface/MobuInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add interface functions to this class. This is the class that will be inherited to implement this interface." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobuInterface_OnMobuInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobuInterface, nullptr, "OnMobuInteract", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobuInterface_OnMobuInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMobuInterface_OnMobuInteract_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMobuInterface_OnMobuInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMobuInterface_OnMobuInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMobuInterface::execOnMobuInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMobuInteract_Implementation();
	P_NATIVE_END;
}
// End Interface UMobuInterface Function OnMobuInteract

// Begin Interface UMobuInterface Function OnMobuInteractionRangeEnter
void IMobuInterface::OnMobuInteractionRangeEnter()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnMobuInteractionRangeEnter instead.");
}
static FName NAME_UMobuInterface_OnMobuInteractionRangeEnter = FName(TEXT("OnMobuInteractionRangeEnter"));
void IMobuInterface::Execute_OnMobuInteractionRangeEnter(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMobuInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMobuInterface_OnMobuInteractionRangeEnter);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMobuInterface*)(O->GetNativeInterfaceAddress(UMobuInterface::StaticClass())))
	{
		I->OnMobuInteractionRangeEnter_Implementation();
	}
}
struct Z_Construct_UFunction_UMobuInterface_OnMobuInteractionRangeEnter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/MobuInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobuInterface_OnMobuInteractionRangeEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobuInterface, nullptr, "OnMobuInteractionRangeEnter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobuInterface_OnMobuInteractionRangeEnter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMobuInterface_OnMobuInteractionRangeEnter_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMobuInterface_OnMobuInteractionRangeEnter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMobuInterface_OnMobuInteractionRangeEnter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMobuInterface::execOnMobuInteractionRangeEnter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMobuInteractionRangeEnter_Implementation();
	P_NATIVE_END;
}
// End Interface UMobuInterface Function OnMobuInteractionRangeEnter

// Begin Interface UMobuInterface Function OnMobuInteractionRangeExit
void IMobuInterface::OnMobuInteractionRangeExit()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnMobuInteractionRangeExit instead.");
}
static FName NAME_UMobuInterface_OnMobuInteractionRangeExit = FName(TEXT("OnMobuInteractionRangeExit"));
void IMobuInterface::Execute_OnMobuInteractionRangeExit(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMobuInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMobuInterface_OnMobuInteractionRangeExit);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMobuInterface*)(O->GetNativeInterfaceAddress(UMobuInterface::StaticClass())))
	{
		I->OnMobuInteractionRangeExit_Implementation();
	}
}
struct Z_Construct_UFunction_UMobuInterface_OnMobuInteractionRangeExit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/MobuInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobuInterface_OnMobuInteractionRangeExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobuInterface, nullptr, "OnMobuInteractionRangeExit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobuInterface_OnMobuInteractionRangeExit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMobuInterface_OnMobuInteractionRangeExit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMobuInterface_OnMobuInteractionRangeExit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMobuInterface_OnMobuInteractionRangeExit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMobuInterface::execOnMobuInteractionRangeExit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMobuInteractionRangeExit_Implementation();
	P_NATIVE_END;
}
// End Interface UMobuInterface Function OnMobuInteractionRangeExit

// Begin Interface UMobuInterface
void UMobuInterface::StaticRegisterNativesUMobuInterface()
{
	UClass* Class = UMobuInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnMobuInteract", &IMobuInterface::execOnMobuInteract },
		{ "OnMobuInteractionRangeEnter", &IMobuInterface::execOnMobuInteractionRangeEnter },
		{ "OnMobuInteractionRangeExit", &IMobuInterface::execOnMobuInteractionRangeExit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMobuInterface);
UClass* Z_Construct_UClass_UMobuInterface_NoRegister()
{
	return UMobuInterface::StaticClass();
}
struct Z_Construct_UClass_UMobuInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/MobuInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMobuInterface_OnMobuInteract, "OnMobuInteract" }, // 1082123607
		{ &Z_Construct_UFunction_UMobuInterface_OnMobuInteractionRangeEnter, "OnMobuInteractionRangeEnter" }, // 3481145858
		{ &Z_Construct_UFunction_UMobuInterface_OnMobuInteractionRangeExit, "OnMobuInteractionRangeExit" }, // 3949364646
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMobuInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMobuInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MobuSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMobuInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMobuInterface_Statics::ClassParams = {
	&UMobuInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMobuInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMobuInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMobuInterface()
{
	if (!Z_Registration_Info_UClass_UMobuInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMobuInterface.OuterSingleton, Z_Construct_UClass_UMobuInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMobuInterface.OuterSingleton;
}
template<> MOBUSYSTEM_API UClass* StaticClass<UMobuInterface>()
{
	return UMobuInterface::StaticClass();
}
UMobuInterface::UMobuInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMobuInterface);
UMobuInterface::~UMobuInterface() {}
// End Interface UMobuInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Interface_MobuInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMobuInterface, UMobuInterface::StaticClass, TEXT("UMobuInterface"), &Z_Registration_Info_UClass_UMobuInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMobuInterface), 3269873130U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Interface_MobuInterface_h_1555699235(TEXT("/Script/MobuSystem"),
	Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Interface_MobuInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Interface_MobuInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
