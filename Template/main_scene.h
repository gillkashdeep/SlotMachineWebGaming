#pragma once
#ifndef  __MAINSCENE__
#define   __MAINSCENE__
#include "../src/Scene.h"
#include  "../src/Label.h"

class main_scene : public Scene
{

	main_scene();
	~main_scene();
	
public:
	void draw() override;
	void update() override;
	void clean() override;
	void handleEvents() override;
	void start() override;


private:

	Label* m_pLabel;
};



#endif 

