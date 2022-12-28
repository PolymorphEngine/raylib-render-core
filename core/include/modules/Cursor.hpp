/*
** raylib-render-core, 2022
** Cursor.hpp by 0xMemoryGrinder
*/

#pragma once

#include "raylib.h"
#include "polymorph/engine/render-modules.hpp"

namespace polymorph::engine::raylib
{

    class Cursor : public graphical::ICursor
    {

////////////////////// CONSTRUCTORS/DESTRUCTORS /////////////////////////

        public:
            Cursor() = default;

            ~Cursor() override = default;


//////////////////////--------------------------/////////////////////////



///////////////////////////// PROPERTIES ////////////////////////////////
        public:


        private:


//////////////////////--------------------------/////////////////////////



/////////////////////////////// METHODS /////////////////////////////////
        public:
            bool isOnScreen() override;

            int getMouseX() override;

            int getMouseY() override;


        private:


//////////////////////--------------------------/////////////////////////

    };

}