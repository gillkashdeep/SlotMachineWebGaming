#include "neight.h"
#include "TextureManager.h"
#include "Game.h"

neight::neight()
{

	TheTextureManager::Instance()->load("../Assets/textures/eight.png",
		"neight", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("neight");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::NEIGHT);
	setState(SteeringState::IDLE);
	
}

neight::~neight()
{
}

void neight::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	

	TheTextureManager::Instance()->draw("neight", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255,true);
}

void neight::update()
{
	
}

void neight::clean()
{

}
