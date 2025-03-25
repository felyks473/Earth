#include "Engine.h"
#include <iostream>

Engine::Engine()
: isRunning(false), renderer(std::make_shared<Renderer>()) {}

Engine::~Engine()
{
    shutdown();    
}

bool Engine::init()
{
    if (!renderer->init())
    {
        std::cerr << "Renderer could not be initialized\n";
        return false;
    }    
    return true;
}

void Engine::run()
{
    isRunning = true;
    gameLoop();
}

void Engine::shutdown()
{
    renderer->shutdown();
}

void Engine::gameLoop()
{
    while (isRunning && !renderer->shouldClose())
    {
        renderer->render();
    }
}
