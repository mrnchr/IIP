#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
SetConsoleCP(1251);
SetConsoleOutputCP(1251);

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
