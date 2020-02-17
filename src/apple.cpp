#include "apple.h"
#include "TextureManager.h"
#include "Game.h"

apple::apple()
{

	TheTextureManager::Instance()->load("../Assets/textures/apple.png",
		"apple", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("apple");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::APPLE);
	setState(SteeringState::IDLE);
	
}

apple::~apple()
{
}

void apple::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	

	TheTextureManager::Instance()->draw("apple", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255,true);
}

void apple::update()
{
	
}

void apple::clean()
{

}
