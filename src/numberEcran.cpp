#include "numberEcran.h"
#include "TextureManager.h"
#include "Game.h"

numberEcran::numberEcran()
{
	
}

numberEcran::~numberEcran()
{
}

void numberEcran::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	

	TheTextureManager::Instance()->draw("numberEcran", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255,true);
}

void numberEcran::update()
{
	
}

void numberEcran::clean()
{

}
