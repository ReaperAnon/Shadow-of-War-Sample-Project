#include "mod.h"

MODLOADERAPI OnRegisterLogAPI(ModLoader::LogAPI* api)
{
	ModLoader::LogAPI::Init(api);
}

MODLOADERAPI OnRegisterMenuAPI(ModLoader::MenuAPI* api)
{
	ModLoader::MenuAPI::Init(api);
}

MODLOADERAPI OnPluginLoad(ModLoader::PluginAPI* api)
{
	api->RegisterPlugin("SoW Sample Plugin", "SamplePlugin", { 1, 0, 0 }, "Test plugin. Registers a simple menu with a couple options.");

	std::thread(Mod::InitalizeMod).detach();
}

MODLOADERAPI OnPluginUnload()
{
	Mod::DisableMod();
}