// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprints/ITextureManagerBlueprintAPI.h"
#include "TextureManagerBlueprintAPIImpl.generated.h"


/**
 * Blueprint API interface implementation
 */
UCLASS()
class TEXTUREMANAGER_API UTextureManagerBlueprintAPIImpl
	: public UObject
	, public ITextureManagerBlueprintAPI
{
	GENERATED_BODY()

public:
	/** Return if the module has been initialized. */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is module initialized"), Category = "TextureManager")
	virtual bool IsModuleInitialized() override;

};