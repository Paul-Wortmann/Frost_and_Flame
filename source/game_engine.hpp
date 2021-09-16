


#ifndef GAME_ENGINE_HPP
#define GAME_ENGINE_HPP

#include "game_engine_defines.hpp"

class cGameEngine :tcTemplateEngine
{
    public:
        std::uint32_t run(void);

    protected:

    private:
        // Functions
        std::uint32_t initialize(void);
        void terminate(void);
        void process(float _dt);

        // Variables
        eStatus         m_status         = eStatus::status_stop;

        // Engine
        cGraphicsEngine m_graphicsEngine = {};
        cAudioEngine    m_audioEngine    = {};

        // Manager
        cTextureManager m_textureManager = {};
};

#endif // GAME_ENGINE_HPP
