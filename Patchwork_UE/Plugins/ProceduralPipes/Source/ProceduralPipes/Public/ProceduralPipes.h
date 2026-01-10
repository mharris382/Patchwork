// Copyright (c) 2025 Max Harris
// Published by Procedural Architect

#pragma once

#include "Modules/ModuleManager.h"

class FProceduralPipesModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
