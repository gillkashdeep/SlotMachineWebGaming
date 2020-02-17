#include "Cherries.h"
#include "TextureManager.h"
#include "Game.h"

Cherries::Cherries()
{

	TheTextureManager::Instance()->load("../Assets/textures/cherries.png",
		"Cherries", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Cherries");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(-100.0f, -100.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::CHERRY);
	setState(SteeringState::IDLE);

}

Cherries::~Cherries()
{
}


void Cherries::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;


	TheTextureManager::Instance()->draw("Cherries", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255, true);
}

void Cherries::update()
{

}

void Cherries::clean()
{

}
