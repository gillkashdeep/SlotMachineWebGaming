#pragma once
#ifndef __numberEcran__
#define __numberEcran__

#include "DisplayObject.h"

class numberEcran : public DisplayObject
{

public:
	numberEcran();
	~numberEcran();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__numberEcran__) */

