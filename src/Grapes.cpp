#include "Grapes.h"
#include "TextureManager.h"
#include "Game.h"

Grapes::Grapes()
{

	TheTextureManager::Instance()->load("../Assets/textures/grapes.png",
		"Grapes", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Grapes");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(-100.0f, -100.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::GRAPES);
	setState(SteeringState::IDLE);

}

Grapes::~Grapes()
{
}


void Grapes::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;


	TheTextureManager::Instance()->draw("Grapes", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255, true);
}

void Grapes::update()
{

}

void Grapes::clean()
{

}
