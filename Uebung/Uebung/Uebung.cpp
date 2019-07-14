// Uebung.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <ctime>
#include <stdio>
#include <Windows>

using namespace std;

int main()
{
	int input;
	int guess = rand();
	bool incorrect = true;

	cout << "-----Welcome-----" << endl;
	while (incorrect) {
		
		cout << "Enter a number: ";
		cin >> input;

		if (input < guess) {
			cout << "Wrong! Its greather than: " << input << endl;
		}
		else if (input > guess) {
			cout << "Wrong! Its lower than: " << input << endl;
		}
		else {
			system("cls");
			cout << "Congratulation! You got it!" << endl;
			incorrect = false;

			
		}
	}

	while (1) {
		system("color 0A");
		Sleep(500);
		system("color 01");
		Sleep(500);
	}
	return EXIT_SUCCESS;
}
