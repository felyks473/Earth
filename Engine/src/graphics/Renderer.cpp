
#include <glad/glad.h>
#include "Renderer.h"
#include <iostream>

Renderer::Renderer() {}
Renderer::~Renderer() { shutdown(); }

bool Renderer::init()
{
    if (!window.init(800, 600, "Planet"))
    {
        std::cerr << "Failed to init window\n";
        return false;
    }

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cerr << "Failed to init OPGL context\n";
        return false;
    }
    
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

    return true;
}

void Renderer::render()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glfwSwapBuffers(window.getWindow());
    window.update();
}

void Renderer::shutdown()
{
    window.shutdown();
}

bool Renderer::shouldClose() const
{
    return window.shouldClose();
}
