/*
** raylib-render-core, 2022
** RSound.cpp by 0xMemoryGrinder
*/


#include "modules/RSound.hpp"
#include "modules/AudioManager.hpp"

polymorph::engine::raylib::RSound::RSound(const std::string &soundFilePath)
{
    AudioManager::registerModule();
    _sound = LoadSound(soundFilePath.c_str());
}

polymorph::engine::raylib::RSound::~RSound(void)
{
    UnloadSound(_sound);
    AudioManager::erase();
}

void polymorph::engine::raylib::RSound::play(void)
{
    PlaySound(_sound);
}

void polymorph::engine::raylib::RSound::pause(void)
{
    PauseSound(_sound);
}

void polymorph::engine::raylib::RSound::stop(void)
{
    StopSound(_sound);
}

void polymorph::engine::raylib::RSound::resume(void)
{
    ResumeSound(_sound);
}

void polymorph::engine::raylib::RSound::setVolume(float volume)
{
    SetSoundVolume(_sound, volume);
}

bool polymorph::engine::raylib::RSound::isSoundPlaying(void)
{
    return IsSoundPlaying(_sound);
}

void polymorph::engine::raylib::RSound::playMulti(void)
{
    PlaySoundMulti(_sound);
}

EXPORT_MODULE polymorph::audio::ISound *createSound(std::string filepath)
{
    return new polymorph::engine::raylib::RSound(filepath);
}

