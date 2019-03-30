#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ITextureManagerBlueprintAPI.generated.h"

UINTERFACE(meta = (CannotImplementInterfaceInBlueprint))
class TEXTUREMANAGER_API UTextureManagerBlueprintAPI : public UInterface
{
	GENERATED_BODY()
};

class TEXTUREMANAGER_API ITextureManagerBlueprintAPI
{
	GENERATED_BODY()
public:
	/** Return if the module has been initialized. */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is module initialized"), Category = "TextureManager")
	virtual bool IsModuleInitialized() = 0;

};