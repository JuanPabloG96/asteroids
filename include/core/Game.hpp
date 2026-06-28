#pragma once

#include "Window.hpp"

class Game
{
private:
    Window window;

public:
    Game();
    void run();
    void update();
    void draw();
};
