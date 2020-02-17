#include "greenapple.h"
#include "TextureManager.h"
#include "Game.h"

greenapple::greenapple()
{

	TheTextureManager::Instance()->load("../Assets/textures/greenapple.png",
		"greenapple", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("greenapple");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::APPLE);
	setState(SteeringState::IDLE);
	
}

greenapple::~greenapple()
{
}

void greenapple::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	

	TheTextureManager::Instance()->draw("greenapple", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255,true);
}

void greenapple::update()
{
	
}

void greenapple::clean()
{

}
