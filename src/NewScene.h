#pragma once
#ifndef  __NEW_SCENE__
#define  __NEW_SCENE__

#include "Scene.h"
#include "Jackpot.h"
#include "Blank.h"
#include "Banana.h"
#include "Bar.h"
#include "Bell.h"
#include "Cherries.h"
#include "Coin.h"
#include "Grapes.h"
#include "Orange.h"
#include "Seven.h"
#include "ButtonReset.h"
#include "ButtonSpin.h"
#include "ButtonQuit.h"
#include "ButtonSpinDisabled.h"
#include "screen.h"
#include "nzero.h"
#include "none.h"
#include "ntwo.h"
#include "nthree.h"
#include "nfour.h"
#include "nfive.h"
#include "nsix.h"
#include "nseven.h"
#include "neight.h"
#include "nnine.h"

#include "thousand.h"
#include "fivehundred.h"
#include "hundred.h"
#include "fifty.h"
#include "thousandoff.h"
#include "fivehundredoff.h"
#include "hundredoff.h"
#include "fiftyoff.h"

class NewScene : public Scene
{
	public:
	NewScene();
	~NewScene();
	
	void draw() override;
	void update() override;
	void clean() override;
	void handleEvents() override;
	void start() override;	

	glm::vec2 getMousePosition();

private:
	void updateMoney(int money);
	void updateBet();
	DisplayObject* getNumberObj(int number);

	glm::vec2 m_mousePosition;

	Jackpot* m_pShip;

	Blank* m_pBlank;
	Blank* m_pBlank_1;
	Blank* m_pBlank_2;

	Banana* m_pBanana;
	Banana* m_pBanana_1;
	Banana* m_pBanana_2;

	Bar* m_pBar;
	Bar* m_pBar_1;
	Bar* m_pBar_2;

	Bell* m_pBell;
	Bell* m_pBell_1;
	Bell* m_pBell_2;

	Cherries* m_pCherries;
	Cherries* m_pCherries_1;
	Cherries* m_pCherries_2;

	Coin* m_pCoin;
	Coin* m_pCoin_1;
	Coin* m_pCoin_2;

	Grapes* m_pGrapes;
	Grapes* m_pGrapes_1;
	Grapes* m_pGrapes_2;

	Orange* m_pOrange;
	Orange* m_pOrange_1;
	Orange* m_pOrange_2;

	Seven* m_pSeven;
	Seven* m_pSeven_1;
	Seven* m_pSeven_2;

	ButtonReset* m_pResetbtn;
	ButtonSpin* m_pSpinbtn;
	ButtonQuit* m_pQuitbtn;
	ButtonSpinDisabled* m_pSpinDisabledbtn;

	screen* m_pscreen;

	DisplayObject* m_number_thth;
	DisplayObject* m_number_hth;
	DisplayObject* m_number_tth;
	DisplayObject* m_number_th;
	DisplayObject* m_number_h;
	DisplayObject* m_number_t;
	DisplayObject* m_nzero;

	DisplayObject* m_bet_1;
	DisplayObject* m_bet_2;
	DisplayObject* m_bet_3;
	DisplayObject* m_bet_4;

};


#endif
