#include "managers/AssetManager.hpp"

Texture2D Assets::spriteSheet;

void Assets::Load() { spriteSheet = LoadTexture("assets/asteroids.png"); }

void Assets::Unload() { UnloadTexture(spriteSheet); }
