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

if (a % 2) even = "нечетное";
else even = "четное";

if (a < 0) sign = "отрицательное";
else if (a > 0) sign = "положительное";

if (a == 0) cout << "нулевое число" << endl;
else cout << sign << " " << even << " " << "число" << endl;

system("pause");
return 0;
}
