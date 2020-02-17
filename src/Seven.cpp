#include "Seven.h"
#include "TextureManager.h"
#include "Game.h"

Seven::Seven()
{

	TheTextureManager::Instance()->load("../Assets/textures/seven.png",
		"Seven", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Seven");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(-100.0f, -100.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::SEVEN);
	setState(SteeringState::IDLE);

}

Seven::~Seven()
{
}


void Seven::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;


	TheTextureManager::Instance()->draw("Seven", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255, true);
}

void Seven::update()
{

}

void Seven::clean()
{

}
