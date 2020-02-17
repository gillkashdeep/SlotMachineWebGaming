#pragma once
#ifndef __thousand__
#define __thousand__

#include "DisplayObject.h"

class thousand : public DisplayObject
{

public:
	thousand();
	~thousand();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__thousand__) */

