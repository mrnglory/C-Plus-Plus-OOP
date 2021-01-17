#include "ConversationBook.h"
#include "CompactDisc.h"

int main() {
	Product* p[100];
	int id = 0;
	string description, manufacturer, price, AlbumTitle, singer, BookTitle, author, language, ISBN;
	bool exit = true;

	cout << "***** ��ǰ ���� ���α׷��� �۵��մϴ�. *****	" << endl;
	while(1) {
		cout << "��ǰ �߰�(1), ��� ��ǰ ��ȸ(2), ������(3) ? ";
		int n;
		cin >> n;
		if (n == 1) {
			if (id >= 100) break;
			cout << "��ǰ ���� å(1), ����CD(2), ȸȭå(3) ? ";
			cin >> n;
			cin.ignore();
			if (n == 1) {
				cout << "��ǰ����>>"; getline(cin, description);
				cout << "������>>"; getline(cin, manufacturer);
				cout << "����>>"; getline(cin, price);
				cout << "å����>>"; getline(cin, BookTitle);
				cout << "����>>"; getline(cin, author);
				cout << "ISBN>>"; getline(cin, ISBN);
				Book* b = new Book(id, description, manufacturer, price, ISBN, author, BookTitle);
				p[id] = b;
				++id;
			}
			else if (n == 2) {
				cout << "��ǰ����>>"; getline(cin, description);
				cout << "������>>"; getline(cin, manufacturer);
				cout << "����>>"; getline(cin, price);
				cout << "�ٹ�����>>"; getline(cin, AlbumTitle);
				cout << "����>>"; getline(cin, singer);
				CompactDisc* CD = new CompactDisc(id, description, manufacturer, price, AlbumTitle, singer);
				p[id] = CD;
				++id;
			}
			else if (n == 3) {
				cout << "��ǰ����>>"; getline(cin, description);
				cout << "������>>"; getline(cin, manufacturer);
				cout << "����>>"; getline(cin, price);
				cout << "å����>>"; getline(cin, BookTitle);
				cout << "����>>"; getline(cin, author);
				cout << "���>>"; getline(cin, language);
				cout << "ISBN>>"; getline(cin, ISBN);
				ConversationBook* CB = new ConversationBook(id, description, manufacturer, price, BookTitle, author, language, ISBN);
				p[id] = CB;
				++id;
			}
		}
		else if (n == 2) {
			for (int i = 0; i < id; i++)
				p[i]->show();
		}
		else if (n == 3) {
			break;
		}
		cout << endl;
	}
}