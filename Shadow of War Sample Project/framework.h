#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers.
// - Windows Header Files
#include <windows.h>

// - Middle Earth Mod Loader
// #define MODLOADER_NO_MENU			// Disables the mod menu interface and removes the ImGui dependency from the plugin. Uncomment if you don't want to use ImGui.
#include <modloaderapi.h>

// - Misc
#include <thread>