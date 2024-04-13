#pragma once

#include <ISmmPlugin.h>


class AngelS2 : public ISmmPlugin, public IMetamodListener
{
	// ISmmPlugin
	bool Load(PluginId id, ISmmAPI* ismm, char* error, size_t maxlength, bool late);
	inline const char* GetAuthor() { return "[-=KILL MAN=-]"; }
	inline const char* GetName() { return "AngelS2Strike"; }
	inline const char* GetDescription() { return "A plugin that adds AngelScript as a server plugins engine"; }
	inline const char* GetURL() { return "https://github.com/RusJJ/AngelS2Strike"; }
	inline const char* GetLicense() { return "MIT"; }
	inline const char* GetVersion() { return "v1.0"; }
	inline const char* GetDate() { return ""; }
	inline const char* GetLogTag() { return "AngelS2"; }
};
extern AngelS2 gPlugin;
extern PluginId gPluginId;
extern ISmmAPI* api;