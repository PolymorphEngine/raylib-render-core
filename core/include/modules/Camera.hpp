/*
** raylib-render-core, 2022
** Camera.hpp by 0xMemoryGrinder
*/

#pragma once

#include "raylib.h"
#include "polymorph/engine/render-modules.hpp"

namespace polymorph::engine::raylib
{
    class Camera : public graphical::ICamera
    {

            ////////////////////// CONSTRUCTORS/DESTRUCTORS /////////////////////////

        public:
            explicit Camera();

            ~Camera() override = default;


            //////////////////////--------------------------/////////////////////////



            ///////////////////////////// PROPERTIES ////////////////////////////////
        public:


        private:
            Camera3D _camera;

            //////////////////////--------------------------/////////////////////////



            /////////////////////////////// METHODS /////////////////////////////////
        public:
            void move(float x, float y, float z) override;

            void setPosition(float x, float y, float z) override;

            void setTarget(float x, float y, float z) override;

            void setUp(float x, float y, float z) override;

            void setFOV(float fov) override;

            void begin3DMode() override;

            void end3DMode() override;

        private:


            //////////////////////--------------------------/////////////////////////

    };
}
