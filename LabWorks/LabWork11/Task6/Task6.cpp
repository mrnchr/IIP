#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int a;
	string even, symbols;

	cout << "Enter the number: ";
	cin >> a;

	if (a % 2) even = "нечетное";
	else even = "четное";

	if (a / 10 == 0) symbols = "однозначное";
	else if (a / 100 == 0) symbols = "двузначное";
	else symbols = "трехзначное";

	cout << even << " " << symbols << " число" << endl;

	system("pause");
	return 0;
}