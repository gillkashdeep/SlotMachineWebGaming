#include "nzero.h"
#include "TextureManager.h"
#include "Game.h"

nzero::nzero()
{

	TheTextureManager::Instance()->load("../Assets/textures/zero.png",
		"nzero", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("nzero");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::NZERO);
	setState(SteeringState::IDLE);
	
}

nzero::~nzero()
{
}

void nzero::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	

	TheTextureManager::Instance()->draw("nzero", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255,true);
}

void nzero::update()
{
	
}

void nzero::clean()
{

}
