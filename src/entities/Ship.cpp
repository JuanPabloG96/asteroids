#include "entities/Ship.hpp"

#include "assets/SpriteRegions.hpp"
#include "core/Config.hpp"
#include "managers/AssetManager.hpp"
#include "raylib.h"

Ship::Ship(Vector2 startPos)
    : position(startPos), velocity{0.0f, 0.0f}, rotation(0.0f)
{
}

void Ship::update() {}

void Ship::draw() const
{
    const Rectangle& source = SpriteRegions::Ship1;

    Rectangle dest{position.x,
                   position.y,
                   source.width * CONFIG::Ship::SCALE,
                   source.height * CONFIG::Ship::SCALE};

    Vector2 origin{dest.width / 2.0f, dest.height / 2.0f};

    DrawTexturePro(Assets::spriteSheet,
                   source,
                   dest,
                   origin,
                   rotation,
                   CONFIG::Ship::COLOR);
}

Vector2 Ship::getPosition() const { return this->position; }

Vector2 Ship::getVelocity() const { return this->velocity; }

float Ship::getRotation() const { return this->rotation; }
