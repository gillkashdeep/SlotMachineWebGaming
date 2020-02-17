#include "SlotMachine.h"
#include <iostream>
#include <iomanip>

SlotMachine* SlotMachine::s_pInstance = 0;
int SlotMachine::m_playerMoney = 1000;

int SlotMachine::m_winnings = 0;
int SlotMachine::m_jackpot = 5000;
int SlotMachine::m_turn = 0;
int SlotMachine::m_playerBet = 0;
int SlotMachine::m_winNumber = 0;
int SlotMachine::m_lossNumber = 0;
int SlotMachine::m_spinResult;
std::string *SlotMachine::m_fruits = new std::string [3];
int SlotMachine::m_winRatio = 0;
int SlotMachine::m_grapes = 0;
int SlotMachine::m_bananas = 0;
int SlotMachine::m_oranges = 0;
int SlotMachine::m_cherries = 0;
int SlotMachine::m_bars = 0;
int SlotMachine::m_bells = 0;
int SlotMachine::m_sevens = 0;
int SlotMachine::m_blanks = 0;

bool SlotMachine::m_isRunning= false;
bool SlotMachine::m_hasResult= false;

SlotMachine::SlotMachine()
{
   
}


SlotMachine::~SlotMachine()
{
}

void SlotMachine::start() {

}

/* Utility function to show Player Stats */
void SlotMachine::showPlayerStats()
{
    SlotMachine::m_winRatio <- m_winNumber / m_turn;

    std::cout << "Jackpot: " << m_jackpot << std::endl;
    std::cout << "Player Money: " << m_playerMoney << std::endl;
    std::cout << "Turn: " << m_turn << std::endl;
    std::cout << "Wins: " << m_winNumber << std::endl;
    std::cout << "Losses: " << m_lossNumber << std::endl;    
    std::cout << "Win Ratio: ";
    //std::cout << std::fixed;
    //std::cout << std::setprecision(2);
    std::cout << m_winRatio * 100 << "%" << std::endl;
}


/* Utility function to reset all fruit tallies */
void SlotMachine::resetFruitTally() {
    m_grapes = 0;
    m_bananas = 0;
    m_oranges = 0;
    m_cherries = 0;
    m_bars = 0;
    m_bells = 0;
    m_sevens = 0;
    m_blanks = 0;
}

/* Utility function to reset the player stats */
void SlotMachine::resetAll() {
    m_isRunning = true;
    m_playerMoney = 1000;
    m_winnings = 0;
    m_jackpot = 5000;
    m_turn = 0;
    m_playerBet = 0;
    m_winNumber = 0;
    m_lossNumber = 0;
    m_winRatio = 0;
    m_fruits = new std::string[3];
    m_fruits[0] = "Blank";
    m_fruits[1] = "Blank";
    m_fruits[2] = "Blank";
    m_isRunning = false;
    m_hasResult = true;
}

/* Check to see if the player won the jackpot */
void SlotMachine::checkJackPot() {
    /* compare two random values */
    int jackPotTry = floor(((rand() % 100) * 0.51) + 1);
    int jackPotWin = floor(((rand() % 100) * 0.51) + 1);
    if (jackPotTry == jackPotWin) {
        std::cout << "You Won the $" << (m_jackpot) << " Jackpot!!" << std::endl;
        m_playerMoney += m_jackpot;
        m_jackpot = 1000;
    }
}

/* Utility function to show a win message and increase player money */
void SlotMachine::showWinMessage() {
    m_playerMoney += m_winnings;
    std::cout << "You Won: $" << m_winnings << std::endl;
    resetFruitTally();
    checkJackPot();
}

/* Utility function to show a loss message and reduce player money */
void SlotMachine::showLossMessage() {
    m_playerMoney -= m_playerBet;
    std::cout << "You Lost!" << std::endl;
    resetFruitTally();
}

/* Utility function to check if a value falls within a range of bounds */
bool SlotMachine::checkRange(int value, int lowerBounds, int upperBounds) {
    if (value >= lowerBounds && value <= upperBounds)
    {
        return value;
    }
    else {
        return !value;
    }
}

std::string * SlotMachine::reels() {
    std::string * betLine = new std::string[3];
    int outCome[3] = { 0, 0, 0 };

    for (int spin = 0; spin < 3; spin++) {
        outCome[spin] = floor(((rand() % 100) * 0.65) + 1);
        int val = outCome[spin];

        if (checkRange(val, 1, 27)) {
            // 41.5% probability
            betLine[spin] = "Blank";
            m_blanks++;
        }
        else if (checkRange(val, 28, 37)) {
            // 15.4% probability
            betLine[spin] = "Grapes";
            m_grapes++;
        }
        else if (checkRange(val, 38, 46)) {
            // 13.8% probability
            betLine[spin] = "Banana";
            m_bananas++;
        }
        else if (checkRange(val, 47, 54)) {
            // 12.3% probability
            betLine[spin] = "Orange";
            m_oranges++;
        }
        else if (checkRange(val, 55, 59)) {
            //  7.7% probability
            betLine[spin] = "Cherries";
            m_cherries++;
        }
        else if (checkRange(val, 60, 62)) {
            //  4.6% probability
            betLine[spin] = "Bar";
            m_bars++;
        }
        else if (checkRange(val, 63, 64)) {
            //  3.1% probability
            betLine[spin] = "Bell";
            m_bells++;
        }
        else if (checkRange(val, 65, 65)) {
            //  1.5% probability
            betLine[spin] = "Seven";
            m_sevens++;
        }

    }
    //std::cout << betLine << std::endl;
    for (int i = 0; i < 3; i++) {
        //std::cout << "*(p + " << i << ") : ";
        std::cout << betLine[i] << " ";
    }
    std::cout << std::endl;

    return betLine;
}

/* This function calculates the player's winnings, if any */
void SlotMachine::determineWinnings()
{
    if (m_blanks == 0)
    {
        if (m_grapes == 3) {
            m_winnings = m_playerBet * 10;
        }
        else if (m_bananas == 3) {
            m_winnings = m_playerBet * 20;
        }
        else if (m_oranges == 3) {
            m_winnings = m_playerBet * 30;
        }
        else if (m_cherries == 3) {
            m_winnings = m_playerBet * 40;
        }
        else if (m_bars == 3) {
            m_winnings = m_playerBet * 50;
        }
        else if (m_bells == 3) {
            m_winnings = m_playerBet * 75;
        }
        else if (m_sevens == 3) {
            m_winnings = m_playerBet * 100;
        }
        else if (m_grapes == 2) {
            m_winnings = m_playerBet * 2;
        }
        else if (m_bananas == 2) {
            m_winnings = m_playerBet * 2;
        }
        else if (m_oranges == 2) {
            m_winnings = m_playerBet * 3;
        }
        else if (m_cherries == 2) {
            m_winnings = m_playerBet * 4;
        }
        else if (m_bars == 2) {
            m_winnings = m_playerBet * 5;
        }
        else if (m_bells == 2) {
            m_winnings = m_playerBet * 10;
        }
        else if (m_sevens == 2) {
            m_winnings = m_playerBet * 20;
        }
        else if (m_sevens == 1) {
            m_winnings = m_playerBet * 5;
        }
        else {
            m_winnings = m_playerBet * 1;
        }
        m_winNumber++;
        showWinMessage();
    }
    else
    {
        m_lossNumber++;
        showLossMessage();
    }

}

void SlotMachine::spin()
{
    m_isRunning = true;
    //m_playerBet = 50;//$("div#betEntry>input").val();

    if (m_playerMoney == 0)
    {
        /*
        if (true) { // confirm("You ran out of Money! \nDo you want to play again?")
            resetAll();
            showPlayerStats();
        }
        */
    }
    else if (m_playerBet > m_playerMoney) {
        std::cout << "You don't have enough Money to place that bet." << std::endl;
    }
    else if (m_playerBet < 0) {
        std::cout << "All bets must be a positive $ amount." << std::endl;
    }
    else if (m_playerBet <= m_playerMoney) {
        m_fruits = reels();
        
        //std::cout << spinResult[0] << " - " << spinResult[1] << " - " << spinResult[2] << std::endl;
        for (int i = 0; i < 3; i++) {
            //std::cout << "*(p + " << i << ") : ";
            std::cout << m_fruits[i] << " ";
        }
        std::cout << std::endl;
        determineWinnings();
        m_turn++;
        showPlayerStats();
    }
    else {
        std::cout << "Please enter a valid bet amount" << std::endl;
    }
    m_isRunning = false;
    m_hasResult = true;
}

bool SlotMachine::canRun() {
    return !m_isRunning;
}

bool SlotMachine::hasResult() {
    return m_hasResult;
}

void SlotMachine::readResult() {
    m_hasResult = false;
}

int SlotMachine::getWinnings() {
    return m_winnings;
}
int SlotMachine::getJackpot() {
    return m_jackpot;
}
int SlotMachine::getTurn() {
    return m_turn;
}
int SlotMachine::getPlayerBet() {
    return m_playerBet;
}
void SlotMachine::setPlayerBet(int bet) {
    m_playerBet = bet;
}
int SlotMachine::getWinNumber() {
    return m_winNumber;
}
int SlotMachine::getPlayerMoney() {
    return m_playerMoney;
}
int SlotMachine::getLossNumber() {
    return m_lossNumber;
}
int SlotMachine::getSpinResult() {
    return m_spinResult;
}

std::string * SlotMachine::getFruits() {
    return m_fruits;
}