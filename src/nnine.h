#pragma once
#ifndef __nnine__
#define __nnine__

#include "DisplayObject.h"

class nnine : public DisplayObject
{

public:
	nnine();
	~nnine();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__nnine__) */

