#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

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