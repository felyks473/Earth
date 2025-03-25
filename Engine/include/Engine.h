#pragma once

#include <memory>
#include "graphics/Renderer.h"

class Engine
{
public:
    Engine();
    ~Engine();

    bool init();
    void run();
    void shutdown();

private:
    void gameLoop();

    bool isRunning;
    std::shared_ptr<Renderer> renderer;
};
