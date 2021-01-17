#include "Book.h"

void Book::show() {
	cout << "--- 상품ID : " << getId() << endl;
	cout << "상품설명 : " << getDescription() << endl;
	cout << "생산자 : " << getManufacturer() << endl;
	cout << "가격 : " << getPrice() << endl;
	cout << "책제목 : " << BookTitle << endl;
	cout << "저자 : " << author << endl;
	cout << "ISBN : " << ISBN << endl;
}