#pragma once

#include "Window.hpp"
#include "managers/EntityManager.hpp"

class Game
{
private:
    Window window;
    EntityManager entity_manager;

public:
    Game();
    void run();
    void update();
    void draw();
};
