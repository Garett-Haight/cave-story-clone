#ifndef GAME_H
#define GAME_H
#include "player.h"
#include "level.h"
#include "hud.h"
#include "graphics.h"

class Graphics;
/*
Game Class
This class holds all information for our main game loop
*/
#pragma once
class Game
{
public:
	Game();
	~Game();
private:
	void gameLoop();
	void draw(Graphics &graphics);
	void update(float elapsedTime);

	Player _player;
	Level _level;

	HUD _hud;

	Graphics _graphics;
};

#endif