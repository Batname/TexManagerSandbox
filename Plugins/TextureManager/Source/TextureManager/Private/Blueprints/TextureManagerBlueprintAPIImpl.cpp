// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TextureManagerBlueprintAPIImpl.h"

#include "ITextureManagerModule.h"


/** Return if the module has been initialized. */
bool UTextureManagerBlueprintAPIImpl::IsModuleInitialized()
{
	return ITextureManagerModule::Get().IsModuleInitialized();
}