#include "fangePokemon.h"
#include <memory>

pika* get()
{
	string name;
	cout << "Juhu du hast einen Pokemon gefangen!" << endl;
	cout << "Gib das Pokemon einen Namen: ";
	cin >> name;

	return new pika();
}