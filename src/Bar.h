#pragma once
#ifndef __Bar__
#define __Bar__

#include "DisplayObject.h"

class Bar : public DisplayObject
{

public:
	Bar();
	~Bar();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__Bar__) */