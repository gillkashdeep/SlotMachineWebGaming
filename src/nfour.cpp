#include "nfour.h"
#include "TextureManager.h"
#include "Game.h"

nfour::nfour()
{

	TheTextureManager::Instance()->load("../Assets/textures/four.png",
		"nfour", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("nfour");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::NFOUR);
	setState(SteeringState::IDLE);
	
}

nfour::~nfour()
{
}

void nfour::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	

	TheTextureManager::Instance()->draw("nfour", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255,true);
}

void nfour::update()
{
	
}

void nfour::clean()
{

}
