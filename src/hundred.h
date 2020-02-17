#pragma once
#ifndef __hundred__
#define __hundred__

#include "DisplayObject.h"

class hundred : public DisplayObject
{

public:
	hundred();
	~hundred();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double m_currentDirection;
};


#endif /* defined (__hundred__) */

