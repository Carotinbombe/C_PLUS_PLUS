#include "rucksack.h"


void rucksack::addInventar(int index, int object) {
	this->inventar[index] = object;
}

rucksack::rucksack(void) {

}

void rucksack::addPokemon(int index, pika* pokemon) {
	this->meinePokemons[index]=*pokemon;
}
void rucksack::deletePokemon(int index) {
	this->meinePokemons[index].~pika();
}

void rucksack::showRucksack() {
	cout << "Deine Pokemons" << endl;
	
	for (int i = 0; i < MAX_POKEMON; i++) {
		cout << "Name:    \t" << rucksack::meinePokemons[i].getName() << endl;
		cout << "Leben:   \t" << rucksack::meinePokemons[i].getLeben() << endl;
		cout << "Staerke: \t" << rucksack::meinePokemons[i].getStaerke() << endl;
		cout << "Erfahrung:\t" << rucksack::meinePokemons[i].getErfahrung() << endl;
		cout << "Level:    \t" << rucksack::meinePokemons[i].getLevel() << endl;
		cout << "Kraft:    \t" << rucksack::meinePokemons[i].getKraft() << endl;
		cout << "--------------------------------------------------------" << endl;
	}

	for (int i = 0; i < MAX_POKEMON; i++) {
		cout << rucksack::inventar[i] << endl;
	}
}
