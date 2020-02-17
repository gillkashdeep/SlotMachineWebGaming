#pragma once
#ifndef __ntwo__
#define __ntwo__

#include "DisplayObject.h"

class ntwo : public DisplayObject
{

public:
	ntwo();
	~ntwo();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__ntwo__) */

