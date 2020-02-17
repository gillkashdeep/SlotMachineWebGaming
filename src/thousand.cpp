#include "thousand.h"
#include "TextureManager.h"
#include "Game.h"

thousand::thousand()
{

	TheTextureManager::Instance()->load("../Assets/textures/thousand.png",
		"thousand", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("thousand");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::THOUSAND);
	setState(SteeringState::IDLE);
	
}

thousand::~thousand()
{
}

void thousand::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	

	TheTextureManager::Instance()->draw("thousand", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255,true);
}

void thousand::update()
{
	
}

void thousand::clean()
{

}
