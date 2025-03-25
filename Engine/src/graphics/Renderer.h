#pragma once

#include "Window.h"


class Renderer
{
public:
    Renderer();
    ~Renderer();

    bool init();
    void render();
    void shutdown();

    bool shouldClose() const;

private:
    Window window;
};
