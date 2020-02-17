#pragma once
#ifndef __thousandoff__
#define __thousandoff__

#include "DisplayObject.h"

class thousandoff : public DisplayObject
{

public:
	thousandoff();
	~thousandoff();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__thousandoff__) */

