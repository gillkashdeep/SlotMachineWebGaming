#include "hundred.h"
#include "TextureManager.h"
#include "Game.h"

hundred::hundred()
{

	TheTextureManager::Instance()->load("../Assets/textures/hundred.png",
		"hundred", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("hundred");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::HUNDRED);
	setState(SteeringState::IDLE);
	
}

hundred::~hundred()
{
}

void hundred::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	

	TheTextureManager::Instance()->draw("hundred", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255,true);
}

void hundred::update()
{
	
}

void hundred::clean()
{

}
