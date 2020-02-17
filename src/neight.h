#pragma once
#ifndef __neight__
#define __neight__

#include "DisplayObject.h"

class neight : public DisplayObject
{

public:
	neight();
	~neight();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__neight__) */

