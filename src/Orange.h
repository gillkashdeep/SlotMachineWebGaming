#pragma once
#ifndef __Orange__
#define __Orange__

#include "DisplayObject.h"

class Orange : public DisplayObject
{

public:
	Orange();
	~Orange();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__Orange__) */