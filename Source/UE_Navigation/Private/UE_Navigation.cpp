// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_Navigation.h"

#define LOCTEXT_NAMESPACE "FUE_NavigationModule"

void FUE_NavigationModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FUE_NavigationModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FUE_NavigationModule, UE_Navigation)