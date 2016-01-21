#ifndef GAME_H
#define GAME_H
#include "animatedSprite.h"

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

	AnimatedSprite _player;
};

#endif