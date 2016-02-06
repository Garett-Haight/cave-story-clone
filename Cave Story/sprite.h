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
protected:
	SDL_Rect _sourceRect;
	SDL_Texture* _spriteSheet;

	Rectangle _boundingBox;

	float _x;
	float _y;
private:

};

#endif

