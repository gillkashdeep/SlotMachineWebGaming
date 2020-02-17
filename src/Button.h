#pragma once
#ifndef __Button__
#define __Button__
#include "DisplayObject.h"
#include <SDL_hints.h>

class Button : public DisplayObject
{
public:

	Button(std::string imagePath = "../Assets/textures/spinButton.png",
		std::string buttonName = "spinButton",
		GameObjectType type = SPIN_BUTTON,
		glm::vec2 position = glm::vec2(0.0f, 0.0f), bool isCentered = true);

	virtual ~Button();
	void draw() override;
	void update() override;
	void clean() override;


	void setMousePosition(glm::vec2 mousePosition);
	void setMouseButtonClicked(bool clicked);

	virtual bool ButtonClick();

private:
	Uint8 m_alpha;
	std::string m_name;
	bool m_isCentered;
	glm::vec2 m_mousePosition;


protected:
	// getters
	bool m_mouseButtonClicked;
	bool m_mouseOver();
};

#endif


