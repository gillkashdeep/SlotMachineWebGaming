#pragma once
#ifndef __nthree__
#define __nthree__

#include "DisplayObject.h"

class nthree : public DisplayObject
{

public:
	nthree();
	~nthree();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__nthree__) */

