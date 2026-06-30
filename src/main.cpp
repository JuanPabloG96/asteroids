#include "core/Game.hpp"
#include "managers/AssetManager.hpp"

#include <iostream>

int main()
{
    Game asteroids;

    Assets::Load();

    std::cout << Assets::spriteSheet.id << '\n';
    std::cout << Assets::spriteSheet.width << " " << Assets::spriteSheet.height
              << '\n';

    asteroids.run();

    Assets::Unload();
    return 0;
}
