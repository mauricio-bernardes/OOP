#pragma once
#include <iostream>
#include "Player.h"
using namespace std;

class HashGame
{
public:
	HashGame();
	void PlayGame();
	void Show();
	void SelectPlayer();
	bool Play(int l, int c, char value);
	bool VerifyWinner();

private:
	char grid[3][3];
	Player p1, p2;
	bool winner;
	int nMoves;
};