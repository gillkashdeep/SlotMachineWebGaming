#pragma once
#ifndef __Blank__
#define __Blank__

#include "DisplayObject.h"

class Blank : public DisplayObject
{

public:
	Blank();
	~Blank();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__Blank__) */