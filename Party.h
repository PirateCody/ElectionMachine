#ifndef COM_PIRATECODY_PARTY
#define COM_PIRATECODY_PARTY
#include "Candidate.h"
class Party {
private:
	string partyName;
	Candidate * candidates;
	int numberOfCandidates;
	double partyModifiers;
public:
	string getName() const;
	int getNumCandidates() const;
	double getPartyMods() const;

};

#endif

