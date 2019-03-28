// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ITextureManagerModule.h"

#include "Texture2D/ITexture2DManager.h"
#include "TextureRenderTarget/ITextureRenderTargetManager.h"
#include "CustomShaderTexture/ICustomShaderTextureManager.h"

class FTextureManagerModule : public ITextureManagerModule
{
public:
	FTextureManagerModule();
	virtual ~FTextureManagerModule();


	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	/** ITextureManagerModule implementation */
	virtual bool IsModuleInitialized() const override { return bIsModuleInitialized; }
	virtual ITexture2DManager* GetTexture2DMgr() const override { return Texture2DMgr; }
	virtual ITextureRenderTargetManager* GetTextureRenderTargetMgr() const override { return TextureRenderTargetMgr; }
	virtual ICustomShaderTextureManager* GetCustomShaderTextureMgr() const override { return CustomShaderTextureMgr; }

private:
	bool bIsModuleInitialized = false;

	// DisplayCluster subsystems
	ITexture2DManager*  	 		Texture2DMgr = nullptr;
	ITextureRenderTargetManager*    TextureRenderTargetMgr = nullptr;
	ICustomShaderTextureManager*    CustomShaderTextureMgr = nullptr;
};
