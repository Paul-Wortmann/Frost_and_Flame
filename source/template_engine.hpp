


#ifndef TEMPLATE_ENGINE_HPP
#define TEMPLATE_ENGINE_HPP

#include "defines.hpp"
#include "includes.hpp"

class tcTemplateEngine
{
    public:
        virtual std::uint32_t initialize(void)   = 0;
        virtual void          terminate(void)    = 0;
        virtual void          process(float _dt) = 0;

    protected:

    private:

};

#endif // TEMPLATE_ENGINE_HPP
