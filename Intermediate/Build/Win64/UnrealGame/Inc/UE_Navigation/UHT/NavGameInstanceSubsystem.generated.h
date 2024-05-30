// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavGameInstanceSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef UE_NAVIGATION_NavGameInstanceSubsystem_generated_h
#error "NavGameInstanceSubsystem.generated.h already included, missing '#pragma once' in NavGameInstanceSubsystem.h"
#endif
#define UE_NAVIGATION_NavGameInstanceSubsystem_generated_h

#define FID_UE_Plugins_UE_Navigation_HostProject_Plugins_UE_Navigation_Source_UE_Navigation_Public_NavGameInstanceSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveAllTargets); \
	DECLARE_FUNCTION(execRemoveTarget); \
	DECLARE_FUNCTION(execGetTargetNum); \
	DECLARE_FUNCTION(execAddTarget); \
	DECLARE_FUNCTION(execGetTargets);


#define FID_UE_Plugins_UE_Navigation_HostProject_Plugins_UE_Navigation_Source_UE_Navigation_Public_NavGameInstanceSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavGameInstanceSubsystem(); \
	friend struct Z_Construct_UClass_UNavGameInstanceSubsystem_Statics; \
public: \
	DECLARE_CLASS(UNavGameInstanceSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE_Navigation"), NO_API) \
	DECLARE_SERIALIZER(UNavGameInstanceSubsystem)


#define FID_UE_Plugins_UE_Navigation_HostProject_Plugins_UE_Navigation_Source_UE_Navigation_Public_NavGameInstanceSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavGameInstanceSubsystem(UNavGameInstanceSubsystem&&); \
	UNavGameInstanceSubsystem(const UNavGameInstanceSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavGameInstanceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavGameInstanceSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNavGameInstanceSubsystem)


#define FID_UE_Plugins_UE_Navigation_HostProject_Plugins_UE_Navigation_Source_UE_Navigation_Public_NavGameInstanceSubsystem_h_16_PROLOG
#define FID_UE_Plugins_UE_Navigation_HostProject_Plugins_UE_Navigation_Source_UE_Navigation_Public_NavGameInstanceSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Plugins_UE_Navigation_HostProject_Plugins_UE_Navigation_Source_UE_Navigation_Public_NavGameInstanceSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Plugins_UE_Navigation_HostProject_Plugins_UE_Navigation_Source_UE_Navigation_Public_NavGameInstanceSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_UE_Plugins_UE_Navigation_HostProject_Plugins_UE_Navigation_Source_UE_Navigation_Public_NavGameInstanceSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_NAVIGATION_API UClass* StaticClass<class UNavGameInstanceSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Plugins_UE_Navigation_HostProject_Plugins_UE_Navigation_Source_UE_Navigation_Public_NavGameInstanceSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
