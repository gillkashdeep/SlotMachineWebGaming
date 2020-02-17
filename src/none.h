#pragma once
#ifndef __none__
#define __none__

#include "DisplayObject.h"

class none : public DisplayObject
{

public:
	none();
	~none();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__none__) */

