#pragma once

#include "raylib.h"

class Ship
{
private:
    Vector2 position;
    Vector2 velocity;
    float rotation;
    float acceleration;
    float drag;
    float rotation_speed;

public:
    Ship(Vector2 startPos);
    void update();
    void draw() const;
    Vector2 getPosition() const;
    Vector2 getVelocity() const;
    float getRotation() const;
};
