#pragma once
#ifndef __Coin__
#define __Coin__

#include "DisplayObject.h"

class Coin : public DisplayObject
{

public:
	Coin();
	~Coin();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__Coin__) */