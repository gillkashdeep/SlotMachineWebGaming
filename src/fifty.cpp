#include "fifty.h"
#include "TextureManager.h"
#include "Game.h"

fifty::fifty()
{

	TheTextureManager::Instance()->load("../Assets/textures/fifty.png",
		"fifty", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("fifty");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::FIFTY);
	setState(SteeringState::IDLE);
	
}

fifty::~fifty()
{
}

void fifty::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	

	TheTextureManager::Instance()->draw("fifty", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255,true);
}

void fifty::update()
{
	
}

void fifty::clean()
{

}
