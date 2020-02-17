#include "ntwo.h"
#include "TextureManager.h"
#include "Game.h"

ntwo::ntwo()
{

	TheTextureManager::Instance()->load("../Assets/textures/two.png",
		"ntwo", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("ntwo");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::NTWO);
	setState(SteeringState::IDLE);
	
}

ntwo::~ntwo()
{
}

void ntwo::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	

	TheTextureManager::Instance()->draw("ntwo", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255,true);
}

void ntwo::update()
{
	
}

void ntwo::clean()
{

}
