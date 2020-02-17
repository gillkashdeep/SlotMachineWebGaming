#include "nthree.h"
#include "TextureManager.h"
#include "Game.h"

nthree::nthree()
{

	TheTextureManager::Instance()->load("../Assets/textures/three.png",
		"nthree", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("nthree");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::NTHREE);
	setState(SteeringState::IDLE);
	
}

nthree::~nthree()
{
}

void nthree::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	

	TheTextureManager::Instance()->draw("nthree", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255,true);
}

void nthree::update()
{
	
}

void nthree::clean()
{

}
