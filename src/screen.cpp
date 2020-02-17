#include "screen.h"
#include "TextureManager.h"
#include "Game.h"

screen::screen()
{

	TheTextureManager::Instance()->load("../Assets/textures/screen.png",
		"screen", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("screen");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::SCREEN);
	setState(SteeringState::IDLE);
	
}

screen::~screen()
{
}

void screen::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	

	TheTextureManager::Instance()->draw("screen", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255,true);
}

void screen::update()
{
	
}

void screen::clean()
{

}
