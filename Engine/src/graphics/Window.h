#pragma once

#include <GLFW/glfw3.h>

class Window
{
public:
    Window();
    ~Window();

    bool init(int width, int height, const char* title);
    void update();
    bool shouldClose() const;
    GLFWwindow* getWindow() const;
    void shutdown();

private:
    GLFWwindow* window;
};
