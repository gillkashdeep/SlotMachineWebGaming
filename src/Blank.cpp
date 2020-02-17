#include "Blank.h"
#include "TextureManager.h"
#include "Game.h"

Blank::Blank()
{

	TheTextureManager::Instance()->load("../Assets/textures/blank.png",
		"Blank", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Blank");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(-100.0f, -100.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::BLANK);
	setState(SteeringState::IDLE);

}

Blank::~Blank()
{
}


void Blank::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;


	TheTextureManager::Instance()->draw("Blank", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255, true);
}

void Blank::update()
{

}

void Blank::clean()
{

}
