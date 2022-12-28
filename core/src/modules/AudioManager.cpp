/*
** raylib-render-core, 2022
** AudioManager.cpp by 0xMemoryGrinder
*/

#include <stdexcept>
#include "modules/AudioManager.hpp"

void polymorph::engine::raylib::AudioManager::setMasterVolume(float volume)
{
    SetMasterVolume(volume);
}

void polymorph::engine::raylib::AudioManager::registerModule()
{
    _count += 1;
    if (_count == 1) {
        InitAudioDevice();
        if (!IsAudioDeviceReady())
            throw std::runtime_error("Audio device not ready");
    }
}

void polymorph::engine::raylib::AudioManager::erase()
{
    _count -= 1;
    if (_count == 0) {
        CloseAudioDevice();
    }
}
