#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	string colors[5] = { "�����", "�����", "����", "���", "����" };
	string animals[12] = { "��������", "������", "������", "������", "�����", "������", "�����", "�����", "�������",
		"����", "������", "����" 
	};
	string ending = "��";

	int year;
	int cycle;
	int subcycle;

	cout << "Enter the year: ";
	cin >> year;

	cycle = (year % 60) / 12;
	subcycle = year % 12;

	if (subcycle > 5 && subcycle < 9)
		ending = "���";

	cout << "��� " << colors[cycle] << ending << " " << animals[subcycle] << endl;

	system("pause");
	return 0;
}