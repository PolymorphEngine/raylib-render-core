/*
** raylib-render-core, 2022
** Text.hpp by 0xMemoryGrinder
*/

#pragma once

#include "raylib.h"
#include "polymorph/engine/render-modules.hpp"
#include "Font.hpp"

namespace polymorph::engine::raylib
{

    class Text : public graphical::IText
    {

            ////////////////////// CONSTRUCTORS/DESTRUCTORS /////////////////////////

        public:
            explicit Text(std::string text);
            ~Text() override = default;


            //////////////////////--------------------------/////////////////////////



            ///////////////////////////// PROPERTIES ////////////////////////////////
        public:


        private:
            std::string _text;
            Color _color;
            Vector2 _position;



            //////////////////////--------------------------/////////////////////////



            /////////////////////////////// METHODS /////////////////////////////////
        public:
            void setPosition(float x, float y) override;
            void setColor(unsigned char r, unsigned char g, unsigned char b, unsigned char a) override;
            void setText(const std::string &text) override;
            void draw(const graphical::IFont &font, float size, float spacing) override;


        private:


            //////////////////////--------------------------/////////////////////////

    };

}
