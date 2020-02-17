#include "ButtonReset.h"
#include "TextureManager.h"
#include "Game.h"

ButtonReset::ButtonReset()
{

	TheTextureManager::Instance()->load("../Assets/textures/resetButton.png",
		"reset", TheGame::Instance()->getRenderer());
	
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("reset");

	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(400.0f, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	


	

}

ButtonReset::~ButtonReset()
{
}

void ButtonReset::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	

	TheTextureManager::Instance()->draw("reset", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255, true);

	
}

void ButtonReset::update()
{
}

void ButtonReset::clean()
{
}

void ButtonReset::setMousePosition(glm::vec2 mousePosition)
{
	m_mousePosition = mousePosition;
}

void ButtonReset::setMouseButtonClicked(bool clicked)
{
	m_mouseButtonClicked = clicked;
}


bool ButtonReset::m_mouseOver()
{
	const float topLeftX = getPosition().x - getWidth() * 0.5;
	const float topLeftY = getPosition().y - getHeight() * 0.5;
	const float width = getWidth();
	const float height = getHeight();

	// check if mouse is over button
	if (m_mousePosition.x > topLeftX&&
		m_mousePosition.x < topLeftX + width &&
		m_mousePosition.y > topLeftY&&
		m_mousePosition.y < topLeftY + height)
	{
		m_alpha = 178;
		return true;
	}
	else
	{
		m_alpha = 255;
		return false;
	}
}

bool ButtonReset::ButtonClick()
{
	std::cout << "button RESET clicked" << std::endl;
	return 0;
}
