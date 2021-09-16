


#ifndef AUDIO_ENGINE_HPP
#define AUDIO_ENGINE_HPP

#include "audio_engine_defines.hpp"

class cAudioEngine :tcTemplateEngine
{
    public:
        std::uint32_t initialize(void);
        void terminate(void);
        void process(float _dt);

    protected:

    private:
};

#endif // AUDIO_ENGINE_HPP
