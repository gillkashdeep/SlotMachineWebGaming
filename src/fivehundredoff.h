#pragma once
#ifndef __fivehundredoff__
#define __fivehundredoff__

#include "DisplayObject.h"

class fivehundredoff : public DisplayObject
{

public:
	fivehundredoff();
	~fivehundredoff();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__fivehundredoff__) */

