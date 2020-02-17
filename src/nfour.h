#pragma once
#ifndef __nfour__
#define __nfour__

#include "DisplayObject.h"

class nfour : public DisplayObject
{

public:
	nfour();
	~nfour();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__nfour__) */

