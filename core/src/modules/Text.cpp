/*
** raylib-render-core, 2022
** Text.cpp by 0xMemoryGrinder
*/


#include "modules/Text.hpp"
#include <utility>

polymorph::engine::raylib::Text::Text(std::string text): _text(std::move(text))
{
}

void polymorph::engine::raylib::Text::setPosition(float x, float y)
{
    _position = { x, y };
}

void polymorph::engine::raylib::Text::setColor(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
{
    _color = { r, g, b, a};
}

void polymorph::engine::raylib::Text::setText(const std::string &text)
{
    _text = text;
}

void polymorph::engine::raylib::Text::draw(const graphical::IFont &font, float size, float spacing)
{
    DrawTextEx(dynamic_cast<const PFont&>(font).getFont(),
               _text.c_str(), _position, size, spacing, _color);
}

EXPORT_MODULE polymorph::graphical::IText *createText(std::string fontFilePath)
{
    return new polymorph::engine::raylib::Text(fontFilePath);
}