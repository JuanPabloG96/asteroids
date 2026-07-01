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
        update();
        window.beginDrawing();
        draw();
        window.endDrawing();
    }
}

void Game::update()
{
    float dt = GetFrameTime();
    entity_manager.update(dt);
}

void Game::draw()
{
    ClearBackground(BLACK);
    entity_manager.draw();
}
