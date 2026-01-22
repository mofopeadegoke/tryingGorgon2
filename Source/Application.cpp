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
    window.Resize(1800, 1400);
    Gorgon::NextFrame();
    window.Center();
    window.SetBackground(Gorgon::Graphics::RGBAf{0.0f, 0.0f, 0.0f, 1.0f});
    appTitle.SetText("TaskFlow");
    appTitle.Move(5_px, 20_px);
    window.Add(appTitle);
    Run();
}

bool Application::Quit() {
    return true;
}

void Application::Run(){
    
}