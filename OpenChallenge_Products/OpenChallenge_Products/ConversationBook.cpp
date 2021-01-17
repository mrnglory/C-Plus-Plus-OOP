#include "ConversationBook.h"

void ConversationBook::show() {
	cout << "--- 상품ID : " << getId() << endl;
	cout << "상품설명 : " << getDescription() << endl;
	cout << "생산자 : " << getManufacturer() << endl;
	cout << "가격 : " << getPrice() << endl;
	cout << "ISBN : " << getISBN() << endl;
	cout << "책제목 : " << getBookTitle() << endl;
	cout << "저자 : " << getAuthor() << endl;
	cout << "언어 : " << language << endl;
}