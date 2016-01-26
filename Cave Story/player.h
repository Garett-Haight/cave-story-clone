#ifndef PLAYER_H
#define PLAYER_H

#include "animatedSprite.h"
#include "globals.h"


class Player : public AnimatedSprite
{
public:
	Player();
	Player(Graphics &graphics, float x, float y);
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

	virtual void animationDone(std::string currentAnimation);
	virtual void setupAnimations();
private:
	float _dx, _dy;

	Direction _facing;
};

#endif
