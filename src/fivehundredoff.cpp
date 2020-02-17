#include "fivehundredoff.h"
#include "TextureManager.h"
#include "Game.h"

fivehundredoff::fivehundredoff()
{

	TheTextureManager::Instance()->load("../Assets/textures/fivehundredoff.png",
		"fivehundredoff", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("fivehundredoff");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::FIVEHUNDREDOFF);
	setState(SteeringState::IDLE);
	
}

fivehundredoff::~fivehundredoff()
{
}

void fivehundredoff::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	

	TheTextureManager::Instance()->draw("fivehundredoff", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255,true);
}

void fivehundredoff::update()
{
	
}

void fivehundredoff::clean()
{

}
