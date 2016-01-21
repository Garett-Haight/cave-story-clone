#include "input.h"



Input::Input()
{
}


Input::~Input()
{
}

// this function gets called at the beginning of each new frame
// to reset the keys that are no longer relevant

void Input::beginNewFrame() {
	this->_pressedKeys.clear();
	this->_releasedKeys.clear();
}

// This gets called when a key has been pressed. Assigns state of key
void Input::KeyDownEvent(const SDL_Event& event) {
	this->_pressedKeys[event.key.keysym.scancode] = true;
	this->_heldKeys[event.key.keysym.scancode] = true;

}

// This gets called when a key is released
void Input::keyUpEvent(const SDL_Event& event) {
	this->_releasedKeys[event.key.keysym.scancode] = true;
	this->_heldKeys[event.key.keysym.scancode] = false;
}

// This checks if a certain key was pressed during the current frame
bool Input::wasKeyPressed(SDL_Scancode key) {
	return this->_pressedKeys[key];
}

bool Input::wasKeyReleased(SDL_Scancode key) {
	return this->_releasedKeys[key];
}

bool Input::isKeyHeld(SDL_Scancode key) {
	return this->_heldKeys[key];
}