#include "ButtonQuit.h"
#include "TextureManager.h"
#include "Game.h"

ButtonQuit::ButtonQuit()
{

	TheTextureManager::Instance()->load("../Assets/textures/quitButton.png",
		"quit", TheGame::Instance()->getRenderer());

	m_currentDirection = 0;


	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("quit");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);

}

ButtonQuit::~ButtonQuit()
{

	}

void ButtonQuit::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;



	TheTextureManager::Instance()->draw("quit", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255, true);
}

void ButtonQuit::update()
{
}

void ButtonQuit::clean()
{
}

bool ButtonQuit::ButtonClick()
{
	std::cout << "button Quit clicked" << std::endl;
	return 0;
}