#include "managers/EntityManager.hpp"

#include "core/Config.hpp"

EntityManager::EntityManager()
    : player(
          {(float)CONFIG::SCREEN_WIDTH / 2, (float)CONFIG::SCREEN_HEIGHT / 2})
{
}

void EntityManager::update(float dt) { player.update(dt); }

void EntityManager::draw() { player.draw(); }
