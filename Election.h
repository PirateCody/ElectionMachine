#ifndef COM_PIRATECODY_ELECTION
#define COM_PIRATECODY_ELECTION
#include <map>
#include "State.h"
class Election
{
public:
	Election();
	~Election();

private:
	map<string, State*> states;
};
#endif

