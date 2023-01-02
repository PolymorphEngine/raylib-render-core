/*
** raylib-render-core, 2022
** AudioManager.hpp by 0xMemoryGrinder
*/

#pragma once

#include <cstddef>
#include "raylib.h"

namespace polymorph::engine::raylib
{
    class AudioManager
    {

////////////////////// CONSTRUCTORS/DESTRUCTORS /////////////////////////

        public:



//////////////////////--------------------------/////////////////////////



///////////////////////////// PROPERTIES ////////////////////////////////
        public:


        private:
            static inline std::size_t _count = 0;


//////////////////////--------------------------/////////////////////////



/////////////////////////////// METHODS /////////////////////////////////
        public:
            static void setMasterVolume(float volume);

            static void registerModule();

            static void erase();



        private:


//////////////////////--------------------------/////////////////////////

    };
}
