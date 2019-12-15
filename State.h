#ifndef COM_PIRATECODY_STATE
#define COM_PIRATECODY_STATE
#include <map>
#include <string>
#include "District.h"

using namespace std;

class State {
public:
	string getName() const;
private:
	unsigned int numDistricts;
	map<string, District*> districts;
};
#endif
