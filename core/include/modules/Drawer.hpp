/*
** raylib-render-core, 2022
** Drawer.hpp by 0xMemoryGrinder
*/

#pragma once

#include "raylib.h"
#include "polymorph/engine/render-modules.hpp"


namespace polymorph::engine::raylib
{
    class Drawer : public graphical::IDrawer
    {

////////////////////// CONSTRUCTORS/DESTRUCTORS /////////////////////////

        public:


//////////////////////--------------------------/////////////////////////



///////////////////////////// PROPERTIES ////////////////////////////////
        public:


        private:


//////////////////////--------------------------/////////////////////////



/////////////////////////////// METHODS /////////////////////////////////
        public:

            void clear(unsigned char r, unsigned char g, unsigned char b, unsigned char a) override;

            void beginDrawing() override;

            void endDrawing() override;


        private:


//////////////////////--------------------------/////////////////////////

    };
}
