#pragma once

#include <string>

class Window
{
private:
    int w_width;
    int w_height;
    int target_fps;
    std::string title;

public:
    Window(int width, int height, const std::string& title, int fps);
    ~Window();

    Window(const Window&) = delete;
    Window& operator=(const Window&) = delete;

    bool shouldClose() const;
    void beginDrawing() const;
    void endDrawing() const;
};
