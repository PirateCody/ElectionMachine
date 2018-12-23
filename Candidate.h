#ifndef COM_PIRATECODY_CANDIDATE
#define COM_PIRATECODY_CANDIDATE
#include <string>
#include "Office.h"
#include "State.h"
using std::string;
class Candidate {
private:
	/** Name of the Candidate */
	string candidateName;
	/** Number of modifiers the candidate has */
	double modifiers;
	/** Are they an incumbent? */
	bool incumbent;
	/** Office the candidate is running for */
	Office office;
	/** State the candidate is running in */
	State state;

public:
	string getName() const;
	double getModifiers() const;
	bool isIncumbent() const;
	Office getOffice() const;
	State getState() const;

};


#endif
