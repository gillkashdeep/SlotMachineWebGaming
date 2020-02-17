#include "fiftyoff.h"
#include "TextureManager.h"
#include "Game.h"

fiftyoff::fiftyoff()
{

	TheTextureManager::Instance()->load("../Assets/textures/fiftyoff.png",
		"fiftyoff", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("fiftyoff");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::FIFTYOFF);
	setState(SteeringState::IDLE);
	
}

fiftyoff::~fiftyoff()
{
}

void fiftyoff::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	

	TheTextureManager::Instance()->draw("fiftyoff", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255,true);
}

void fiftyoff::update()
{
	
}

void fiftyoff::clean()
{

}
