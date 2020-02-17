#pragma once
#ifndef __ButtonSpinDisabled__
#define __ButtonSpinDisabled__
#include "GameObject.h"
#include <SDL_hints.h>
#include <iostream>

class ButtonSpinDisabled : public GameObject
{
	
public:
	ButtonSpinDisabled();
	~ButtonSpinDisabled();
	
	void draw() override;
	void update() override;
	void clean() override;
	
	bool ButtonClick();

private:
	double m_currentDirection;
};

#endif
