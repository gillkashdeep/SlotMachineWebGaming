#pragma once
#ifndef __ButtonQuit__
#define __ButtonQuit__
#include "GameObject.h"
#include <SDL_hints.h>
#include <iostream>

class ButtonQuit : public GameObject
{
	
public:
	ButtonQuit();
	~ButtonQuit();
	
	void draw() override;
	void update() override;
	void clean() override;
	
	bool ButtonClick();

private:
	double m_currentDirection;
};

#endif
