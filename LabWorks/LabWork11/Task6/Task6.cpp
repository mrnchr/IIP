#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int a;
	string even, symbols;

	cout << "Enter the number: ";
	cin >> a;

	if (a % 2) even = "��������";
	else even = "������";

	if (a / 10 == 0) symbols = "�����������";
	else if (a / 100 == 0) symbols = "����������";
	else symbols = "�����������";

	cout << even << " " << symbols << " �����" << endl;

	system("pause");
	return 0;
}