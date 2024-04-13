#include <mm_plugin.h>

AngelS2 gPlugin;
PluginId gPluginId;
ISmmAPI* api;
//IVEngineServer* engine;

class CGameEntitySystem;
CGameEntitySystem* GameEntitySystem()
{
	return NULL;
}

bool AngelS2::Load(PluginId id, ISmmAPI* ismm, char* error, size_t maxlength, bool late)
{
	gPluginId = id;
	api = ismm;

	ConColorMsg(Color(25, 25, 255, 200), "monke");

	//GET_V_IFACE_CURRENT(GetEngineFactory, engine, IVEngineServer, INTERFACEVERSION_VENGINESERVER);

	return true;
}