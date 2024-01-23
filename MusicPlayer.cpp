#include "MusicPlayer.hpp"
#include <hello_imgui/hello_imgui.h>
#include <iostream>
void ShowWindow()
{
    ImGui::Begin("Main");
    ImGui::Text("Hello MusicPlayer!");
    ImGui::End();
}
int main()
{
    HelloImGui::RunnerParams p;
    p.appWindowParams.windowGeometry.size = {1400, 1200};
    p.appWindowParams.windowGeometry.windowSizeMeasureMode = HelloImGui::WindowSizeMeasureMode::ScreenCoords;
    p.appWindowParams.windowTitle = "MusicPlayer";
    p.callbacks.LoadAdditionalFonts = []()
    {
        ImGui::GetIO().Fonts->AddFontFromFileTTF("assets/微软雅黑.ttf", 25.0f, nullptr, ImGui::GetIO().Fonts->GetGlyphRangesChineseFull());
    };
    p.callbacks.ShowGui = ShowWindow;
    HelloImGui::Run(p);
    return 0;
}
