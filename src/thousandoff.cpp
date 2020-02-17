#include "thousandoff.h"
#include "TextureManager.h"
#include "Game.h"

thousandoff::thousandoff()
{

	TheTextureManager::Instance()->load("../Assets/textures/thousandoff.png",
		"thousandoff", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("thousandoff");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::THOUSANDOFF);
	setState(SteeringState::IDLE);
	
}

thousandoff::~thousandoff()
{
}

void thousandoff::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	

	TheTextureManager::Instance()->draw("thousandoff", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255,true);
}

void thousandoff::update()
{
	
}

void thousandoff::clean()
{

}
