#include "CompactDisc.h"

void CompactDisc::show() {
	cout << "--- ��ǰID : " << getId() << endl;
	cout << "��ǰ���� : " << getDescription() << endl;
	cout << "������ : " << getManufacturer() << endl;
	cout << "���� : " << getPrice() << endl;
	cout << "�ٹ����� : " << AlbumTitle << endl;
	cout << "���� : " << singer << endl;
}