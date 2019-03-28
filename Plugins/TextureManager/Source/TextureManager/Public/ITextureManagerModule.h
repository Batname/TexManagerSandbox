#pragma once

#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"

struct ITexture2DManager;
struct ITextureRenderTargetManager;
struct ICustomShaderTextureManager;


/**
 * Public module interface
 */
struct ITextureManagerModule : public IModuleInterface
{
	static constexpr auto ModuleName = "TextureManagerModule";

	virtual ~ITextureManagerModule() = 0
	{ }

	/**
	* Singleton-like access to this module's interface.  This is just for convenience!
	* Beware of calling this during the shutdown phase, though.  Your module might have been unloaded already.
	*
	* @return Returns singleton instance, loading the module on demand if needed
	*/
	static inline ITextureManagerModule& Get()
	{
		return FModuleManager::LoadModuleChecked<ITextureManagerModule>(ITextureManagerModule::ModuleName);
	}

	/**
	* Checks to see if this module is loaded and ready.  It is only valid to call Get() if IsAvailable() returns true.
	*
	* @return True if the module is loaded and ready to use
	*/
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded(ITextureManagerModule::ModuleName);
	}


	/**
	* Checks if the module has been initialized.
	*
	* @return Is initialized
	*/
	virtual bool IsModuleInitialized() const = 0;

	virtual ITexture2DManager* GetTexture2DMgr() const = 0;

	virtual ITextureRenderTargetManager* GetTextureRenderTargetMgr() const = 0;

	virtual ICustomShaderTextureManager* GetCustomShaderTextureMgr() const = 0;
};

