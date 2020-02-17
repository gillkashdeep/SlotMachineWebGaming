#include "none.h"
#include "TextureManager.h"
#include "Game.h"

none::none()
{

	TheTextureManager::Instance()->load("../Assets/textures/one.png",
		"none", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("none");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::ONE);
	setState(SteeringState::IDLE);
	
}

none::~none()
{
}

void none::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	

	TheTextureManager::Instance()->draw("none", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255,true);
}

void none::update()
{
	
}

void none::clean()
{

}
