/*
** raylib-render-core, 2022
** Window.cpp by 0xMemoryGrinder
*/


#include "raylib.h"
#include "modules/Window.hpp"

polymorph::engine::raylib::Window::Window(int width, int height, std::string title):
        _width(width), _height(height), _title(std::move(title)), _closed(false)
{
    InitWindow(width, height, _title.c_str());
    _closed = false;
}

polymorph::engine::raylib::Window::~Window()
{
    if (!_closed)
        CloseWindow();
}

void polymorph::engine::raylib::Window::close()
{
    if (!_closed)
        CloseWindow();
    _closed = true;
}

bool polymorph::engine::raylib::Window::isOpen()
{
    return !WindowShouldClose();
}

bool polymorph::engine::raylib::Window::isFullscreen()
{
    return IsWindowFullscreen();
}

void polymorph::engine::raylib::Window::setFullscreen(bool fullscreen)
{
    if ((IsWindowFullscreen() && !fullscreen)
        || !IsWindowFullscreen() && fullscreen)
        ToggleFullscreen();
}

void polymorph::engine::raylib::Window::setTitle(const std::string &title)
{
    _title = title;
    SetWindowTitle(_title.c_str());
}

void polymorph::engine::raylib::Window::setLogLevel(int level)
{
    SetTraceLogLevel(level);
}

EXPORT_MODULE polymorph::graphical::IWindow *createWindow(int x, int y, std::string title)
{
    return new polymorph::engine::raylib::Window(x, y, std::move(title));
}
