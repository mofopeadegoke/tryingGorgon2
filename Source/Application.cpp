#include "Application.h"

#include <Gorgon/Graphics/Color.h>
#include <Gorgon/Main.h>
#include <Gorgon/UI/Dialog.h>
#include <Gorgon/UI/Dimension.h>
#include <Gorgon/UI/Organizers/Flow.h>
#include <Gorgon/UI/Window.h>
#include <Gorgon/Window.h>
#include <Gorgon/Input/Mouse.h>

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
    logoBitmap.Draw(logoLayer, 0, 5);
    appTitle.SetText("TaskFlow");
    appTitle.Move(40_px, 9_px);
    
    searchBox.SetWidth(400_px);
    searchBox.Move(250_px, 10_px);
    window.Add(searchBox);
    window.Add(appTitle);
    Run();
}

bool Application::Quit() {
    return true;
}

void Application::Run(){
    
}