#include <iostream>
#include "Candidate.h"
#include "Party.h"
#include "Office.h"
#include "CandidateList.h"
#include "State.h"
#include "District.h"
#include <iostream>
#include <string>
using namespace std;

void mainMenu() {
	cout << "******************************************\n";
	cout << "*******Welcome to Election Machine!*******\n";
	cout << "******************************************\n\n";
}

void processInput(string input, bool* active) {
	if (input == "exit") {
		*active = false;
		cout << "Exiting\n";
	}
	else {
		cout << "Unknown command" << endl;
	}
}

int main() {

	mainMenu();
	bool active = true;

	string input = "";

	while (active) {
		cout << "Election Machine>"; getline(cin, input);
		cin.ignore();
		processInput(input, &active);
	}


	system("pause");
	return 0;
}