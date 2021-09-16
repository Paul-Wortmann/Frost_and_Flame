


#ifndef GRAPHICS_ENGINE_HPP
#define GRAPHICS_ENGINE_HPP

#include "graphics_engine_defines.hpp"

class cGraphicsEngine :tcTemplateEngine
{
    public:
        std::uint32_t initialize(void);
        void terminate(void);
        void process(float _dt);

    protected:

    private:

};

#endif // GRAPHICS_ENGINE_HPP
