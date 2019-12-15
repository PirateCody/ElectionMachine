#ifndef COM_PIRATECODY_STATE
#define COM_PIRATECODY_STATE
#include <map>
#include <string>
#include "District.h"

using namespace std;

class State {
public:

	/*Returns the name of the State*/
	string getName() const;

	/*Returns the value of the State Modifier*/
	double getStateModifier() const;

	/*Returns the number of districts*/
	unsigned int getNumDistricts() const;

	/*Returns the district with the specified key*/
	District* getDistrict(string key);
private:
	/*Value of any statewide modifier*/
	double stateModifier;

	/*Number of Districts*/
	unsigned int numDistricts;

	/*Map containing pointers to the districts within a state*/
	map<string, District*> districts;

	/*State Name*/
	string name;
};
#endif
