#include "entities/Ship.hpp"

#include "core/Config.hpp"
#include "raylib.h"

Ship::Ship(Vector2 startPos) : position(startPos), speed(CONFIG::SHIP::drag) {}

void Ship::Update() {}

void Ship::Draw() const {}

Vector2 Ship::getPosition() const { return this->position; }

Vector2 Ship::getSpeed() const { return this->speed; }

float Ship::getRotation() const { return this->rotation; }
