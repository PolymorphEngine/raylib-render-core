/*
** raylib-render-core, 2022
** Input.cpp by 0xMemoryGrinder
*/


#include "modules/Input.hpp"
#include <raylib.h>

void polymorph::engine::event::Input::update()
{

}

std::vector <polymorph::engine::event::MouseEvent> polymorph::engine::event::Input::getMouseEvents()
{
    std::vector<MouseEvent> events;
    auto pos = GetMousePosition();
    auto mouseWheel = GetMouseWheelMove();
    if (pos.x != _posX || pos.y != _posY) {
        _posX = pos.x;
        _posY = pos.y;
        MouseEvent e("MouseEvent", "Mouse Moved");
        e.inputType = InputType::MOVED;
        e.button = MouseButton::LEFT_BUTTON;
        e.moved = mouseWheel;
        e.position = engine::Vector2(_posX, _posY);
        events.push_back(e);
    }

    if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
    {
        MouseEvent e("MouseEvent", "Left Pressed");
        e.inputType = InputType::PRESSED;
        e.button = MouseButton::LEFT_BUTTON;
        e.moved = mouseWheel;
        e.position = engine::Vector2(_posX, _posY);
        events.push_back(e);
    }
    if (IsMouseButtonReleased(MOUSE_LEFT_BUTTON))
    {
        MouseEvent e("MouseEvent", "Left Released");
        e.inputType = InputType::RELEASED;
        e.button = MouseButton::LEFT_BUTTON;
        e.moved = mouseWheel;
        e.position = engine::Vector2(_posX, _posY);
        events.push_back(e);
    }
    if (IsMouseButtonPressed(MOUSE_RIGHT_BUTTON))
    {
        MouseEvent e("MouseEvent", "Right Pressed");
        e.inputType = InputType::PRESSED;
        e.button = MouseButton::RIGHT_BUTTON;
        e.moved = mouseWheel;
        e.position = engine::Vector2(_posX, _posY);
        events.push_back(e);
    }
    if (IsMouseButtonReleased(MOUSE_RIGHT_BUTTON))
    {
        MouseEvent e("MouseEvent", "Right Released");
        e.inputType = InputType::RELEASED;
        e.button = MouseButton::RIGHT_BUTTON;
        e.moved = mouseWheel;
        e.position = engine::Vector2(_posX, _posY);
        events.push_back(e);
    }
    if (IsMouseButtonPressed(MOUSE_MIDDLE_BUTTON))
    {
        MouseEvent e("MouseEvent", "Middle Pressed");
        e.inputType = InputType::PRESSED;
        e.button = MouseButton::MIDDLE_BUTTON;
        e.moved = mouseWheel;
        e.position = engine::Vector2(_posX, _posY);
        events.push_back(e);
    }
    if (IsMouseButtonReleased(MOUSE_MIDDLE_BUTTON))
    {
        MouseEvent e("MouseEvent", "Middle Released");
        e.inputType = InputType::RELEASED;
        e.button = MouseButton::MIDDLE_BUTTON;
        e.moved = mouseWheel;
        e.position = engine::Vector2(_posX, _posY);
        events.push_back(e);
    }
    if (IsMouseButtonDown(MOUSE_LEFT_BUTTON))
    {
        MouseEvent e("MouseEvent", "Left Down");
        e.inputType = InputType::T_DOWN;
        e.button = MouseButton::LEFT_BUTTON;
        e.moved = mouseWheel;
        e.position = engine::Vector2(_posX, _posY);
        events.push_back(e);
    }
    if (IsMouseButtonDown(MOUSE_RIGHT_BUTTON))
    {
        MouseEvent e("MouseEvent", "Right Down");
        e.inputType = InputType::T_DOWN;
        e.button = MouseButton::RIGHT_BUTTON;
        e.moved = mouseWheel;
        e.position = engine::Vector2(_posX, _posY);
        events.push_back(e);
    }
    if (IsMouseButtonDown(MOUSE_MIDDLE_BUTTON))
    {
        MouseEvent e("MouseEvent", "Middle Down");
        e.inputType = InputType::T_DOWN;
        e.button = MouseButton::MIDDLE_BUTTON;
        e.moved = mouseWheel;
        e.position = engine::Vector2(_posX, _posY);
        events.push_back(e);
    }
    if (mouseWheel != 0)
    {
        MouseEvent e("MouseEvent", "Scroll");
        e.inputType = InputType::SCROLL;
        e.button = MouseButton::MIDDLE_BUTTON;
        e.moved = mouseWheel;
        e.position = engine::Vector2(_posX, _posY);
        events.push_back(e);
    }
    return events;
}

std::vector <polymorph::engine::event::KeyboardEvent> polymorph::engine::event::Input::getKeyboardEvents()
{
    std::vector<KeyboardEvent> events;
    for (int i = 1; i < 347; ++i)
    {
        if (IsKeyPressed(i))
        {
            KeyboardEvent e("KeyboardEvent", "Key "+std::to_string(i)+" Pressed");
            e.inputType = InputType::PRESSED;
            e.key = static_cast<KeyCode>(i);
            events.push_back(e);
        }
        if (IsKeyReleased(i))
        {
            KeyboardEvent e("KeyboardEvent", "Key "+std::to_string(i)+" Released");
            e.inputType = InputType::RELEASED;
            e.key = static_cast<KeyCode>(i);
            events.push_back(e);
        }
        if (IsKeyDown(i))
        {
            KeyboardEvent e("KeyboardEvent", "Key "+std::to_string(i)+" Down");
            e.inputType = InputType::T_DOWN;
            e.key = static_cast<KeyCode>(i);
            events.push_back(e);
        }
    }
    return events;
}

float polymorph::engine::event::Input::getMousePositionX()
{
    return GetMousePosition().x;
}

float polymorph::engine::event::Input::getMousePositionY()
{
    return GetMousePosition().y;
}

EXPORT_MODULE polymorph::engine::event::IInput *createInput()
{
    return new polymorph::engine::event::Input();
}
