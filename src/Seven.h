#pragma once
#ifndef __Seven__
#define __Seven__

#include "DisplayObject.h"

class Seven : public DisplayObject
{

public:
	Seven();
	~Seven();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__Seven__) */