/*
** raylib-render-core, 2022
** RMusic.hpp by 0xMemoryGrinder
*/

#pragma once

#include <string>
#include "polymorph/engine/render-modules.hpp"
#include "raylib.h"

namespace polymorph::engine::raylib
{
    class RMusic : public polymorph::audio::IMusic
    {

////////////////////// CONSTRUCTORS/DESTRUCTORS /////////////////////////

        public:
            explicit RMusic(const std::string &musicFilePath);

            ~RMusic(void) override;

            void update(void) override;

//////////////////////--------------------------/////////////////////////



///////////////////////////// PROPERTIES ////////////////////////////////
        public:


        private:
            Music _music;


//////////////////////--------------------------/////////////////////////



/////////////////////////////// METHODS /////////////////////////////////
        public:
            void play(void) override;

            void pause(void) override;

            void resume(void) override;

            void stop(void) override;

            void setLoop(bool loop) override;

            void setVolume(float volume) override;

            void setPitch(float pitch) override;

        private:


//////////////////////--------------------------/////////////////////////

    };
}
