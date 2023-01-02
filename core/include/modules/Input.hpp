/*
** raylib-render-core, 2022
** Input.hpp by 0xMemoryGrinder
*/

#pragma once

#include "polymorph/engine/event-modules.hpp"

namespace polymorph::engine::event
{
    class Input : public IInput
    {
        public:
            float getMousePositionX() override;

            float getMousePositionY() override;

            Input() = default;
            ~Input() = default;

            void update() override;

            std::vector<MouseEvent> getMouseEvents() override;

            std::vector<KeyboardEvent> getKeyboardEvents() override;

        private:
            float _posX = 0;
            float _posY = 0;
    };
}