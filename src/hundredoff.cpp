#include "hundredoff.h"
#include "TextureManager.h"
#include "Game.h"

hundredoff::hundredoff()
{

	TheTextureManager::Instance()->load("../Assets/textures/hundredoff.png",
		"hundredoff", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("hundredoff");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::HUNDREDOFF);
	setState(SteeringState::IDLE);
	
}

hundredoff::~hundredoff()
{
}

void hundredoff::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	

	TheTextureManager::Instance()->draw("hundredoff", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255,true);
}

void hundredoff::update()
{
	
}

void hundredoff::clean()
{

}
