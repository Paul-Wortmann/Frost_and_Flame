


#ifndef EVENT_MANAGER_HPP
#define EVENT_MANAGER_HPP

#include "event_manager_defines.hpp"

class cEventManager :tcTemplateManager
{
    public:
        std::uint32_t initialize(void);
        void          terminate(void);
        void          process(float _dt);
        sEvent        getEvent(std::uint32_t _eventNum);
        void          addEvent(const sEvent &_event);

    protected:

    private:
        sEventPool m_eventPool = {};
};

#endif // EVENT_MANAGER_HPP
