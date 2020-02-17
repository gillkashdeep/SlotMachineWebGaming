#pragma once
#ifndef __SlotMachine__
#define __SlotMachine__
#include <string>

class SlotMachine
{
public:

	static SlotMachine* Instance()
	{
		if (s_pInstance == nullptr)
		{
			s_pInstance = new SlotMachine();
			return s_pInstance;
		}

		return s_pInstance;
	}

	std::string * reels();
	bool checkRange(int value, int lowerBounds, int upperBounds);

	void start();
	void showPlayerStats();
	void resetFruitTally();
	void resetAll();
	void checkJackPot();
	void showWinMessage();
	void showLossMessage();
	void determineWinnings();
	void spin();
	bool canRun();
	bool hasResult();
	void readResult();

	int getWinnings();
	int getJackpot();
	int getTurn();
	int getPlayerBet();
	void setPlayerBet(int bet);
	int getWinNumber();
	int getPlayerMoney();
	int getLossNumber();
	int getSpinResult();
	std::string* getFruits();
private:
	SlotMachine();
	~SlotMachine();

	static SlotMachine* s_pInstance;

	static int m_playerMoney;
	static int m_winnings;
	static int m_jackpot;
	static int m_turn;
	static int m_playerBet;
	static int m_winNumber;
	static int m_lossNumber;
	static int m_spinResult;
	static std::string* m_fruits;
	static int m_winRatio;
	static int m_grapes;
	static int m_bananas;
	static int m_oranges;
	static int m_cherries;
	static int m_bars;
	static int m_bells;
	static int m_sevens;
	static int m_blanks;

	static bool m_isRunning;
	static bool m_hasResult;
};
typedef SlotMachine TheSlotMachine;
#endif /* defined (__SlotMachine__) */