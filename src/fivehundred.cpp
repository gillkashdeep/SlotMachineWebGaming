#include "fivehundred.h"
#include "TextureManager.h"
#include "Game.h"

fivehundred::fivehundred()
{

	TheTextureManager::Instance()->load("../Assets/textures/fivehundred.png",
		"fivehundred", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("fivehundred");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::FIVEHUNDRED);
	setState(SteeringState::IDLE);
	
}

fivehundred::~fivehundred()
{
}

void fivehundred::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	

	TheTextureManager::Instance()->draw("fivehundred", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255,true);
}

void fivehundred::update()
{
	
}

void fivehundred::clean()
{

}
