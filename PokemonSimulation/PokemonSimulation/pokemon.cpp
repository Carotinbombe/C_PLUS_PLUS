#include "pokemon.h"

using namespace std;

void pokemon::setLeben(int leben) {
	this->leben = leben;
}

int pokemon::getLeben() {
	return leben;
}

void pokemon::setStaerke(int staerke) {
	this->staerke = staerke;
}

int pokemon::getStaerke() {
	return staerke;
}

void pokemon::setErfahrung(int erfahrung) {
	this->erfahrung = erfahrung;
}

int pokemon::getErfahrung() {
	return erfahrung;
}

void pokemon::setLevel(int level) {
	this->level = level;
}

int pokemon::getLevel() {
	return level;
}

void pokemon::addLevel(int level) {
	this->level += level;
}

void pokemon::addErfahrung(int erfahrung) {
	this->erfahrung += erfahrung;
}

pika::pika() {
	this->name = "LEER";
	this->kraft = "-";
	setLeben(0);
	setStaerke(0);
	setErfahrung(0);
	setLevel(0);
}



pika::pika(string name) {
	this->name = name;
	this->kraft = generateKraft();
	setLeben(100);
	setStaerke(rand() % ((MAX_STAERKE - MIN_STAERKE) + 1) + MIN_STAERKE);
	setLevel(rand() % ((MAX_LEVEL - MIN_LEVEL) + 1) + MIN_LEVEL);
	setErfahrung(0);
}

void pika::setName(string name) {
	this->name = name;
}

string pika::getName() {
	return name;
}

pika::~pika()
{
}
string pika::getKraft(){
	return kraft;
}

string generateKraft()
{
	string p_kraft[]{
	"Wasser",
	"Feuer",
	"Erde",
	"Luft",
	"Pflanze",
	"Psycho"};
	return p_kraft[rand() % (5 - 0 + 1) + 0];
}