

#ifndef GAME_ENGINE_DEFINES_HPP
#define GAME_ENGINE_DEFINES_HPP

#include "defines.hpp"
#include "includes.hpp"
#include "template_engine.hpp"
#include "template_manager.hpp"

#include "graphics_engine.hpp"
#include "audio_engine.hpp"
#include "texture_manager.hpp"

enum eStatus : std::uint32_t { status_stop = 0, status_init = 1, status_run = 2, status_term = 3 };

#endif // GAME_ENGINE_DEFINES_HPP
