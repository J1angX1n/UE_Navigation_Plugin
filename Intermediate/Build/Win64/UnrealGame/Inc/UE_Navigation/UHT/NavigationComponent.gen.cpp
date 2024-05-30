// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Navigation/Public/NavigationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UE_NAVIGATION_API UClass* Z_Construct_UClass_UNavData_NoRegister();
UE_NAVIGATION_API UClass* Z_Construct_UClass_UNavigationComponent();
UE_NAVIGATION_API UClass* Z_Construct_UClass_UNavigationComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_Navigation();
// End Cross Module References

// Begin Class UNavigationComponent Function GetAllNavDatas
struct Z_Construct_UFunction_UNavigationComponent_GetAllNavDatas_Statics
{
	struct NavigationComponent_eventGetAllNavDatas_Parms
	{
		TArray<UNavData*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NavComponent" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/NavigationComponent.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationComponent_GetAllNavDatas_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNavData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNavigationComponent_GetAllNavDatas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationComponent_eventGetAllNavDatas_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationComponent_GetAllNavDatas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationComponent_GetAllNavDatas_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationComponent_GetAllNavDatas_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationComponent_GetAllNavDatas_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationComponent_GetAllNavDatas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationComponent, nullptr, "GetAllNavDatas", nullptr, nullptr, Z_Construct_UFunction_UNavigationComponent_GetAllNavDatas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationComponent_GetAllNavDatas_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavigationComponent_GetAllNavDatas_Statics::NavigationComponent_eventGetAllNavDatas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationComponent_GetAllNavDatas_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationComponent_GetAllNavDatas_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavigationComponent_GetAllNavDatas_Statics::NavigationComponent_eventGetAllNavDatas_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigationComponent_GetAllNavDatas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationComponent_GetAllNavDatas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationComponent::execGetAllNavDatas)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNavData*>*)Z_Param__Result=P_THIS->GetAllNavDatas();
	P_NATIVE_END;
}
// End Class UNavigationComponent Function GetAllNavDatas

// Begin Class UNavigationComponent
void UNavigationComponent::StaticRegisterNativesUNavigationComponent()
{
	UClass* Class = UNavigationComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllNavDatas", &UNavigationComponent::execGetAllNavDatas },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationComponent);
UClass* Z_Construct_UClass_UNavigationComponent_NoRegister()
{
	return UNavigationComponent::StaticClass();
}
struct Z_Construct_UClass_UNavigationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "NavigationComponent.h" },
		{ "ModuleRelativePath", "Public/NavigationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[] = {
		{ "Category", "NavComponent" },
		{ "ModuleRelativePath", "Public/NavigationComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavigationComponent_GetAllNavDatas, "GetAllNavDatas" }, // 3976909141
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNavigationComponent_Statics::NewProp_Enable_SetBit(void* Obj)
{
	((UNavigationComponent*)Obj)->Enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationComponent_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNavigationComponent), &Z_Construct_UClass_UNavigationComponent_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enable_MetaData), NewProp_Enable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationComponent_Statics::NewProp_Enable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavigationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_Navigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationComponent_Statics::ClassParams = {
	&UNavigationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNavigationComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavigationComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavigationComponent()
{
	if (!Z_Registration_Info_UClass_UNavigationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationComponent.OuterSingleton, Z_Construct_UClass_UNavigationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavigationComponent.OuterSingleton;
}
template<> UE_NAVIGATION_API UClass* StaticClass<UNavigationComponent>()
{
	return UNavigationComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationComponent);
// End Class UNavigationComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Plugins_UE_Navigation_HostProject_Plugins_UE_Navigation_Source_UE_Navigation_Public_NavigationComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationComponent, UNavigationComponent::StaticClass, TEXT("UNavigationComponent"), &Z_Registration_Info_UClass_UNavigationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationComponent), 1201940980U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Plugins_UE_Navigation_HostProject_Plugins_UE_Navigation_Source_UE_Navigation_Public_NavigationComponent_h_3549400104(TEXT("/Script/UE_Navigation"),
	Z_CompiledInDeferFile_FID_UE_Plugins_UE_Navigation_HostProject_Plugins_UE_Navigation_Source_UE_Navigation_Public_NavigationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Plugins_UE_Navigation_HostProject_Plugins_UE_Navigation_Source_UE_Navigation_Public_NavigationComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
