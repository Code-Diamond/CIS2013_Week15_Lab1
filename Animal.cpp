#include <string>
#include <iostream>

#include "Animal.h"

using namespace std;


int numberOfLegs;
bool isAlive;
string species;

Animal::Animal()
{
	numberOfLegs = 0;
	isAlive = true;
	species = "Nematode";
}
Animal::Animal(int legs, bool alive, string spec)
{
	numberOfLegs = legs;
	isAlive = alive;
	species = spec;

}
Animal::~Animal()
{

}

void Animal::setLegs(int legs)
{
	numberOfLegs = legs;
}
int Animal::getLegs()
{
	return numberOfLegs;
}

void Animal::setAlive(bool alive)
{
	isAlive = alive;
}

bool Animal::getAlive()
{
	return isAlive;
}

void Animal::setSpecies(string spec)
{
	species = spec;
}

string Animal::getSpecies()
{
	return species;
}

