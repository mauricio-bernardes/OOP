#include <iostream>
#include "HashGame.h"
#include "Player.h"

HashGame::HashGame()
{
	//inicialização da grade vazia
	for (int linha = 0; linha < 3; linha++)
	{
		for (int coluna = 0; coluna < 3; coluna++)
		{
			grid[linha][coluna] = ' ';
		}
	}
}

void HashGame::Show()
{
	for (int linha = 0; linha < 3; linha++)
	{
		for (int coluna = 0; coluna < 3; coluna++)
		{
			cout << grid[linha][coluna];
			if(coluna != 2)
			cout << '|';
		}
		cout << endl;
		if(linha != 2)
		cout << "-----" << endl;
	}
	winner = false;
}

bool HashGame::Play(int l, int c, char value)
{
	nMoves = 0;
	if (grid[l][c] == ' ')
	{
		grid[l][c] = value;
		nMoves = nMoves++;
		return true;
	}
	else
		return false;
}

void HashGame::SelectPlayer()
{
	string name;
	char symbol;
	cout << "Player 1, write your name? ";
	cin >> name;
	cout << "Player 1, chose your symbol: X or O ? ";
	cin >> symbol;

	p1.SetPlayer(name, symbol);

	/*string name;
	char symbol;*/
	cout << "Player 2, write your name? ";
	cin >> name;
	cout << "Player 2, chose your symbol: X or O ? ";
	cin >> symbol;

	p2.SetPlayer(name, symbol);
}

void HashGame::PlayGame()
{
	SelectPlayer();
	Show();
	while (!winner && nMoves < 9)
	{
		int l, c;
		cout << "Jogada" << nMoves << "Chose the coordenates: (l,c)" << endl;
		cin >> l >> c;
		Play(l, c, 'X');

		if (!Play(l, c, 'X'))
		{
			cout << endl << "Invalid move" << endl;
			Show();
		}
		//Play the moves
	}
	Show();
}
//bool HashGame::VerifyWinner()
//{
//	//Verify lines
//	for (int i = 0; i < 3; i++)
//	{
//		if(grid[i][0]==grid[i][1] && grid[i][0]= grid[i][2])
//	}
//
//
//	return false;
//}
