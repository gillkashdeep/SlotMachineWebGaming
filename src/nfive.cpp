#include "nfive.h"
#include "TextureManager.h"
#include "Game.h"

nfive::nfive()
{

	TheTextureManager::Instance()->load("../Assets/textures/five.png",
		"nfive", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("nfive");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::NFIVE);
	setState(SteeringState::IDLE);
	
}

nfive::~nfive()
{
}

void nfive::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	

	TheTextureManager::Instance()->draw("nfive", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255,true);
}

void nfive::update()
{
	
}

void nfive::clean()
{

}
