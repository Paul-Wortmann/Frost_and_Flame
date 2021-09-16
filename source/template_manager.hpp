


#ifndef TEMPLATE_MANAGER_HPP
#define TEMPLATE_MANAGER_HPP

#include "defines.hpp"
#include "includes.hpp"

class tcTemplateManager
{
    public:
        virtual std::uint32_t initialize(void)   = 0;
        virtual void          terminate(void)    = 0;
        virtual void          process(float _dt) = 0;

    protected:

    private:

};

#endif // TEMPLATE_MANAGER_HPP
