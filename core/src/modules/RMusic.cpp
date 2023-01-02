/*
** raylib-render-core, 2022
** RMusic.cpp by 0xMemoryGrinder
*/


#include "modules/RMusic.hpp"
#include "modules/AudioManager.hpp"

polymorph::engine::raylib::RMusic::RMusic(const std::string &musicFilePath)
{
    AudioManager::registerModule();
    _music = LoadMusicStream(musicFilePath.c_str());
}

polymorph::engine::raylib::RMusic::~RMusic(void)
{
    UnloadMusicStream(_music);
    AudioManager::erase();
}

void polymorph::engine::raylib::RMusic::play(void)
{
    PlayMusicStream(_music);
}

void polymorph::engine::raylib::RMusic::pause(void)
{
    PauseMusicStream(_music);
}

void polymorph::engine::raylib::RMusic::resume(void)
{
    ResumeMusicStream(_music);
}

void polymorph::engine::raylib::RMusic::stop(void)
{
    StopMusicStream(_music);
}

void polymorph::engine::raylib::RMusic::setVolume(float volume)
{
    SetMusicVolume(_music, volume);
}

void polymorph::engine::raylib::RMusic::setPitch(float pitch)
{
    SetMusicPitch(_music, pitch);
}

void polymorph::engine::raylib::RMusic::setLoop(bool loop)
{
    _music.looping = loop;
}

void polymorph::engine::raylib::RMusic::update(void)
{
    UpdateMusicStream(_music);
}

EXPORT_MODULE polymorph::audio::IMusic *createMusic(std::string filepath)
{
    return new polymorph::engine::raylib::RMusic(filepath);
}

