//BlackJack(OOP) 0.4.0 - main.cpp
#include<iostream>
#include "Game.h"
using namespace std;
int main() {
	Game game;
	game.play();
	game.Shuffle();
	game.prepareRound();
	game.playerRound();
	game.dealerRound();
	system("pause");
	system("cls");
}