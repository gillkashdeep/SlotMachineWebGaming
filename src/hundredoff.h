#pragma once
#ifndef __hundredoff__
#define __hundredoff__

#include "DisplayObject.h"

class hundredoff : public DisplayObject
{

public:
	hundredoff();
	~hundredoff();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__hundredoff__) */

