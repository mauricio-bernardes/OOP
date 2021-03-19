#pragma once
#include <iostream>
using namespace std;

class Player
{
	public:
		void SelectMove();
		void SetPlayer(string name, char symbol);
	private:
		char symbol; // X or O
		string name;
};

