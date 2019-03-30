#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Blueprints/ITextureManagerBlueprintAPI.h"
#include "TextureManagerBlueprintLib.generated.h"


/**
 * Blueprint API function library
 */
UCLASS()
class UTextureManagerBlueprintLib
	: public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
	/** Return Display Cluster API interface. */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Display Cluster Plugin API"), Category = "TextureManager")
	static void GetAPI(TScriptInterface<ITextureManagerBlueprintAPI>& OutAPI);
};
