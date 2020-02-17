#pragma once
#ifndef __Bell__
#define __Bell__

#include "DisplayObject.h"

class Bell : public DisplayObject
{

public:
	Bell();
	~Bell();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__Bell__) */