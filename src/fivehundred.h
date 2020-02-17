#pragma once
#ifndef __fivehundred__
#define __fivehundred__

#include "DisplayObject.h"

class fivehundred : public DisplayObject
{

public:
	fivehundred();
	~fivehundred();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__fivehundred__) */

