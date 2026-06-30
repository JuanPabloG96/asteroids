#pragma once

#include "raylib.h"

class Assets
{
public:
    static Texture2D spriteSheet;

    static void Load();
    static void Unload();
};
