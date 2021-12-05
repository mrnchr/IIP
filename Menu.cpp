#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <process.h>

void TaskChoiceMenu(int numLab);

// ������������� ������� � ��������� ���� �������
void Draw() {
	HWND hwnd = GetConsoleWindow();
	int maxW = GetSystemMetrics(SM_CXMAXIMIZED);
	int maxH = GetSystemMetrics(SM_CYMAXIMIZED);
	MoveWindow(hwnd, maxW/4, maxH/4, maxW/2, maxH/2, TRUE);
}

// ���������� ���������� ����� ������ ������������ ������
int NumTasks(int numLab) {
	std::ifstream fiTaskFile("LabWorks.txt");

	int num;

	// ���� ���� �� numLab ������������, ��� ��� ������ ������ � ����� ���������� ������������ �����
	for (int i(0); i <= numLab; i++) {
		fiTaskFile >> num;
	}

	return num;
}

void LabChoiceMenu() {
	int numLabs = NumTasks(0);
	int userChoice = 1;

	while (userChoice != 0) {
		std::cout << "������� ����� ������������ ������, ������� ������ ���������\n";
		std::cout << "������� 0, ����� ����� �� ���������\n";
		std::cout << "��� �����: ";
		std::cin >> userChoice;

		system("cls");

		if (userChoice == 0) return;
		else if (userChoice > numLabs or userChoice < 4) {
			std::cout << "����� ������������ ������ �� ����������\n���������� �����\n";
		}
		else {
			TaskChoiceMenu(userChoice);
		}
	}
}

void TaskChoiceMenu(int numLab) {
	
	int numTasks = NumTasks(numLab); // ���������� ����� � ������������ ������
	int userChoice = 1;
	std::string LocalPath;
	std::string ProgramPath;
	std::string CodePath;
	std::string Command;
	char FullProgramPath[100];
	char FullCodePath[100];
	
	while (userChoice != 0) {
		std::cout << "������� ����� ������, ����� ��������� ���������\n";
		std::cout << "��������� ����� ������� ����� ��� ������� ��������� ���� ���������\n";
		std::cout << "������� 0, ����� ������� ������ ������������ ������\n";
		std::cout << "��� �����: ";
		std::cin >> userChoice;

		// ��������� ������� ���� ����� ��������� � ��������� ����
		LocalPath = "LabWorks\\LabWork" + std::to_string(numLab) + "\\Task" + std::to_string(abs(userChoice)) + "\\Task" + std::to_string(abs(userChoice));

		ProgramPath = LocalPath + ".exe";
		GetFullPathName(&ProgramPath[0], 100, FullProgramPath, nullptr);

		CodePath = LocalPath + ".cpp";
		GetFullPathName(&CodePath[0], 100, FullCodePath, nullptr);

		system("cls");

		if (userChoice == 0) return;
		else if (abs(userChoice) > numTasks) {
			std::cout << "���... ����� ������ �� ����������. ��������� �������\n";
			continue;
		}
		else if (userChoice > 0) {
			// ������ ���������
			system(&FullProgramPath[0]);
		}
		else {
			// ����� ��������� ����
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