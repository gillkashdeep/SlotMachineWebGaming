#include "NewScene.h"
#include "Game.h"

#include "Blank.h"
#include "../Template/SlotMachine.h"

NewScene::NewScene()
{
	 start();
}

NewScene::~NewScene()
{
}

void NewScene::draw()
{
	m_pShip->draw();
	
	m_pBlank->draw();
	m_pBlank_1->draw();
	m_pBlank_2->draw();

    m_pBlank->draw();
    m_pBlank_1->draw();
    m_pBlank_2->draw();

    m_pBanana->draw();
    m_pBanana_1->draw();
    m_pBanana_2->draw();

    m_pBar->draw();
    m_pBar_1->draw();
    m_pBar_2->draw();

    m_pBell->draw();
    m_pBell_1->draw();
    m_pBell_2->draw();

    m_pCherries->draw();
    m_pCherries_1->draw();
    m_pCherries_2->draw();

    m_pCoin->draw();
    m_pCoin_1->draw();
    m_pCoin_2->draw();

    m_pGrapes->draw();
    m_pGrapes_1->draw();
    m_pGrapes_2->draw();

    m_pOrange->draw();
    m_pOrange_1->draw();
    m_pOrange_2->draw();

    m_pSeven->draw();
    m_pSeven_1->draw();
    m_pSeven_2->draw();

	m_pResetbtn->draw();
	m_pQuitbtn->draw();

	m_pSpinbtn->draw();
	m_pSpinDisabledbtn->draw();

	m_pscreen->draw();
	
    m_number_thth->draw();
    m_number_hth->draw();
    m_number_tth->draw();
    m_number_th->draw();
    m_number_h->draw();
    m_number_t->draw();
    m_nzero->draw();

    m_bet_1->draw();
    m_bet_2->draw();
    m_bet_3->draw();
    m_bet_4->draw();

	m_pShip->setPosition(glm::vec2(400.0f, 270.0f));
	
    m_pBlank->setPosition(POSITION_ITEM_1);
    m_pBlank_1->setPosition(POSITION_ITEM_2);
    m_pBlank_2->setPosition(POSITION_ITEM_3);

	m_pResetbtn->setPosition(POSITION_BTN_1);
	m_pQuitbtn->setPosition(POSITION_BTN_2);    
    if (TheSlotMachine::Instance()->getPlayerMoney() > 0 && 
        TheSlotMachine::Instance()->getPlayerMoney() >= TheSlotMachine::Instance()->getPlayerBet()
        && TheSlotMachine::Instance()->getPlayerBet() > 0) {
        m_pSpinbtn->setPosition(POSITION_BTN_3);
        m_pSpinDisabledbtn->setPosition(POSITION_ITEM_HIDDEN);
    }
    else {
        m_pSpinbtn->setPosition(POSITION_ITEM_HIDDEN);
        m_pSpinDisabledbtn->setPosition(POSITION_BTN_3);
    }


    m_pscreen->setPosition(POSITION_SCREEN);

    m_number_thth->setPosition(POSITION_N_1);
    m_number_hth->setPosition(POSITION_N_2);
    m_number_tth->setPosition(POSITION_N_3);
    m_number_th->setPosition(POSITION_N_4);
    m_number_h->setPosition(POSITION_N_5);
    m_number_t->setPosition(POSITION_N_6);
    m_nzero->setPosition(POSITION_N_7);

    m_bet_1->setPosition(POSITION_BET_1);
    m_bet_2->setPosition(POSITION_BET_2);
    m_bet_3->setPosition(POSITION_BET_3);
    m_bet_4->setPosition(POSITION_BET_4);

	
}

void NewScene::update()
{
	// m_pResetbtn->setMousePosition(m_mousePosition);
	// m_pResetbtn->ButtonClick();
    if (TheSlotMachine::Instance()->hasResult()) {

        m_pBlank->setPosition(POSITION_ITEM_HIDDEN);
        m_pBlank_1->setPosition(POSITION_ITEM_HIDDEN);
        m_pBlank_2->setPosition(POSITION_ITEM_HIDDEN);

        m_pBanana->setPosition(POSITION_ITEM_HIDDEN);
        m_pBanana_1->setPosition(POSITION_ITEM_HIDDEN);
        m_pBanana_2->setPosition(POSITION_ITEM_HIDDEN);

        m_pBar->setPosition(POSITION_ITEM_HIDDEN);
        m_pBar_1->setPosition(POSITION_ITEM_HIDDEN);
        m_pBar_2->setPosition(POSITION_ITEM_HIDDEN);

        m_pBell->setPosition(POSITION_ITEM_HIDDEN);
        m_pBell_1->setPosition(POSITION_ITEM_HIDDEN);
        m_pBell_2->setPosition(POSITION_ITEM_HIDDEN);

        m_pCherries->setPosition(POSITION_ITEM_HIDDEN);
        m_pCherries_1->setPosition(POSITION_ITEM_HIDDEN);
        m_pCherries_2->setPosition(POSITION_ITEM_HIDDEN);

        m_pCoin->setPosition(POSITION_ITEM_HIDDEN);
        m_pCoin_1->setPosition(POSITION_ITEM_HIDDEN);
        m_pCoin_2->setPosition(POSITION_ITEM_HIDDEN);

        m_pGrapes->setPosition(POSITION_ITEM_HIDDEN);
        m_pGrapes_1->setPosition(POSITION_ITEM_HIDDEN);
        m_pGrapes_2->setPosition(POSITION_ITEM_HIDDEN);

        m_pOrange->setPosition(POSITION_ITEM_HIDDEN);
        m_pOrange_1->setPosition(POSITION_ITEM_HIDDEN);
        m_pOrange_2->setPosition(POSITION_ITEM_HIDDEN);

        m_pSeven->setPosition(POSITION_ITEM_HIDDEN);
        m_pSeven_1->setPosition(POSITION_ITEM_HIDDEN);
        m_pSeven_2->setPosition(POSITION_ITEM_HIDDEN);

        std::string* result = TheSlotMachine::Instance()->getFruits();
        for (int i = 0; i < 3; i++) {
            std::cout << result[i] << " ";

            if (result[i] == "Blank") {
                if (i == 0) {
                    m_pBlank->setPosition(POSITION_ITEM_1);
                }
                else if (i == 1) {
                    m_pBlank_1->setPosition(POSITION_ITEM_2);
                }
                else if (i == 2) {
                    m_pBlank_2->setPosition(POSITION_ITEM_3);
                }

            } else if (result[i] == "Banana") {
                if (i == 0) {
                    m_pBanana->setPosition(POSITION_ITEM_1);
                }
                else if (i == 1) {
                    m_pBanana_1->setPosition(POSITION_ITEM_2);
                }
                else if (i == 2) {
                    m_pBanana_2->setPosition(POSITION_ITEM_3);
                }
            }
            else if (result[i] == "Bar") {
                if (i == 0) {
                    m_pBar->setPosition(POSITION_ITEM_1);
                }
                else if (i == 1) {
                    m_pBar_1->setPosition(POSITION_ITEM_2);
                }
                else if (i == 2) {
                    m_pBar_2->setPosition(POSITION_ITEM_3);
                }
            }
            else if (result[i] == "Bell") {
                if (i == 0) {
                    m_pBell->setPosition(POSITION_ITEM_1);
                }
                else if (i == 1) {
                    m_pBell_1->setPosition(POSITION_ITEM_2);
                }
                else if (i == 2) {
                    m_pBell_2->setPosition(POSITION_ITEM_3);
                }
            }
            else if (result[i] == "Cherries") {
                if (i == 0) {
                    m_pCherries->setPosition(POSITION_ITEM_1);
                }
                else if (i == 1) {
                    m_pCherries_1->setPosition(POSITION_ITEM_2);
                }
                else if (i == 2) {
                    m_pCherries_2->setPosition(POSITION_ITEM_3);
                }
            }
            else if (result[i] == "Coin") {
                if (i == 0) {
                    m_pCoin->setPosition(POSITION_ITEM_1);
                }
                else if (i == 1) {
                    m_pCoin_1->setPosition(POSITION_ITEM_2);
                }
                else if (i == 2) {
                    m_pCoin_2->setPosition(POSITION_ITEM_3);
                }
            }
            else if (result[i] == "Grapes") {
                if (i == 0) {
                    m_pGrapes->setPosition(POSITION_ITEM_1);
                }
                else if (i == 1) {
                    m_pGrapes_1->setPosition(POSITION_ITEM_2);
                }
                else if (i == 2) {
                    m_pGrapes_2->setPosition(POSITION_ITEM_3);
                }
            }
            else if (result[i] == "Orange") {
                if (i == 0) {
                    m_pOrange->setPosition(POSITION_ITEM_1);
                }
                else if (i == 1) {
                    m_pOrange_1->setPosition(POSITION_ITEM_2);
                }
                else if (i == 2) {
                    m_pOrange_2->setPosition(POSITION_ITEM_3);
                }
            }
            else if (result[i] == "Seven") {
            if (i == 0) {
                m_pSeven->setPosition(POSITION_ITEM_1);
            }
            else if (i == 1) {
                m_pSeven_1->setPosition(POSITION_ITEM_2);
            }
            else if (i == 2) {
                m_pSeven_2->setPosition(POSITION_ITEM_3);
            }
            }
            
        }
        std::cout << std::endl;
        updateMoney(TheSlotMachine::Instance()->getPlayerMoney());
        TheSlotMachine::Instance()->readResult();
    }
}

DisplayObject* NewScene::getNumberObj(int number) {
    DisplayObject* value = new nzero();
    switch (number)
    {
    case 1:
        value = new none();
        break;
    case 2:
        value = new ntwo();
        break;
    case 3:
        value = new nthree();
        break;
    case 4:
        value = new nfour();
        break;
    case 5:
        value = new nfive();
        break;
    case 6:
        value = new nsix();
        break;
    case 7:
        value = new nseven();
        break;
    case 8:
        value = new neight();
        break;
    case 9:
        value = new nnine();
        break;
    default:
        break;
    }
    return value;
}

void NewScene::updateMoney(int money) {
    
    int _thth = 1000000;
    int _hth = 100000;
    int _tth = 10000;
    int _th = 1000;
    int _h = 100;
    int _t = 10;

    int thth = money / _thth;

    if (thth > 0) {
        money = money - thth*_thth;
    }

    int hth = money / _hth;

    if (hth > 0) {
        money = money - hth*_hth;
    }

    int tth = money / _tth;

    if (tth > 0) {
        money = money - tth*_tth;
    }

    int th = money / _th;

    if (th > 0) {
        money = money - th*_th;
    }

    int h = money / _h;

    if (h > 0) {
        money = money - h*_h;
    }


    int t = money / _t;

    if (t > 0) {
        money = money - t*_t;
    }

    std::cout << thth;
    std::cout << hth;
    std::cout << tth;
    std::cout << th;
    std::cout << h;
    std::cout << t  << "0" << std::endl;
    
    m_number_thth = getNumberObj(thth);
    m_number_hth = getNumberObj(hth);
    m_number_tth = getNumberObj(tth);
    m_number_th = getNumberObj(th);
    m_number_h = getNumberObj(h);
    m_number_t = getNumberObj(t);
}

void NewScene::updateBet() {
    if (TheSlotMachine::Instance()->getPlayerBet() == 1000) {
        m_bet_1 = new thousand();
    }
    else {
        m_bet_1 = new thousandoff();
    }

    if (TheSlotMachine::Instance()->getPlayerBet() == 500) {
        m_bet_2 = new fivehundred();
    }
    else {
        m_bet_2 = new fivehundredoff();
    }

    if (TheSlotMachine::Instance()->getPlayerBet() == 100) {
        m_bet_3 = new hundred();
    }
    else {
        m_bet_3 = new hundredoff();
    }

    if (TheSlotMachine::Instance()->getPlayerBet() == 50) {
        m_bet_4 = new fifty();
    }
    else {
        m_bet_4 = new fiftyoff();
    }

}


void NewScene::clean()
{
}

void NewScene::handleEvents()
{
    SDL_Event event;
    if (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
        case SDL_MOUSEMOTION:
            m_mousePosition.x = event.motion.x;
            m_mousePosition.y = event.motion.y;
            // std::cout << "MOUSE MOVE" << std::endl;
            break;
        case SDL_MOUSEBUTTONDOWN:            
            /*std::cout << "CLICK MOUSE" << std::endl;
            std::cout << "MOUSE X" << m_mousePosition.x << std::endl;
            std::cout << "MOUSE Y" << m_mousePosition.y << std::endl;
            std::cout << "BUTTON_1 X" << POSITION_BTN_1.x << std::endl;
            std::cout << "BUTTON_1 Y" << POSITION_BTN_1.y << std::endl;
            std::cout << "BUTTON_2 X" << POSITION_BTN_2.x << std::endl;
            std::cout << "BUTTON_2 Y" << POSITION_BTN_2.y << std::endl;
            std::cout << "BUTTON_3 X" << POSITION_BTN_3.x << std::endl;
            std::cout << "BUTTON_3 Y" << POSITION_BTN_3.y << std::endl;*/            
            if (m_mousePosition.x > (POSITION_BTN_1.x - ACTION_BUTTON_OFFSET) && m_mousePosition.x < (POSITION_BTN_1.x + ACTION_BUTTON_OFFSET)
                && m_mousePosition.y >(POSITION_BTN_1.y - ACTION_BUTTON_OFFSET) && m_mousePosition.y < (POSITION_BTN_1.y + ACTION_BUTTON_OFFSET)) {
                if (TheSlotMachine::Instance()->canRun()) {
                    m_pResetbtn->ButtonClick();
                    TheSlotMachine::Instance()->resetAll();
                }
                break;
            } else if (m_mousePosition.x > (POSITION_BTN_2.x - ACTION_BUTTON_OFFSET) && m_mousePosition.x < (POSITION_BTN_2.x + ACTION_BUTTON_OFFSET)
                && m_mousePosition.y >(POSITION_BTN_2.y - ACTION_BUTTON_OFFSET) && m_mousePosition.y < (POSITION_BTN_2.y + ACTION_BUTTON_OFFSET)) {
                TheGame::Instance()->quit();
                break;
            } else if (m_mousePosition.x > (POSITION_BTN_3.x - ACTION_BUTTON_OFFSET) && m_mousePosition.x < (POSITION_BTN_3.x + ACTION_BUTTON_OFFSET)
                && m_mousePosition.y >(POSITION_BTN_3.y - ACTION_BUTTON_OFFSET) && m_mousePosition.y < (POSITION_BTN_3.y + ACTION_BUTTON_OFFSET)) {
                if (TheSlotMachine::Instance()->canRun() && TheSlotMachine::Instance()->getPlayerMoney() > 0
                    && TheSlotMachine::Instance()->getPlayerBet() > 0) {
                    m_pSpinbtn->ButtonClick();
                    TheSlotMachine::Instance()->spin();                    
                }
                break;
            }
            else if (m_mousePosition.x > (POSITION_BET_1.x - ACTION_BUTTON_OFFSET) && m_mousePosition.x < (POSITION_BET_1.x + ACTION_BUTTON_OFFSET)
                && m_mousePosition.y >(POSITION_BET_1.y - BET_BUTTON_OFFSET) && m_mousePosition.y < (POSITION_BET_1.y + BET_BUTTON_OFFSET)) {
                if (TheSlotMachine::Instance()->getPlayerMoney() >= 1000) {
                    TheSlotMachine::Instance()->setPlayerBet(1000);
                    //updateBet();
                    m_bet_1 = new thousand();
                    m_bet_2 = new fivehundredoff();
                    m_bet_3 = new hundredoff();
                    m_bet_4 = new fiftyoff();
                }

                break;
            }
            else if (m_mousePosition.x > (POSITION_BET_2.x - ACTION_BUTTON_OFFSET) && m_mousePosition.x < (POSITION_BET_2.x + ACTION_BUTTON_OFFSET)
                && m_mousePosition.y >(POSITION_BET_2.y - BET_BUTTON_OFFSET) && m_mousePosition.y < (POSITION_BET_2.y + BET_BUTTON_OFFSET)) {
                if (TheSlotMachine::Instance()->getPlayerMoney() >= 500) {
                    TheSlotMachine::Instance()->setPlayerBet(500);
                    //updateBet();
                    m_bet_1 = new thousandoff();
                    m_bet_2 = new fivehundred();
                    m_bet_3 = new hundredoff();
                    m_bet_4 = new fiftyoff();
                }
                break;
            }
            else if (m_mousePosition.x > (POSITION_BET_3.x - ACTION_BUTTON_OFFSET) && m_mousePosition.x < (POSITION_BET_3.x + ACTION_BUTTON_OFFSET)
                && m_mousePosition.y >(POSITION_BET_3.y - BET_BUTTON_OFFSET) && m_mousePosition.y < (POSITION_BET_3.y + BET_BUTTON_OFFSET)) {
                if (TheSlotMachine::Instance()->getPlayerMoney() >= 100) {
                    TheSlotMachine::Instance()->setPlayerBet(100);
                    //updateBet();
                    m_bet_1 = new thousandoff();
                    m_bet_2 = new fivehundredoff();
                    m_bet_3 = new hundred();     
                    m_bet_4 = new fiftyoff();
                }
                break;
            }
            else if (m_mousePosition.x > (POSITION_BET_4.x - ACTION_BUTTON_OFFSET) && m_mousePosition.x < (POSITION_BET_4.x + ACTION_BUTTON_OFFSET)
                && m_mousePosition.y >(POSITION_BET_4.y - BET_BUTTON_OFFSET) && m_mousePosition.y < (POSITION_BET_4.y + BET_BUTTON_OFFSET)) {
                if (TheSlotMachine::Instance()->getPlayerMoney() >= 50) {
                    TheSlotMachine::Instance()->setPlayerBet(50);
                    //updateBet();
                    m_bet_1 = new thousandoff();
                    m_bet_2 = new fivehundredoff();
                    m_bet_3 = new hundredoff();
                    m_bet_4 = new fifty();                    
                }
                break;
            }
            break;
        case SDL_QUIT:
            TheGame::Instance()->quit();
            break;
        case SDL_KEYDOWN:
            switch (event.key.keysym.sym)
            {
            case SDLK_ESCAPE:
                TheGame::Instance()->quit();
                break;
            case SDLK_1:
                if (TheSlotMachine::Instance()->canRun() && TheSlotMachine::Instance()->getPlayerMoney() > 0) {
                    m_pSpinbtn->ButtonClick();
                    TheSlotMachine::Instance()->spin();
                }                
                break;
            case SDLK_2:                
                if (TheSlotMachine::Instance()->canRun()) {
                    m_pResetbtn->ButtonClick();
                    TheSlotMachine::Instance()->resetAll();
                }
                break;            
            }
            break;

        default:
            break;
        }
    }
}

void NewScene::start()
{
	m_pShip = new Jackpot();

    m_pBlank = new Blank();
    m_pBlank_1 = new Blank();
    m_pBlank_2 = new Blank();

    m_pBanana = new Banana();
    m_pBanana_1 = new Banana();
    m_pBanana_2 = new Banana();

    m_pBar = new Bar();
    m_pBar_1 = new Bar();
    m_pBar_2 = new Bar();

    m_pBell = new Bell();
    m_pBell_1 = new Bell();
    m_pBell_2 = new Bell();

    m_pCherries = new Cherries();
    m_pCherries_1 = new Cherries();
    m_pCherries_2 = new Cherries();

    m_pCoin = new Coin();
    m_pCoin_1 = new Coin();
    m_pCoin_2 = new Coin();

    m_pGrapes = new Grapes();
    m_pGrapes_1 = new Grapes();
    m_pGrapes_2 = new Grapes();

    m_pOrange = new Orange();
    m_pOrange_1 = new Orange();
    m_pOrange_2 = new Orange();

    m_pSeven = new Seven();
    m_pSeven_1 = new Seven();
    m_pSeven_2 = new Seven();

	m_pResetbtn = new ButtonReset();
	m_pQuitbtn = new ButtonQuit();
	m_pSpinbtn = new ButtonSpin();
	m_pSpinDisabledbtn = new ButtonSpinDisabled();

	m_pscreen = new screen();

    m_number_thth = new nzero();
    m_number_hth = new nzero();
    m_number_tth = new nzero();
    m_number_th = new nzero();
    m_number_h = new nzero();
    m_number_t = new nzero();
    m_nzero = new nzero();

    m_bet_1 = new thousand();
    m_bet_2 = new fivehundred();
    m_bet_3 = new hundred();
    m_bet_4 = new fifty();

    TheSlotMachine::Instance()->start();
    updateMoney(TheSlotMachine::Instance()->getPlayerMoney());
}
