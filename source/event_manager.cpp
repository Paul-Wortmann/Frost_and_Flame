


#include "event_manager.hpp"

std::uint32_t cEventManager::initialize(void)
{


    return EXIT_SUCCESS;
}

void cEventManager::terminate(void)
{


}

void cEventManager::process(float _dt)
{


}

sEvent cEventManager::getEvent(std::uint32_t _eventNum)
{
    return m_eventPool.event[_eventNum];
}

void cEventManager::addEvent(const sEvent &_event)
{
    m_eventPool.eventCurrent = (m_eventPool.eventCurrent + 1) % m_eventPool.eventCount;
    m_eventPool.event[m_eventPool.eventCurrent] = _event;
}
