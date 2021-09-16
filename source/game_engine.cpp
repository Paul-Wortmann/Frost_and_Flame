


#include "game_engine.hpp"

std::uint32_t cGameEngine::initialize(void)
{
    m_status = eStatus::status_init;
    std::uint32_t exit_status = EXIT_SUCCESS;

    exit_status = (exit_status == EXIT_SUCCESS) ? m_graphicsEngine.initialize() : exit_status;
    exit_status = (exit_status == EXIT_SUCCESS) ? m_audioEngine.initialize() : exit_status;

    return EXIT_SUCCESS;
}

void cGameEngine::terminate(void)
{
    m_status = eStatus::status_stop;

}

void cGameEngine::process(float _dt)
{
    m_audioEngine.process(_dt);
    m_graphicsEngine.process(_dt);
    m_status = eStatus::status_stop; // DELETE ME!!!
}

std::uint32_t cGameEngine::run(void)
{
    std::uint32_t exit_status = initialize();
    m_status = (exit_status == EXIT_SUCCESS) ? eStatus::status_run : eStatus::status_stop;

    float time_delta = 0.0f;

    while (m_status == eStatus::status_run)
    {
        process(time_delta);
    }

    terminate();
    return exit_status;
}
