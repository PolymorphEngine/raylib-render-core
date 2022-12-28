/*
** raylib-render-core, 2022
** Cursor.cpp by 0xMemoryGrinder
*/


#include "raylib.h"
#include "modules/Cursor.hpp"

bool polymorph::engine::raylib::Cursor::isOnScreen()
{
    return IsCursorOnScreen();
}

int polymorph::engine::raylib::Cursor::getMouseX()
{
    return GetMouseX();
}

int polymorph::engine::raylib::Cursor::getMouseY()
{
    return GetMouseY();
}

EXPORT_MODULE polymorph::graphical::ICursor *createCursor()
{
    return new polymorph::engine::raylib::Cursor();
}