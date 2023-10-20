#include "settings.h"

bool Settings::sampleBool = true;
int Settings::sampleInt = 10;
float Settings::sampleFloat = 1.25f;


void Settings::ReadSettings()
{
	// Read the settings from a file into the settings variables in any way you like.
}

void Settings::SetDefaultSettings()
{
	// Set the settings variables to their default values.
	sampleBool = true;
	sampleInt = 10;
	sampleFloat = 1.25f;
}

void Settings::SaveSettings()
{
	// Save the settings to a file that you'll be reading from in ReadSettings() the next time the plugin is loaded.
}
