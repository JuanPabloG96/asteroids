#pragma once
#include "raylib.h"

#pragma once

#include "raylib.h"

namespace CONFIG
{
inline constexpr int SCREEN_WIDTH = 1440;
inline constexpr int SCREEN_HEIGHT = 1080;
inline constexpr int TARGET_FPS = 60;

inline constexpr const char* WINDOW_TITLE = "Asteroids 2026 - raylib";

namespace Ship
{
inline constexpr float RADIUS = 20.0f;
inline constexpr float ACCELERATION = 500.0f;
inline constexpr float ROTATION_SPEED = 250.0f;
inline constexpr float DRAG = 0.98f;
inline constexpr float SCALE = 0.5f;

inline constexpr Color COLOR = WHITE;
} // namespace Ship
} // namespace CONFIG
