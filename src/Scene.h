#pragma once
#ifndef __SCENE__
#define __SCENE__

#include <iostream>
#include <vector>
#include <string>

#include "GameObject.h"

#include "SceneState.h"

class Scene : public GameObject
{
public:
	friend class DisplayObject;
	Scene();
	virtual ~Scene();

	// Inherited via GameObject
	virtual void draw() override = 0;
	virtual void update() override = 0;
	virtual void clean() override = 0;
	virtual void handleEvents() = 0;
	virtual void start() = 0;

	void addChild(DisplayObject* child);
	void removeAllChildren();
	int numberOfChildren();

	const glm::vec2 POSITION_ITEM_HIDDEN = glm::vec2(-100.0f, -100.0f);
	const glm::vec2 POSITION_ITEM_1 = glm::vec2(257.0f, 275.0f);
	const glm::vec2 POSITION_ITEM_2 = glm::vec2(380.0f, 275.0f);
	const glm::vec2 POSITION_ITEM_3 = glm::vec2(503.0f, 275.0f);

	const glm::vec2 POSITION_BTN_1 = glm::vec2(180.0f, 470.0f);
	const glm::vec2 POSITION_BTN_2 = glm::vec2(395.0f, 468.0f);
	const glm::vec2 POSITION_BTN_3 = glm::vec2(575.0f, 465.0f);	
	
	const glm::vec2 POSITION_BET_1 = glm::vec2(470.0f, 445.0f);
	const glm::vec2 POSITION_BET_2 = glm::vec2(520.0f, 445.0f);
	const glm::vec2 POSITION_BET_3 = glm::vec2(470.0f, 485.0f);
	const glm::vec2 POSITION_BET_4 = glm::vec2(520.0f, 485.0f);

	const glm::vec2 POSITION_SCREEN = glm::vec2(285.0f, 468.0f);
	const glm::vec2 POSITION_N_1 = glm::vec2(225.0f, 468.0f);
	const glm::vec2 POSITION_N_2 = glm::vec2(245.0f, 468.0f);
	const glm::vec2 POSITION_N_3 = glm::vec2(265.0f, 468.0f);
	const glm::vec2 POSITION_N_4 = glm::vec2(285.0f, 468.0f);
	const glm::vec2 POSITION_N_5 = glm::vec2(305.0f, 468.0f);
	const glm::vec2 POSITION_N_6 = glm::vec2(325.0f, 468.0f);
	const glm::vec2 POSITION_N_7 = glm::vec2(345.0f, 468.0f);
	const int ACTION_BUTTON_OFFSET = 20;
	const int BET_BUTTON_OFFSET = 10;
private:
	std::vector<DisplayObject*> m_displayList;
};

#endif /* defined (__SCENE__) */
