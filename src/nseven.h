#pragma once
#ifndef __nseven__
#define __nseven__

#include "DisplayObject.h"

class nseven : public DisplayObject
{

public:
	nseven();
	~nseven();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__nseven__) */

