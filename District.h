#ifndef COM_PIRATECODY_DISTRICT
#define COM_PIRATECODY_DISTRICT
#include "Candidate.h"
#include "ElectionType.h"
#include <map>
#include <string>


using namespace std;

class District {
public:
private:
	/*Map of pointers to candidates running in this district*/
	map<string, Candidate*> candidates;

	/*Value of any district wide modifier*/
	double leaning;

	/*Value to determine whether this district race is for a federal, state, or local election*/
	const ElectionType TYPE;


};



#endif // !COM_PIRATECODY_DISTRICT

