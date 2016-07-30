#ifndef HUD_H
#define HUD_H

#include "sprite.h"
#include "player.h"

class Graphics;

class HUD {
public:
	HUD();
	HUD(Graphics &graphics, Player &player);
	void update(int elapsedTime);
	void draw(Graphics &graphics);
private:
	Player _player;

	// Health Sprites
	Sprite _healthBarSprite;
	Sprite _healthNumber1;
	Sprite _currentHealthbar;

	// EXP Sprites
	Sprite _lvWord;
	Sprite _lvNumber;
	Sprite _expBar;

	// Weapon info
	Sprite _slash;
	Sprite _dashes;
};
#endif