#include "UI.h"

int UI::main_menu() {
	int n;
	cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
	cin >> n;
	return n;
}

int UI::shape_menu() {
	int n;
	cout << "��:1, ��:2, �簢��:3 >> ";
	cin >> n;
	return n;
}

int UI::delete_menu() {
	int n;
	cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
	cin >> n;
	return n;
}