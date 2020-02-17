#pragma once
#ifndef __Grapes__
#define __Grapes__

#include "DisplayObject.h"

class Grapes : public DisplayObject
{

public:
	Grapes();
	~Grapes();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__Grapes__) */