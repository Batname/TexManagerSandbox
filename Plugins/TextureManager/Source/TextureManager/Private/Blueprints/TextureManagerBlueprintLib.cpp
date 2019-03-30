// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Blueprints/TextureManagerBlueprintLib.h"
#include "Blueprints/ITextureManagerBlueprintAPI.h"
#include "TextureManagerBlueprintAPIImpl.h"
#include "UObject/Package.h"


UTextureManagerBlueprintLib::UTextureManagerBlueprintLib(class FObjectInitializer const & ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UTextureManagerBlueprintLib::GetAPI(TScriptInterface<ITextureManagerBlueprintAPI>& OutAPI)
{
	static UTextureManagerBlueprintAPIImpl* Obj = NewObject<UTextureManagerBlueprintAPIImpl>(GetTransientPackage(), NAME_None, RF_MarkAsRootSet);
	OutAPI = Obj;
}
