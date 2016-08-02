#ifndef PLAYER_H
#define PLAYER_H

#include "animatedSprite.h"
#include "slope.h"
#include "globals.h"
#include "level.h"


class Player : public AnimatedSprite
{
public:
	Player();
	Player(Graphics &graphics, Vector2 spawnPoint);
	void draw(Graphics &graphics);
	void update(float elapsedTime);
	
	/*
		void MoveLeft
		Moves the player left by dx
	*/
	void MoveLeft();

	/*
		void moveRight
		Moves the player right by dx
	*/
	void MoveRight();

	/*
		void stopMoving
		Stops moving the player
	*/
	void stopMoving();

	/*
	void lookUp
	The player looks up
	*/
	void lookUp();

	/*
	void stopLookingUp
	The player stops looking up
	*/
	void stopLookingUp();

	/*
	void lookDown
	The player looks down OR interacts (turns around)
	*/
	void lookDown();

	/*
	void stopLookingDown
	The player stops looking down or interacting
	*/
	void stopLookingDown();
	/*
		void jump
		Starts jumping
	*/
	void jump();
	virtual void animationDone(std::string currentAnimation);
	virtual void setupAnimations();

	void handleTileCollisions(std::vector<Rectangle> &other);
	void handleSlopeCollisions(std::vector<Slope> &others);
	void handleDoorCollisions(std::vector<Door> &others, Level &level, Graphics &graphics);

	const float getX() const;
	const float getY() const;

	const inline int getMaxHealth() const { return this->_maxHealth;  }
	const inline int getCurrentHealth() const { return this->_currentHealth;  }

private:
	float _dx, _dy;

	Direction _facing;

	bool _grounded;

	bool _lookingUp;
	bool _lookingDown;

	int _maxHealth;
	int _currentHealth;
};

#endif
