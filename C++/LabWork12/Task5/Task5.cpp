#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	string colors[5] = { "зелен", "красн", "желт", "бел", "черн" };
	string animals[12] = { "обезьяны", "курицы", "собаки", "свиньи", "крысы", "коровы", "тигра", "зайца", "дракона",
		"змеи", "лошади", "овцы" 
	};
	string ending = "ой";

	int year;
	int cycle;
	int subcycle;

	cout << "Enter the year: ";
	cin >> year;

	cycle = (year % 60) / 12;
	subcycle = year % 12;

	if (subcycle > 5 && subcycle < 9)
		ending = "ого";

	cout << "год " << colors[cycle] << ending << " " << animals[subcycle] << endl;

	system("pause");
	return 0;
}