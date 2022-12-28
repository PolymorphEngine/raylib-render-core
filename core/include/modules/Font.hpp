/*
** raylib-render-core, 2022
** Font.hpp by 0xMemoryGrinder
*/

#pragma once

#include <string>
#include "raylib.h"
#include "polymorph/engine/render-modules.hpp"


namespace polymorph::engine::raylib
{

    class PFont : public graphical::IFont
    {

////////////////////// CONSTRUCTORS/DESTRUCTORS /////////////////////////

        public:
            explicit PFont(const std::string &soundFilePath);

            ~PFont() override;


//////////////////////--------------------------/////////////////////////



///////////////////////////// PROPERTIES ////////////////////////////////
        public:


        private:
            struct Font _font { 0 };


//////////////////////--------------------------/////////////////////////



/////////////////////////////// METHODS /////////////////////////////////
        public:
            struct Font getFont() const;


        private:


//////////////////////--------------------------/////////////////////////

    };

}
