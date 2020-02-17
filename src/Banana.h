#pragma once
#ifndef __Banana__
#define __Banana__

#include "DisplayObject.h"

class Banana : public DisplayObject
{

public:
	Banana();
	~Banana();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__Banana__) */