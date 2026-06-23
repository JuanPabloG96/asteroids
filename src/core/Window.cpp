#include "core/Window.hpp"

#include <raylib.h>

Window::Window(int width, int height, const std::string& title, int fps)
{
    InitWindow(width, height, title.c_str());
    SetTargetFPS(fps);
}

Window::~Window() { CloseWindow(); }

bool Window::shouldClose() const { return WindowShouldClose(); }

void Window::beginDrawing() const { BeginDrawing(); }

void Window::endDrawing() const { EndDrawing(); }
