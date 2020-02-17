#include "Bell.h"
#include "TextureManager.h"
#include "Game.h"

Bell::Bell()
{

	TheTextureManager::Instance()->load("../Assets/textures/bell.png",
		"Bell", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Bell");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(-100.0f, -100.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::BELL);
	setState(SteeringState::IDLE);

}

Bell::~Bell()
{
}


void Bell::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;


	TheTextureManager::Instance()->draw("Bell", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255, true);
}

void Bell::update()
{

}

void Bell::clean()
{

}
