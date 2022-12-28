/*
** raylib-render-core, 2022
** Texture.cpp by 0xMemoryGrinder
*/


#include "modules/Texture.hpp"

polymorph::engine::raylib::Texture::Texture(const std::string &filepath) : _texture(LoadTexture(filepath.c_str()))
{
    _originalSize = {static_cast<float>(this->_texture.width), static_cast<float>(this->_texture.height)};
    _scale = {1, 1};
}


polymorph::engine::raylib::Texture::~Texture()
{
    UnloadTexture(_texture);
}

void polymorph::engine::raylib::Texture::setPosition(float x, float y)
{
    _position.x = x;
    _position.y = y;
}

void polymorph::engine::raylib::Texture::draw(unsigned char r, unsigned  char g,
                                      unsigned char b, unsigned char a)
{
    DrawTextureRec(_texture, frameRect, _position, {r, g, b, a});
}

Texture2D polymorph::engine::raylib::Texture::getTexture() const
{
    return _texture;
}

float polymorph::engine::raylib::Texture::getTextureWidth()
{
    return static_cast<float>(_texture.width);
}

float polymorph::engine::raylib::Texture::getTextureHeight()
{
    return static_cast<float>(_texture.height);
}

void polymorph::engine::raylib::Texture::setTextureRect(float x, float y, float w,
                                                float h)
{
    frameRect = {x, y, w, h};
}
EXPORT_MODULE polymorph::graphical::ITexture *createTexture(std::string fontFilePath)
{
    return new polymorph::engine::raylib::Texture(fontFilePath);
}
