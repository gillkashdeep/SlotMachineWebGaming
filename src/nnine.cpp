#include "nnine.h"
#include "TextureManager.h"
#include "Game.h"

nnine::nnine()
{

	TheTextureManager::Instance()->load("../Assets/textures/nine.png",
		"nnine", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("nnine");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::NNINE);
	setState(SteeringState::IDLE);
	
}

nnine::~nnine()
{
}

void nnine::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	

	TheTextureManager::Instance()->draw("nnine", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255,true);
}

void nnine::update()
{
	
}

void nnine::clean()
{

}
