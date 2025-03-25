#include "Window.h"
#include <iostream>

Window::Window()
: window(nullptr)
{
}

Window::~Window()
{
    shutdown();
}

bool Window::init(int width, int height, const char* title)
{
    if (!glfwInit())
    {
        std::cerr << "GLFW init failed\n";
        return false;
    }

    window = glfwCreateWindow(width, height, title, nullptr, nullptr);
    if (!window)
    {
        std::cerr << "Failed to open the window\n";
        glfwTerminate();
        return false;
    }
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1); // vsync
    return true;
}

void Window::update()
{
    glfwPollEvents();
}

bool Window::shouldClose() const
{
    return glfwWindowShouldClose(window);
}

GLFWwindow* Window::getWindow() const 
{
    return window;
}

void Window::shutdown()
{
    if (window)
    {
        glfwDestroyWindow(window);
        glfwTerminate();
    }
}
