#pragma once
#ifndef __fiftyoff__
#define __fiftyoff__

#include "DisplayObject.h"

class fiftyoff : public DisplayObject
{

public:
	fiftyoff();
	~fiftyoff();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__fiftyoff__) */

