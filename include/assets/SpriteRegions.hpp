#pragma once
#include "raylib.h"

namespace SpriteRegions
{
constexpr int LargeSize = 160;
constexpr int MediumSize = 96;
constexpr int SmallSize = 64;
constexpr int MiniSize = 32;

// Large Asteroides
constexpr Rectangle AsteroidLarge1{0, 0, LargeSize, LargeSize};
constexpr Rectangle AsteroidLarge2{160, 0, LargeSize, LargeSize};
constexpr Rectangle AsteroidLarge3{320, 0, LargeSize, LargeSize};

// Medium Asteroids
constexpr Rectangle AsteroidMedium1{0, 160, MediumSize, MediumSize};
constexpr Rectangle AsteroidMedium2{96, 160, MediumSize, MediumSize};
constexpr Rectangle AsteroidMedium3{192, 160, MediumSize, MediumSize};

// UFO
constexpr Rectangle UFO{416, 160, MediumSize, 80};

// Small Asteroids
constexpr Rectangle AsteroidSmall1{0, 256, SmallSize, SmallSize};
constexpr Rectangle AsteroidSmall2{64, 256, SmallSize, SmallSize};
constexpr Rectangle AsteroidSmall3{128, 256, SmallSize, SmallSize};

// Ship
constexpr Rectangle Ship1{192, 256, MediumSize, SmallSize};
constexpr Rectangle Ship2{288, 256, MediumSize, SmallSize};

// Bullets
constexpr Rectangle Bullet1{448, 288, MiniSize, MiniSize};
constexpr Rectangle Bullet2{480, 288, MiniSize, MiniSize};
} // namespace SpriteRegions
