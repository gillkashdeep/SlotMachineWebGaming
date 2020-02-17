#pragma once
#ifndef __Cherries__
#define __Cherries__

#include "DisplayObject.h"

class Cherries : public DisplayObject
{

public:
	Cherries();
	~Cherries();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__Cherries__) */