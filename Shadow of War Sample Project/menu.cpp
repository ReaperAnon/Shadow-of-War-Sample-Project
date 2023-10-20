#include "menu.h"
#include "settings.h"

void Menu::ShowSettings()
{
	ImGui::Text("Sample Text");

	ImGui::Spacing();

	ImGui::Checkbox("Sample Checkbox", &Settings::sampleBool);

	ImGui::Spacing();

	ImGui::Text("Sample Integer Slider");
	ImGui::SliderInt("##sliderInt", &Settings::sampleInt, 0, 100, "int: %d", ImGuiSliderFlags_AlwaysClamp);

	ImGui::Spacing();

	ImGui::Text("Sample Float Slider");
	ImGui::SliderFloat("##sliderFloat", &Settings::sampleFloat, 0, 100, "float: %.2f", ImGuiSliderFlags_AlwaysClamp);
}

void Menu::ShowImGuiDemoWindow()
{
	ImGui::ShowDemoWindow();
}
