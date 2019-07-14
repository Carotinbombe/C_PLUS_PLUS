#include <iostream>
#include <string>
#include "pokemon.h"

#define MAX_POKEMON 10
#define MAX_INVENTAR 10
using namespace std;
class rucksack {
private:
	pika* meinePokemons = new pika[MAX_POKEMON];
	int inventar[MAX_INVENTAR];
	
public:
	rucksack(void);
	void addPokemon(int index, pika* pokemon);
	void deletePokemon(int number);
	void addInventar(int index, int object);
	void showRucksack();
};