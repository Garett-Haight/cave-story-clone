#ifndef PLAYER_H
#define PLAYER_H

#include "animatedSprite.h"
#include "slope.h"
#include "globals.h"


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
		void jump
		Starts jumping
	*/
	void jump();
	virtual void animationDone(std::string currentAnimation);
	virtual void setupAnimations();

	void handleTileCollisions(std::vector<Rectangle> &other);
	void handleSlopeCollisions(std::vector<Slope> &others);

	const float getX() const;
	const float getY() const;

private:
	float _dx, _dy;

	Direction _facing;

	bool _grounded;
};

#endif
