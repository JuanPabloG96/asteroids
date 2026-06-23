#include "core/Game.hpp"

#include "core/Config.hpp"
#include "raylib.h"

Game::Game()
    : window(CONFIG::SCREEN_WIDTH,
             CONFIG::SCREEN_HEIGHT,
             CONFIG::WINDOW_TITLE,
             CONFIG::TARGET_FPS)
{
}

void Game::run()
{
    while (!window.shouldClose())
    {
        window.beginDrawing();
        ClearBackground(BLACK);

        window.endDrawing();
    }
}
