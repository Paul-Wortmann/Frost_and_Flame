


#ifndef TEXTURE_MANAGER_HPP
#define TEXTURE_MANAGER_HPP

#include "texture_manager_defines.hpp"

class cTextureManager :tcTemplateManager
{
    public:
        std::uint32_t initialize(void);
        void terminate(void);
        void process(float _dt);

    protected:

    private:

};

#endif // TEXTURE_MANAGER_HPP
