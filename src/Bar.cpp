#include "Bar.h"
#include "TextureManager.h"
#include "Game.h"

Bar::Bar()
{

	TheTextureManager::Instance()->load("../Assets/textures/bar.png",
		"Bar", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Bar");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(-100.0f, -100.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::BAR);
	setState(SteeringState::IDLE);

}

Bar::~Bar()
{
}


void Bar::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;


	TheTextureManager::Instance()->draw("Bar", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255, true);
}

void Bar::update()
{

}

void Bar::clean()
{

}
