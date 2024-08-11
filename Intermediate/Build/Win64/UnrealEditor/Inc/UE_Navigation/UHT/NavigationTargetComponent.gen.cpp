// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Navigation/Public/NavigationTargetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationTargetComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UE_NAVIGATION_API UClass* Z_Construct_UClass_UNavData_NoRegister();
UE_NAVIGATION_API UClass* Z_Construct_UClass_UNavigationTargetComponent();
UE_NAVIGATION_API UClass* Z_Construct_UClass_UNavigationTargetComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_Navigation();
// End Cross Module References

// Begin Class UNavigationTargetComponent
void UNavigationTargetComponent::StaticRegisterNativesUNavigationTargetComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationTargetComponent);
UClass* Z_Construct_UClass_UNavigationTargetComponent_NoRegister()
{
	return UNavigationTargetComponent::StaticClass();
}
struct Z_Construct_UClass_UNavigationTargetComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "NavigationTargetComponent.h" },
		{ "ModuleRelativePath", "Public/NavigationTargetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[] = {
		{ "Category", "NavTarget" },
		{ "ModuleRelativePath", "Public/NavigationTargetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Diff_MetaData[] = {
		{ "Category", "NavTarget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xeb\xa3\xac\xef\xbf\xbd\xef\xbf\xbd\xca\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xbf\xc5\xbe\xde\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbe\xef\xbf\xbd\xc4\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xaa\xef\xbf\xbd\xef\xbf\xbd\xc8\xa5\xef\xbf\xbd\xeb\xbe\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/NavigationTargetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xeb\xa3\xac\xef\xbf\xbd\xef\xbf\xbd\xca\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xbf\xc5\xbe\xde\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbe\xef\xbf\xbd\xc4\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xaa\xef\xbf\xbd\xef\xbf\xbd\xc8\xa5\xef\xbf\xbd\xeb\xbe\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetInside_MetaData[] = {
		{ "Category", "NavTarget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xc4\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbe\xef\xbf\xbd\xc4\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavigationTargetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbe\xef\xbf\xbd\xc4\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetOutside_MetaData[] = {
		{ "Category", "NavTarget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xc4\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbe\xef\xbf\xbd\xc4\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavigationTargetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbe\xef\xbf\xbd\xc4\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_NavData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/NavigationTargetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_Enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Diff;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetInside;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetOutside;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m_NavData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationTargetComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNavigationTargetComponent_Statics::NewProp_Enable_SetBit(void* Obj)
{
	((UNavigationTargetComponent*)Obj)->Enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationTargetComponent_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNavigationTargetComponent), &Z_Construct_UClass_UNavigationTargetComponent_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enable_MetaData), NewProp_Enable_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UNavigationTargetComponent_Statics::NewProp_Diff = { "Diff", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationTargetComponent, Diff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Diff_MetaData), NewProp_Diff_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavigationTargetComponent_Statics::NewProp_WidgetInside = { "WidgetInside", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationTargetComponent, WidgetInside), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetInside_MetaData), NewProp_WidgetInside_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavigationTargetComponent_Statics::NewProp_WidgetOutside = { "WidgetOutside", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationTargetComponent, WidgetOutside), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetOutside_MetaData), NewProp_WidgetOutside_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavigationTargetComponent_Statics::NewProp_m_NavData = { "m_NavData", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationTargetComponent, m_NavData), Z_Construct_UClass_UNavData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_NavData_MetaData), NewProp_m_NavData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationTargetComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationTargetComponent_Statics::NewProp_Enable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationTargetComponent_Statics::NewProp_Diff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationTargetComponent_Statics::NewProp_WidgetInside,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationTargetComponent_Statics::NewProp_WidgetOutside,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationTargetComponent_Statics::NewProp_m_NavData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationTargetComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavigationTargetComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_Navigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationTargetComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationTargetComponent_Statics::ClassParams = {
	&UNavigationTargetComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNavigationTargetComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationTargetComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationTargetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavigationTargetComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavigationTargetComponent()
{
	if (!Z_Registration_Info_UClass_UNavigationTargetComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationTargetComponent.OuterSingleton, Z_Construct_UClass_UNavigationTargetComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavigationTargetComponent.OuterSingleton;
}
template<> UE_NAVIGATION_API UClass* StaticClass<UNavigationTargetComponent>()
{
	return UNavigationTargetComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationTargetComponent);
UNavigationTargetComponent::~UNavigationTargetComponent() {}
// End Class UNavigationTargetComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Study_Plugins_UE_Navigation_Plugin_Source_UE_Navigation_Public_NavigationTargetComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationTargetComponent, UNavigationTargetComponent::StaticClass, TEXT("UNavigationTargetComponent"), &Z_Registration_Info_UClass_UNavigationTargetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationTargetComponent), 290679020U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Study_Plugins_UE_Navigation_Plugin_Source_UE_Navigation_Public_NavigationTargetComponent_h_2314447480(TEXT("/Script/UE_Navigation"),
	Z_CompiledInDeferFile_FID_UE_Study_Plugins_UE_Navigation_Plugin_Source_UE_Navigation_Public_NavigationTargetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Study_Plugins_UE_Navigation_Plugin_Source_UE_Navigation_Public_NavigationTargetComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
