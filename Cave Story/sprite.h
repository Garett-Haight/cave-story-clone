#ifndef SPRITE_H
#define SPRITE_H
#include <SDL.h>
#include <string>
#include <map>

#include "rectangle.h"
#include "globals.h"

/*
	Sprite Class
	Holds all information for individual sprites
*/
class Graphics; 

class Sprite
{
public:
	Sprite();
	Sprite(Graphics &graphics, const std::string &filePath, int sourceX, int sourceY, 
		   int width, int height, float posX, float postY);
	virtual ~Sprite();
	virtual void update();
	void draw(Graphics &graphics, int x, int y);

	const Rectangle getBoundingBox() const;
	const sides::Side getCollisionSide(Rectangle &other) const;
	const inline float getX() const { return this->_x; }
	const inline float getY() const { return this->_y; }

	void setSourceRectX(int value);
	void setSourceRectY(int value);
	void setSourceRectW(int value);
	void setSourceRectH(int value);

protected:
	SDL_Rect _sourceRect;
	SDL_Texture* _spriteSheet;

	Rectangle _boundingBox;

	float _x;
	float _y;
private:

};

#endif

