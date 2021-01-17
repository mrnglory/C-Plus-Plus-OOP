#include "ConversationBook.h"
#include "CompactDisc.h"

int main() {
	Product* p[100];
	int id = 0;
	string description, manufacturer, price, AlbumTitle, singer, BookTitle, author, language, ISBN;
	bool exit = true;

	cout << "***** 상품 관리 프로그램을 작동합니다. *****	" << endl;
	while(1) {
		cout << "상품 추가(1), 모든 상품 조회(2), 끝내기(3) ? ";
		int n;
		cin >> n;
		if (n == 1) {
			if (id >= 100) break;
			cout << "상품 종류 책(1), 음악CD(2), 회화책(3) ? ";
			cin >> n;
			cin.ignore();
			if (n == 1) {
				cout << "상품설명>>"; getline(cin, description);
				cout << "생산자>>"; getline(cin, manufacturer);
				cout << "가격>>"; getline(cin, price);
				cout << "책제목>>"; getline(cin, BookTitle);
				cout << "저자>>"; getline(cin, author);
				cout << "ISBN>>"; getline(cin, ISBN);
				Book* b = new Book(id, description, manufacturer, price, ISBN, author, BookTitle);
				p[id] = b;
				++id;
			}
			else if (n == 2) {
				cout << "상품설명>>"; getline(cin, description);
				cout << "생산자>>"; getline(cin, manufacturer);
				cout << "가격>>"; getline(cin, price);
				cout << "앨범제목>>"; getline(cin, AlbumTitle);
				cout << "가수>>"; getline(cin, singer);
				CompactDisc* CD = new CompactDisc(id, description, manufacturer, price, AlbumTitle, singer);
				p[id] = CD;
				++id;
			}
			else if (n == 3) {
				cout << "상품설명>>"; getline(cin, description);
				cout << "생산자>>"; getline(cin, manufacturer);
				cout << "가격>>"; getline(cin, price);
				cout << "책제목>>"; getline(cin, BookTitle);
				cout << "저자>>"; getline(cin, author);
				cout << "언어>>"; getline(cin, language);
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