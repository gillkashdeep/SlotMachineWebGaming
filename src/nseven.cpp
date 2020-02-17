#include "nseven.h"
#include "TextureManager.h"
#include "Game.h"

nseven::nseven()
{

	TheTextureManager::Instance()->load("../Assets/textures/nseven.png",
		"nseven", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("nseven");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::NSEVEN);
	setState(SteeringState::IDLE);
	
}

nseven::~nseven()
{
}

void nseven::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	

	TheTextureManager::Instance()->draw("nseven", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255,true);
}

void nseven::update()
{
	
}

void nseven::clean()
{

}
