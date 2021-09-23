#include <iostream>

using namespace std;

int main () {
	double V1, V2, T, S;

	cout << "Enter velocities of two cars separated by space: ";
	cin >> V1 >> V2;

	cout << "Enter the distance between them: ";
	cin >> S;

	cout << "Enter the numbers of hours: ";
	cin >> T;

	cout << "In " << T << " hours they will be at a distance of " << S + (V1 + V2) * T << " km\n";

	system("pause");
	return 0;
}
