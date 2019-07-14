#include <string>
#include "rucksack.h"
class charakter {
private:
	std::string name;
	int spielerLevel;
	int erfahrung;
public:
	rucksack meinRucksack;
	charakter(std::string name);
	string getName();
};

