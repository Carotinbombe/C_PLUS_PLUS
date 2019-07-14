#include "charakter.h"

charakter::charakter(std::string name)
{
	this->name = name;
}

string charakter::getName() {
	return name;
}