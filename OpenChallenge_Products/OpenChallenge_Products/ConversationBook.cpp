#include "ConversationBook.h"

void ConversationBook::show() {
	cout << "--- ��ǰID : " << getId() << endl;
	cout << "��ǰ���� : " << getDescription() << endl;
	cout << "������ : " << getManufacturer() << endl;
	cout << "���� : " << getPrice() << endl;
	cout << "ISBN : " << getISBN() << endl;
	cout << "å���� : " << getBookTitle() << endl;
	cout << "���� : " << getAuthor() << endl;
	cout << "��� : " << language << endl;
}