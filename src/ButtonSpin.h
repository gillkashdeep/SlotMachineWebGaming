#pragma once
#ifndef __ButtonSpin__
#define __ButtonSpin__
#include "GameObject.h"
#include <SDL_hints.h>
#include <iostream>

class ButtonSpin : public GameObject
{
	
public:
	ButtonSpin();
	~ButtonSpin();
	
	void draw() override;
	void update() override;
	void clean() override;
	
	bool ButtonClick();

private:
	double m_currentDirection;
};

#endif
