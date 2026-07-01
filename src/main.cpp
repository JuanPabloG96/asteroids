#include "core/Game.hpp"
#include "managers/AssetManager.hpp"

int main()
{
    Game asteroids;

    Assets::Load();

    asteroids.run();

    Assets::Unload();
    return 0;
}
