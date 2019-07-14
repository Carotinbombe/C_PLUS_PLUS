

#include <iostream>
#include "charakter.h"
#include <string>

using namespace std;


int main()
{
	string input;
	int in, index=0;
	pika* temp = NULL;

	cout << "Wie willst du heißen: ";
	cin >> input;
	charakter* meinCharakter = new charakter(input);
	while (1)
	{
		system("cls");
		cout << "Willkommen " << meinCharakter->getName() << endl;
		cout << "Was moechtest du tun?" << endl;
		cout << "1. Pokemon fangen" << endl;
		cout << "2. Rucksack anzeigen" << endl;
		cout << "3. Schliessen" << endl;
		cout << "Input: ";
		cin >> in;
		
		switch (in)
		{
		case 1:
			
			system("cls");
			cout << "Juhu du hast einen Pokemon gefangen!" << endl;
			cout << "Wie willst du das Pokemon nennen?" << endl;
			cout << "Name: ";
			cin >> input;
			
			meinCharakter->meinRucksack.addPokemon(index,new pika(input));
			index++;
			break;
		case 2:
			system("cls");
			meinCharakter->meinRucksack.showRucksack();
			system("pause");
			break;
		case 3:
			_exit(EXIT_SUCCESS);
		default:
			break;
		}
	}
	
	return EXIT_SUCCESS;
}

