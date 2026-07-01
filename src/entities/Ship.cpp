#include "entities/Ship.hpp"

#include "assets/SpriteRegions.hpp"
#include "core/Config.hpp"
#include "managers/AssetManager.hpp"
#include "raylib.h"

#include <cmath>

Ship::Ship(Vector2 startPos)
    : position(startPos), velocity{0.0f, 0.0f}, rotation(0.0f)
{
}

void Ship::update(float dt)
{
    isAccelerating = IsKeyDown(KEY_W);
    rotation_speed = CONFIG::Ship::ROTATION_SPEED;

    Vector2 mouse_position = GetMousePosition();

    float target_rotation =
        atan2f(mouse_position.y - position.y, mouse_position.x - position.x) *
        RAD2DEG;

    float delta = target_rotation - rotation;

    while (delta > 180.0f)
        delta -= 360.0f;
    while (delta < -180.0f)
        delta += 360.0f;

    float max_turn = rotation_speed * dt;

    if (fabs(delta) <= max_turn)
        rotation = target_rotation;
    else
        rotation += (delta > 0 ? max_turn : -max_turn);

    rotation = fmodf(rotation, 360.0f);

    if (rotation < 0.0f)
        rotation += 360.0f;
}

void Ship::draw() const
{
    const Rectangle& sprite =
        isAccelerating ? SpriteRegions::Ship2 : SpriteRegions::Ship1;

    Rectangle dest{position.x,
                   position.y,
                   sprite.width * CONFIG::Ship::SCALE,
                   sprite.height * CONFIG::Ship::SCALE};

    Vector2 origin{dest.width / 2.0f, dest.height / 2.0f};

    DrawTexturePro(Assets::spriteSheet,
                   sprite,
                   dest,
                   origin,
                   rotation,
                   CONFIG::Ship::COLOR);
}

Vector2 Ship::getPosition() const { return this->position; }

Vector2 Ship::getVelocity() const { return this->velocity; }

float Ship::getRotation() const { return this->rotation; }
