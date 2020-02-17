#include "Orange.h"
#include "TextureManager.h"
#include "Game.h"

Orange::Orange()
{

	TheTextureManager::Instance()->load("../Assets/textures/orange.png",
		"Orange", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Orange");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(-100.0f, -100.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::ORANGE);
	setState(SteeringState::IDLE);

}

Orange::~Orange()
{
}


void Orange::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;


	TheTextureManager::Instance()->draw("Orange", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255, true);
}

void Orange::update()
{

}

void Orange::clean()
{

}
