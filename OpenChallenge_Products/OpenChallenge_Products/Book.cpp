#include "Book.h"

void Book::show() {
	cout << "--- ��ǰID : " << getId() << endl;
	cout << "��ǰ���� : " << getDescription() << endl;
	cout << "������ : " << getManufacturer() << endl;
	cout << "���� : " << getPrice() << endl;
	cout << "å���� : " << BookTitle << endl;
	cout << "���� : " << author << endl;
	cout << "ISBN : " << ISBN << endl;
}