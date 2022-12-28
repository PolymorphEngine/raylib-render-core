/*
** raylib-render-core, 2022
** Font.cpp by 0xMemoryGrinder
*/


#include <stdexcept>
#include "raylib.h"
#include "../../include/modules/Font.hpp"

polymorph::engine::raylib::PFont::PFont(const std::string &soundFilePath)
{
    _font = LoadFont(soundFilePath.c_str());
}

polymorph::engine::raylib::PFont::~PFont()
{
    if (_font.texture.id != 0)
        UnloadFont(_font);
}

struct Font polymorph::engine::raylib::PFont::getFont() const
{
    return _font;
}

EXPORT_MODULE polymorph::graphical::IFont *createFont(std::string fontFilePath)
{
    return new polymorph::engine::raylib::PFont(fontFilePath);
}
