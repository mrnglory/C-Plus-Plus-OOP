#include <iostream>
#include "WordGame.h"

void WordGame::startGame() {
	cout << "���ӿ� �����ϴ� �ο��� ����Դϱ�?";
	cin >> nPlayers;
	players = new Player[nPlayers];
	createPlayers();

	cout << "�����ϴ� �ܾ�� " << before << "�Դϴ�." << endl;

	int i = 0;
	for (;;) {
		cout << players[i % nPlayers].getName() << ">>";
		cin >> after;
		int j = before.size();
		if (before.at(j - 2) == after.at(0) && before.at(j - 1) == after.at(1))
			before = after;
		else {
			cout << players[i % nPlayers].getName() << " Ż��" << endl;
			cout << "���� ����" << endl;
			break;
		}
		++i;
	}
}

void WordGame::createPlayers() {
	string playerName;
	for (int i = 0; i < nPlayers; ++i) {
		cout << "�������� �̸��� �Է��ϼ���. ��ĭ ����>>";
		cin >> playerName;
		players[i].setName(playerName);
	}
}