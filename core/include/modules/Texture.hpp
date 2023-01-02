/*
** raylib-render-core, 2022
** Texture.hpp by 0xMemoryGrinder
*/

#pragma once

#include <string>
#include <raylib.h>
#include "polymorph/engine/render-modules.hpp"


namespace polymorph::engine::raylib
{
    class Image;
    class Texture : public graphical::ITexture
    {

            ////////////////////// CONSTRUCTORS/DESTRUCTORS /////////////////////////

        public:
            Texture(const std::string &filepath);


            ~Texture() override;


            //////////////////////--------------------------/////////////////////////



            ///////////////////////////// PROPERTIES ////////////////////////////////
        public:


        private:
            Texture2D _texture;
            Vector2 _position;
            Vector2 _scale;
            Vector2 _originalSize;
            Rectangle frameRect;
            bool isAnimated = false;


            //////////////////////--------------------------/////////////////////////



            /////////////////////////////// METHODS /////////////////////////////////
        public:
            void setPosition(float x, float y) override;

            void draw(unsigned char r, unsigned  char g,
                      unsigned char b, unsigned char a) override;
            float getTextureWidth() override;

            float getTextureHeight() override;

            void setTextureRect(float x, float y, float w, float h) override;

            Texture2D getTexture() const;


        private:


            //////////////////////--------------------------/////////////////////////
            friend Image;
    };
}


