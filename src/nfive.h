#pragma once
#ifndef __nfive__
#define __nfive__

#include "DisplayObject.h"

class nfive : public DisplayObject
{

public:
	nfive();
	~nfive();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__nfive__) */

