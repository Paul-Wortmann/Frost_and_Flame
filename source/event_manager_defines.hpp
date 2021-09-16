


#ifndef EVENT_MANAGER_DEFINES_HPP
#define EVENT_MANAGER_DEFINES_HPP

#include "defines.hpp"
#include "includes.hpp"
#include "template_manager.hpp"

enum class eEventType : std::uint32_t { eventType_none = 0};

struct sEvent
{
    eEventType    eventType = eEventType::eventType_none;
    std::uint32_t eventID   = 0;
};

struct sEventPool
{
    static const std::int32_t eventCount        = 10;
    std::int32_t              eventCurrent      = 0;
    sEvent                    event[eventCount] = {};
};

#endif // EVENT_MANAGER_DEFINES_HPP
