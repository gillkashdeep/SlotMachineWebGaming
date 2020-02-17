#include "main_scene.h"
#include "../src/Label.h"

//void main_scene::main_scene()
//{
//
//	start();
//}


void main_scene::draw()
{

	m_pLabel->draw();
}

void main_scene::update()
{
}

void main_scene::clean()
{
}

void main_scene::handleEvents()
{
}

void main_scene::start()
{
	m_pLabel = new Label();
}
