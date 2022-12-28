/*
** raylib-render-core, 2022
** Drawer.cpp by 0xMemoryGrinder
*/

#include "modules/Drawer.hpp"

void polymorph::engine::raylib::Drawer::clear(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
{
    ClearBackground({r, g, b, a});
}

void polymorph::engine::raylib::Drawer::beginDrawing()
{
    BeginDrawing();
}

void polymorph::engine::raylib::Drawer::endDrawing()
{
    EndDrawing();
}

EXPORT_MODULE polymorph::graphical::IDrawer *createDrawer()
{
    return new polymorph::engine::raylib::Drawer();
}
