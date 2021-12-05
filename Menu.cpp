#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <process.h>

void TaskChoiceMenu(int numLab);

// Устанавливает размеры и положение окна консоли
void Draw() {
	HWND hwnd = GetConsoleWindow();
	int maxW = GetSystemMetrics(SM_CXMAXIMIZED);
	int maxH = GetSystemMetrics(SM_CYMAXIMIZED);
	MoveWindow(hwnd, maxW/4, maxH/4, maxW/2, maxH/2, TRUE);
}

// Возвращает количество задач данной лабораторной работы
int NumTasks(int numLab) {
	std::ifstream fiTaskFile("LabWorks.txt");

	int num;

	// Цикл идет до numLab включительно, так как первая строка в файле количество лабораторных работ
	for (int i(0); i <= numLab; i++) {
		fiTaskFile >> num;
	}

	return num;
}

void LabChoiceMenu() {
	int numLabs = NumTasks(0);
	int userChoice = 1;

	while (userChoice != 0) {
		std::cout << "Введите номер лабораторной работы, которую хотите проверить\n";
		std::cout << "Введите 0, чтобы выйти из программы\n";
		std::cout << "Ваш выбор: ";
		std::cin >> userChoice;

		system("cls");

		if (userChoice == 0) return;
		else if (userChoice > numLabs or userChoice < 4) {
			std::cout << "Такой лабораторной работы не существует\nПопробуйте снова\n";
		}
		else {
			TaskChoiceMenu(userChoice);
		}
	}
}

void TaskChoiceMenu(int numLab) {
	
	int numTasks = NumTasks(numLab); // Количество задач в лабораторной работе
	int userChoice = 1;
	std::string LocalPath;
	std::string ProgramPath;
	std::string CodePath;
	std::string Command;
	char FullProgramPath[100];
	char FullCodePath[100];
	
	while (userChoice != 0) {
		std::cout << "Введите номер задачи, чтобы запустить программу\n";
		std::cout << "Поставьте перед номером минус для отладки исходного кода программы\n";
		std::cout << "Введите 0, чтобы выбрать другую лабораторную работу\n";
		std::cout << "Ваш выбор: ";
		std::cin >> userChoice;

		// Получение полного пути файла программы и исходного кода
		LocalPath = "LabWorks\\LabWork" + std::to_string(numLab) + "\\Task" + std::to_string(abs(userChoice)) + "\\Task" + std::to_string(abs(userChoice));

		ProgramPath = LocalPath + ".exe";
		GetFullPathName(&ProgramPath[0], 100, FullProgramPath, nullptr);

		CodePath = LocalPath + ".cpp";
		GetFullPathName(&CodePath[0], 100, FullCodePath, nullptr);

		system("cls");

		if (userChoice == 0) return;
		else if (abs(userChoice) > numTasks) {
			std::cout << "Упс... Такой задачи не существует. Повторите попытку\n";
			continue;
		}
		else if (userChoice > 0) {
			// Запуск программы
			system(&FullProgramPath[0]);
		}
		else {
			// Вывод исходного кода
			std::string s = FullCodePath;
			Command = "start " + s;
			system(&Command[0]);

			std::cout << std::endl;
			system("pause");
		}
		system("cls");
	}
}

int main() {
	system("cls");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	Draw();
	LabChoiceMenu();

	return 0;
}