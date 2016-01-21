#ifndef SPRITE_H
#define SPRITE_H
#include <SDL.h>
#include <string>
#include <map>
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
protected:
	SDL_Rect _sourceRect;
	SDL_Texture* _spriteSheet;
private:
	float _x;
	float _y;
};

#endif

