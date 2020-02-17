#pragma once
#ifndef __nsix__
#define __nsix__

#include "DisplayObject.h"

class nsix : public DisplayObject
{

public:
	nsix();
	~nsix();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__nsix__) */

