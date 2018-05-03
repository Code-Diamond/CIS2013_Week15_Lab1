#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;
int main()
{
	
	int legs;
	bool alive;
	string aliveString;
	string spec;

	cout << "Welcome to the biological space-time identification program..." << endl;
	cout << "Please enter the number of legs found on the animal: ", cin >> legs;
	cout << "Is the animal alive? (yes/no) : ", cin >> aliveString;

	if(aliveString == "yes" || aliveString == "YES" || aliveString == "Y" || aliveString == "y" || aliveString == "Ye" || aliveString == "YE" || aliveString == "yE")
	{
		alive = true;
	}
	else
	{
		alive = false;

	}

	cout << "Which species does the animal belong to?: ", cin >> spec;
	if(spec == "default")
	{
		Animal animal;
		cout << "The most abundantly constructed animal in space-time are " << animal.getSpecies() << "s.";

	}
	else
	{
		Animal animal(legs, alive, spec);
		cout << "The information you entered into the identification library is:"<<endl;

		cout << "The animal has " << animal.getLegs() << " legs." << endl;

		if(animal.getAlive() == 0)
		{
			cout << "The animal is dead." << endl;
		}
		else
		{
			cout << "The animal is alive." << endl;
		}

		cout << "The animal is of the species " << animal.getSpecies() <<  "." << endl;
	}
	
}