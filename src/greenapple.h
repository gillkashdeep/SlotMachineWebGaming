#pragma once
#ifndef __greenapple__
#define __greenapple__

#include "DisplayObject.h"

class greenapple : public DisplayObject
{

public:
	greenapple();
	~greenapple();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__greenapple__) */

