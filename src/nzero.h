#pragma once
#ifndef __nzero__
#define __nzero__

#include "DisplayObject.h"

class nzero : public DisplayObject
{

public:
	nzero();
	~nzero();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__nzero__) */

