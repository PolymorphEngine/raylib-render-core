/*
** raylib-render-core, 2022
** RSound.hpp by 0xMemoryGrinder
*/

#pragma once

#include <string>
#include "polymorph/engine/render-modules.hpp"
#include "raylib.h"

namespace polymorph::engine::raylib
{
    class RSound : public polymorph::audio::ISound
    {

////////////////////// CONSTRUCTORS/DESTRUCTORS /////////////////////////

        public:
            explicit RSound(const std::string &soundFilePath);

            ~RSound(void) override;

//////////////////////--------------------------/////////////////////////



///////////////////////////// PROPERTIES ////////////////////////////////
        public:


        private:
            Sound _sound;


//////////////////////--------------------------/////////////////////////



/////////////////////////////// METHODS /////////////////////////////////
        public:
            void play(void) override;

            void pause(void) override;

            void stop(void) override;

            void resume(void) override;

            void setVolume(float volume) override;

            bool isSoundPlaying(void) override;

            void playMulti(void) override;

        private:


//////////////////////--------------------------/////////////////////////

    };
}
