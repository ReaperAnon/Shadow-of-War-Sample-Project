#include "mod.h"
#include "menu.h"
#include "settings.h"

void Mod::InitalizeMod()
{
	// Try to find the required addresses every half a second after the mod is loaded.
	while (!FindAddresses())
		Sleep(500);

	ModLoader::LogAPI::GetSingleton()->Log("Addresses found.");

	Settings::ReadSettings();

	// Register the mod configuration menu entry.
	ModLoader::LogAPI::GetSingleton()->Log("Registering mod menu entry.");
	ModLoader::MenuAPI::GetSingleton()->RegisterMenuEntry(Menu::ShowSettings, Settings::SetDefaultSettings, Settings::SaveSettings);

	// Register an additional custom menu, in this case the ImGui demo menu.
	ModLoader::LogAPI::GetSingleton()->Log("Registering additional menu.");
	ModLoader::MenuAPI::GetSingleton()->RegisterDrawCallEntry(Menu::ShowImGuiDemoWindow);

	// Create the hooks and apply the desired changes to the game and print whether we succeeded or not in the log.
	ModLoader::LogAPI::GetSingleton()->Log("%s", CreateHooks() ? "Loading finished successfully." : "Loading failed.");
}

void Mod::DisableMod()
{
	// Disable the mod and set the game back to the state you started with. For when a user unloads a mod mid-game.
}

bool Mod::FindAddresses()
{
	// Find the things you want to modify here and return true once found.
	return true;
}

bool Mod::CreateHooks()
{
	// Create the hooks or whatever else you'd like to do once the addresses have been found.
	return true;
}
