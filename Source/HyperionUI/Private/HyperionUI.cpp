// Copyright Epic Games, Inc. All Rights Reserved.

#include "HyperionUI.h"

#define LOCTEXT_NAMESPACE "FHyperionUIModule"

DEFINE_LOG_CATEGORY_STATIC(LogHyperionUI, All, All);

#define LOG(LogString)	UE_LOG(LogHyperionUI, Display, TEXT("%s"), *FString(LogString));
#define LOG_WARNING(LogString)	UE_LOG(LogHyperionUI, Warning, TEXT("%s"), *FString(LogString));
#define LOG_ERROR(LogString)	UE_LOG(LogHyperionUI, Error, TEXT("%s"), *FString(LogString));

void FHyperionUIModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	LOG("Initializing HyperionUI.");
}

void FHyperionUIModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	LOG("Shutting down HyperionUI.");
}

#undef LOG
#undef LOG_WARNING
#undef LOG_ERROR
#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FHyperionUIModule, HyperionUI)