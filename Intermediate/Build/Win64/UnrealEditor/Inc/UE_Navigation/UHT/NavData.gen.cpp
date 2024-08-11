// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Navigation/Public/NavData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UE_NAVIGATION_API UClass* Z_Construct_UClass_UNavData();
UE_NAVIGATION_API UClass* Z_Construct_UClass_UNavData_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_Navigation();
// End Cross Module References

// Begin Class UNavData
void UNavData::StaticRegisterNativesUNavData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavData);
UClass* Z_Construct_UClass_UNavData_NoRegister()
{
	return UNavData::StaticClass();
}
struct Z_Construct_UClass_UNavData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NavData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NavData.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNavData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_Navigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavData_Statics::ClassParams = {
	&UNavData::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavData_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavData()
{
	if (!Z_Registration_Info_UClass_UNavData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavData.OuterSingleton, Z_Construct_UClass_UNavData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavData.OuterSingleton;
}
template<> UE_NAVIGATION_API UClass* StaticClass<UNavData>()
{
	return UNavData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavData);
// End Class UNavData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Study_Plugins_UE_Navigation_Plugin_Source_UE_Navigation_Public_NavData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavData, UNavData::StaticClass, TEXT("UNavData"), &Z_Registration_Info_UClass_UNavData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavData), 1504765629U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Study_Plugins_UE_Navigation_Plugin_Source_UE_Navigation_Public_NavData_h_2394430883(TEXT("/Script/UE_Navigation"),
	Z_CompiledInDeferFile_FID_UE_Study_Plugins_UE_Navigation_Plugin_Source_UE_Navigation_Public_NavData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Study_Plugins_UE_Navigation_Plugin_Source_UE_Navigation_Public_NavData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
