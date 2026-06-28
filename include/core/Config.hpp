#pragma once
#include "raylib.h"

namespace CONFIG
{
inline const int SCREEN_WIDTH = 1920;
inline const int SCREEN_HEIGHT = 1080;
inline const char* WINDOW_TITLE = "Asteroids 2026 - raylib";
inline const int TARGET_FPS = 60;

struct SHIP
{
    const float speed;
    const float radius = 20.0f;
    const float acceleration = 500.0f;
    const float rotationSpeed = 250.0f;
    const float drag = 0.98f;
    const Color color = WHITE;
};
} // namespace CONFIG
