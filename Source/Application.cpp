#include "Application.h"
#include <Gorgon/Graphics/BlankImage.h>
#include <Gorgon/Graphics/Color.h>
#include <Gorgon/Main.h>
#include <Gorgon/UI/Dialog.h>
#include <Gorgon/UI/Dimension.h>
#include <Gorgon/UI/Organizers/Flow.h>
#include <Gorgon/UI/Window.h>
#include <Gorgon/Window.h>
#include <Gorgon/Input/Mouse.h>

Gorgon::Graphics::BlankImage CreateHorizontalLine(int widthPx, int thicknessPx, Gorgon::Graphics::RGBAf color) {
    return Gorgon::Graphics::BlankImage({widthPx, thicknessPx}, color);
}

Gorgon::Graphics::BlankImage CreateVerticalLine(int heightPx, int thicknessPx, Gorgon::Graphics::RGBAf color) {
    return Gorgon::Graphics::BlankImage({thicknessPx, heightPx}, color);
}

Application::Application(UI::Window& window) :
    window(window)
{ 
    // Window setup
    window.Resize(1800, 1400);
    Gorgon::NextFrame();
    window.Center();
    window.SetBackground(Gorgon::Graphics::RGBAf{0.0f, 0.0f, 0.0f, 1.0f});
    window.Add(logoLayer);
    logoBitmap.Import("logo.png");
    logoBitmap.Prepare();
    logoBitmap.Draw(logoLayer, 15, 10);
    auto darkGray = Gorgon::Graphics::Color::DarkGrey;
    auto hLine = CreateHorizontalLine(2200, 1, darkGray);
    hLine.DrawStretched(logoLayer, 0, 70, 2600, 1);  // x=0, y=70, width=2600, height=1

    auto vLine = CreateVerticalLine(200, 3, darkGray);
    vLine.DrawStretched(logoLayer, 200, 0, 1, 1600); // x=200, y=0, width=1, height=1600
    appTitle.SetText("TaskFlow");
    appTitle.Move(60_px, 18_px);
    
    searchBox.SetWidth(400_px);
    searchBox.SetHeight(40_px);
    searchBox.Move(450_px, 15_px);
    window.Add(searchBox);
    window.Add(appTitle);
    Run();
}

bool Application::Quit() {
    return true;
}

void Application::Run(){
    
}