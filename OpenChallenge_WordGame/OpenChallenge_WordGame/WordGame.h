#include "Player.h"
#include <string>
using namespace std;

class WordGame
{
	int nPlayers;
	string before;
	string after;
	string name;
	void createPlayers();
public:
	Player* players;
	WordGame() { before = "�ƹ���"; }
	~WordGame() { delete[] players; }
	void startGame();
};