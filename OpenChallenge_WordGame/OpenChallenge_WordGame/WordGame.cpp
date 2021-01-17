#include <iostream>
#include "WordGame.h"

void WordGame::startGame() {
	cout << "게임에 참가하는 인원은 몇명입니까?";
	cin >> nPlayers;
	players = new Player[nPlayers];
	createPlayers();

	cout << "시작하는 단어는 " << before << "입니다." << endl;

	int i = 0;
	for (;;) {
		cout << players[i % nPlayers].getName() << ">>";
		cin >> after;
		int j = before.size();
		if (before.at(j - 2) == after.at(0) && before.at(j - 1) == after.at(1))
			before = after;
		else {
			cout << players[i % nPlayers].getName() << " 탈락" << endl;
			cout << "게임 종료" << endl;
			break;
		}
		++i;
	}
}

void WordGame::createPlayers() {
	string playerName;
	for (int i = 0; i < nPlayers; ++i) {
		cout << "참가자의 이름을 입력하세요. 빈칸 없이>>";
		cin >> playerName;
		players[i].setName(playerName);
	}
}