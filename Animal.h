#include <string>

using namespace std;

class Animal
{
	
private:
	int numberOfLegs;
	bool isAlive;
	string species;
public:
	Animal();
	Animal(int legs, bool alive, string species);
	~Animal();

	void setLegs(int);
	int getLegs();

	void setAlive(bool);
	bool getAlive();

	void setSpecies(string);
	string getSpecies();

};