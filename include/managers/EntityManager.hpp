#pragma once

#include "entities/Ship.hpp"

class EntityManager
{
private:
    Ship player;

public:
    EntityManager();
    void update(float dt);
    void draw();
};
