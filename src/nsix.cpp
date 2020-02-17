#include "nsix.h"
#include "TextureManager.h"
#include "Game.h"

nsix::nsix()
{

	TheTextureManager::Instance()->load("../Assets/textures/six.png",
		"nsix", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("nsix");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::NSIX);
	setState(SteeringState::IDLE);
	
}

nsix::~nsix()
{
}

void nsix::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	

	TheTextureManager::Instance()->draw("nsix", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255,true);
}

void nsix::update()
{
	
}

void nsix::clean()
{

}
