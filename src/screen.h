#pragma once
#ifndef __screen__
#define __screen__

#include "DisplayObject.h"

class screen : public DisplayObject
{

public:
	screen();
	~screen();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__screen__) */

