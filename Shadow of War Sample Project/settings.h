#pragma once

#include "framework.h"

namespace Settings
{
	extern bool sampleBool;
	extern int sampleInt;
	extern float sampleFloat;

	void ReadSettings();

	void SetDefaultSettings();

	void SaveSettings();
}