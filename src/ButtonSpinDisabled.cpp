#include "ButtonSpinDisabled.h"
#include "TextureManager.h"
#include "Game.h"

ButtonSpinDisabled::ButtonSpinDisabled()
{

	TheTextureManager::Instance()->load("../Assets/textures/spinButton_gray.png",
		"gspin", TheGame::Instance()->getRenderer());

	m_currentDirection = 0;


	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("gspin");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);

}

ButtonSpinDisabled::~ButtonSpinDisabled()
{

	}

void ButtonSpinDisabled::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;



	TheTextureManager::Instance()->draw("gspin", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255, true);
}

void ButtonSpinDisabled::update()
{
}

void ButtonSpinDisabled::clean()
{
}

bool ButtonSpinDisabled::ButtonClick()
{
	std::cout << "button SPIN DISABLED clicked" << std::endl;
	return 0;
}