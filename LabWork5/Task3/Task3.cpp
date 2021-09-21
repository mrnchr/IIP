#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	double a, b, c;
	cout << "¬ведите координату точки A: ";
	cin >> a;

	cout << "¬ведите координату точки B: ";
	cin >> b;

	cout << "¬ведите координату точки C: ";
	cin >> c;

	cout << "AC * BC = " << (c - a) * (b - c) << endl;

	system("pause");
	return 0;	
}