#include "Coin.h"
#include "TextureManager.h"
#include "Game.h"

Coin::Coin()
{

	TheTextureManager::Instance()->load("../Assets/textures/coin.png",
		"Coin", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Coin");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(-100.0f, -100.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::COIN);
	setState(SteeringState::IDLE);

}

Coin::~Coin()
{
}


void Coin::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;


	TheTextureManager::Instance()->draw("Coin", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255, true);
}

void Coin::update()
{

}

void Coin::clean()
{

}
