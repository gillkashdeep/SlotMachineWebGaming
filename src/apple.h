#pragma once
#ifndef __apple__
#define __apple__

#include "DisplayObject.h"

class apple : public DisplayObject
{

public:
	apple();
	~apple();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__apple__) */

