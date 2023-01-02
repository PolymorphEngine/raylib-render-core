/*
** raylib-render-core, 2022
** Window.hpp by 0xMemoryGrinder
*/

#pragma once

#include <string>
#include "raylib.h"
#include "polymorph/engine/render-modules.hpp"


namespace polymorph::engine::raylib
{

    class Window : public graphical::IWindow
    {

////////////////////// CONSTRUCTORS/DESTRUCTORS /////////////////////////

        public:
            Window(int width, int height, std::string title);

            ~Window() override;

            void setLogLevel(int level) override;

//////////////////////--------------------------/////////////////////////



///////////////////////////// PROPERTIES ////////////////////////////////
        public:


        private:
            int _width;
            int _height;
            std::string _title;
            bool _closed;


//////////////////////--------------------------/////////////////////////



/////////////////////////////// METHODS /////////////////////////////////
        public:
            void close() override;
            bool isOpen() override;
            bool isFullscreen() override;
            void setFullscreen(bool fullscreen) override;
            void setTitle(const std::string &title) override;

        private:



//////////////////////--------------------------/////////////////////////

    };

}

