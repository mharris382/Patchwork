// Copyright (c) 2025 Max Harris
// Published by Procedural Architect

#include "ProceduralPipes.h"

#define LOCTEXT_NAMESPACE "FProceduralPipesModule"

void FProceduralPipesModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FProceduralPipesModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FProceduralPipesModule, ProceduralPipes)