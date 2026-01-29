#pragma once

#include <Gorgon/Animation.h>
#include <Gorgon/Animation/ControlledTimer.h>
#include <Gorgon/Graphics/Animations.h>
#include <Gorgon/Graphics/Layer.h>
#include <Gorgon/Graphics/TextureAnimation.h>
#include <Gorgon/UI/Window.h>
#include <Gorgon/UI/Organizers/Flow.h>
#include <Gorgon/Graphics/Bitmap.h>
#include <Gorgon/Widgets/Composer.h>
#include <Gorgon/Widgets/Label.h>
#include <Gorgon/Widgets/Panel.h>
#include <Gorgon/Widgets/Layerbox.h>
#include <Gorgon/Widgets/Button.h>
#include <Gorgon/Widgets/GeometryBoxes.h>
#include <Gorgon/Widgets/Window.h>
#include <Gorgon/UI/Organizers/List.h>
#include <Gorgon/Widgets/Textbox.h>
#include <vector>


namespace UI = Gorgon::UI;
namespace Widgets = Gorgon::Widgets;

using namespace Gorgon::UI::literals;

/**
 * This is your application class. You should modify it as per your needs.
 */
class Application {
public:
    // This function creates some necessary UI parts.
    // Most likely you don't need to change it.
    Application(UI::Window &window);
    

    // This function is where the example code runs in.
    // You may modify it to keep it like this.
    void Run();

    // This function is called when the user tries to close
    // the window. You may return false to prevent it.
    bool Quit();

    // This function redraws the bitmap on the layer.
    void Redraw();
    

private:

    UI::Window &window;
    Widgets::Label appTitle;
    Widgets::Textbox searchBox;
    Widgets::Button addTaskButton;
    Gorgon::Graphics::Layer logoLayer;
    Gorgon::Graphics::Bitmap logoBitmap;
    Gorgon::Graphics::Bitmap themeBitmap;
    Gorgon::Graphics::Bitmap notificationBitmap;
    Gorgon::Graphics::Bitmap userBitmap;
    

};
