#include <iostream>
#include "Candidate.h"
#include "Party.h"
#include "Office.h"
#include "CandidateList.h"
#include "State.h"
using namespace std;
int main() {

	Candidate c1("Bakk", PRESIDENT, NATIONAL, false);
	c1.setState(SOUTH);
	cout << c1;

	system("pause");
	return 0;
}