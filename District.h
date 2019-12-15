#ifndef COM_PIRATECODY_DISTRICT
#define COM_PIRATECODY_DISTRICT
#include "Candidate.h"
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
};



#endif // !COM_PIRATECODY_DISTRICT

