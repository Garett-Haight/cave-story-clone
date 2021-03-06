#include "hud.h"

#include "graphics.h"

HUD::HUD() {}

HUD::HUD(Graphics &graphics, Player &player) {
	this->_player = player;
	this->_healthBarSprite = Sprite(graphics, "TextBox.png", 0, 40, 64, 8, 35, 70);
	this->_healthNumber1 = Sprite(graphics, "TextBox.png", 0, 56, 8, 8, 66, 70);
	this->_currentHealthbar = Sprite(graphics, "TextBox.png", 0, 25, 39, 5, 83, 72);
	this->_lvWord = Sprite(graphics, "TextBox.png", 81, 81, 11, 7, 38, 55);
	this->_lvNumber = Sprite(graphics, "TextBox.png", 0, 56, 8, 8, 66, 52);
	this->_expBar = Sprite(graphics, "TextBox.png", 0, 72, 40, 8, 83, 52);
	this->_slash = Sprite(graphics, "TextBox.png", 72, 48, 8, 8, 100, 36);
	this->_dashes = Sprite(graphics, "TextBox.png", 81, 51, 15, 11, 132, 26);
}

void HUD::update(int elapsedTime) {
	this->_healthNumber1.setSourceRectX(8 * this->_player.getCurrentHealth());

	// Calculate the width of the health bar
	// 100% = 39px
	float num = (float)this->_player.getCurrentHealth() / this->_player.getMaxHealth();
	this->_currentHealthbar.setSourceRectW(std::floor(num * 39));

}

void HUD::draw(Graphics &graphics) {
	this->_healthBarSprite.draw(graphics, this->_healthBarSprite.getX(), this->_healthBarSprite.getY());
	this->_healthNumber1.draw(graphics, this->_healthNumber1.getX(), this->_healthNumber1.getY());
	this->_currentHealthbar.draw(graphics, this->_currentHealthbar.getX(), this->_currentHealthbar.getY());
	this->_lvWord.draw(graphics, this->_lvWord.getX(), this->_lvWord.getY());
	this->_lvNumber.draw(graphics, this->_lvNumber.getX(), this->_lvNumber.getY());
	this->_expBar.draw(graphics, this->_expBar.getX(), this->_expBar.getY());
	this->_slash.draw(graphics, this->_slash.getX(), this->_slash.getY());
	this->_dashes.draw(graphics, this->_dashes.getX(), this->_dashes.getY());
}