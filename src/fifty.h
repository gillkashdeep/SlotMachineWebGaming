#pragma once
#ifndef __fifty__
#define __fifty__

#include "DisplayObject.h"

class fifty : public DisplayObject
{

public:
	fifty();
	~fifty();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__fifty__) */

