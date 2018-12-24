#include "Candidate.h"
using std::endl;
Candidate::Candidate(string name, Office office, State state, bool incumbent) {
	candidateName = name;
	this->office = office;
	this->state = state;
	this->incumbent = incumbent;
	modifiers = 0;
}

string Candidate::getName() const {
	return candidateName;
}

double Candidate::getModifiers() const {
	return modifiers;
}

bool Candidate::isIncumbent() const {
	return incumbent;
}

Office Candidate::getOffice() const {
	return office;
}

State Candidate::getState() const {
	return state;
}

void Candidate::addModifier(double value) {
	modifiers += value;
}

void Candidate::setState(State state) {
	this->state = state;
}

void Candidate::setName(string pName) {
	candidateName = pName;
}

void Candidate::setIncumbency(bool inc) {
	incumbent = inc;
}

void Candidate::setOffice(Office pOffice) {
	office = pOffice;
}

ostream & operator<<(ostream & out, Candidate & c){

	string office, state;

	switch (c.getOffice()) {
	case PRESIDENT: office = "President"; break;
	case SENATOR: office = "Senator"; break;
	case REPRESENTATIVE: office = "Representative"; break;
	default: office = "None";
	}

	switch (c.getState()) {
	case NORTH: state = "North"; break;
	case WEST: state = "Jefferson"; break;
	case SOUTH: state = "Dixie"; break;
	default: state = "None";
	}


	out << c.candidateName << endl;
	out << "State: " << state << endl;
	out << "Office: " << office << endl;
	out << "Modifiers: " << c.getModifiers() << endl;

	return out;
}
