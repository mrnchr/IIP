#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int a;
	string sign, even;

	cout << "Enter the number: ";
	cin >> a;

	if (a % 2) even = "��������";
	else even = "������";

	if (a < 0) sign = "�������������";
	else if (a > 0) sign = "�������������";

	if (a == 0) cout << "������� �����" << endl;
	else cout << sign << " " << even << " " << "�����" << endl;

	system("pause");
	return 0;
}