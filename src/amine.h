#pragma once
#ifndef __amine__
#define __amine__

#include "DisplayObject.h"

class amine : public DisplayObject
{

public:
	amine();
	~amine();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__amine__) */

