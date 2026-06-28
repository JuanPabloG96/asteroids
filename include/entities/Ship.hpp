#pragma once

#include "raylib.h"

class Ship
{
private:
    Vector2 position;
    Vector2 speed;
    float rotation;
    float acceleration;
    float drag;
    float rotation_speed;

public:
    Ship(Vector2 startPos);
    void Update();
    void Draw() const;
    Vector2 getPosition() const;
    Vector2 getSpeed() const;
    float getRotation() const;
};
