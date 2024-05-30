// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavigationComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNavData;
#ifdef UE_NAVIGATION_NavigationComponent_generated_h
#error "NavigationComponent.generated.h already included, missing '#pragma once' in NavigationComponent.h"
#endif
#define UE_NAVIGATION_NavigationComponent_generated_h

#define FID_UE_Plugins_UE_Navigation_HostProject_Plugins_UE_Navigation_Source_UE_Navigation_Public_NavigationComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllNavDatas);


#define FID_UE_Plugins_UE_Navigation_HostProject_Plugins_UE_Navigation_Source_UE_Navigation_Public_NavigationComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationComponent(); \
	friend struct Z_Construct_UClass_UNavigationComponent_Statics; \
public: \
	DECLARE_CLASS(UNavigationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_Navigation"), NO_API) \
	DECLARE_SERIALIZER(UNavigationComponent)


#define FID_UE_Plugins_UE_Navigation_HostProject_Plugins_UE_Navigation_Source_UE_Navigation_Public_NavigationComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavigationComponent(UNavigationComponent&&); \
	UNavigationComponent(const UNavigationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNavigationComponent)


#define FID_UE_Plugins_UE_Navigation_HostProject_Plugins_UE_Navigation_Source_UE_Navigation_Public_NavigationComponent_h_16_PROLOG
#define FID_UE_Plugins_UE_Navigation_HostProject_Plugins_UE_Navigation_Source_UE_Navigation_Public_NavigationComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Plugins_UE_Navigation_HostProject_Plugins_UE_Navigation_Source_UE_Navigation_Public_NavigationComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Plugins_UE_Navigation_HostProject_Plugins_UE_Navigation_Source_UE_Navigation_Public_NavigationComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_UE_Plugins_UE_Navigation_HostProject_Plugins_UE_Navigation_Source_UE_Navigation_Public_NavigationComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_NAVIGATION_API UClass* StaticClass<class UNavigationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Plugins_UE_Navigation_HostProject_Plugins_UE_Navigation_Source_UE_Navigation_Public_NavigationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
