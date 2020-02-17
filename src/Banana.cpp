#include "Banana.h"
#include "TextureManager.h"
#include "Game.h"

Banana::Banana()
{

	TheTextureManager::Instance()->load("../Assets/textures/banana.png",
		"Banana", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Banana");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(-100.0f, -100.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::BANANA);
	setState(SteeringState::IDLE);

}

Banana::~Banana()
{
}


void Banana::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;


	TheTextureManager::Instance()->draw("Banana", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255, true);
}

void Banana::update()
{

}

void Banana::clean()
{

}
