#include "ButtonSpin.h"
#include "TextureManager.h"
#include "Game.h"

ButtonSpin::ButtonSpin()
{

	TheTextureManager::Instance()->load("../Assets/textures/spinButton.png",
		"spin", TheGame::Instance()->getRenderer());

	m_currentDirection = 0;


	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("spin");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);

}

ButtonSpin::~ButtonSpin()
{

	}

void ButtonSpin::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;



	TheTextureManager::Instance()->draw("spin", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255, true);
}

void ButtonSpin::update()
{
}

void ButtonSpin::clean()
{
}

bool ButtonSpin::ButtonClick()
{
	std::cout << "button SPIN clicked" << std::endl;
	return 0;
}