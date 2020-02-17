#include "amine.h"
#include "TextureManager.h"
#include "Game.h"

amine::amine()
{

	TheTextureManager::Instance()->load("../Assets/textures/amine.png",
		"amine", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("amine");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::A_MINE);
	setState(SteeringState::IDLE);
	
}

amine::~amine()
{
}

void amine::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	

	TheTextureManager::Instance()->draw("amine", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255,true);
}

void amine::update()
{
	
}

void amine::clean()
{

}
