#ifndef COM_PIRATECODY_CANDIDATE
#define COM_PIRATECODY_CANDIDATE
#include <string>
#include <iostream>
#include "Office.h"
#include "State.h"
using std::string;
using std::ostream;
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
	/**
	@brief Primary constructor for Candidate class

	@param name name of the candidate
	@param office office the candidate is running for
	@param state state the candidate is running in
	@param incumbent whether they are an incumbent
	*/
	Candidate(string name, Office office, State state, bool incumbent);

	/**
	@brief Gets the name

	@return string name of candidate
	*/
	string getName() const;

	/**
	@brief Gets the current modifier value

	can be negative

	@return double total modifier value
	*/
	double getModifiers() const;

	/**
	@brief Gets incumbency status

	@return return true if incumbent
	*/
	bool isIncumbent() const;

	/**
	@brief Gets office candidate is running for

	@return return office value
	*/
	Office getOffice() const;

	/**
	@brief Gets state candidate is running in

	@return return state value
	*/
	State getState() const;

	/**
	@brief Adds to the total modifier value

	@param value number of votes to add to the modifier total
	*/
	void addModifier(double value);

	/**
	@brief Sets the state of the candidate

	@param state desired state value
	*/
	void setState(State state);

	/**
	@brief Sets the name of the candidate

	@param name desired value for name
	*/
	void setName(string name);

	/**
	@brief Sets the incumbency status for candidate

	@param incumbent T/F incumbency
	*/
	void setIncumbency(bool incumbent);

	/**
	@brief Sets the office value for candidate

	@param office desired office value
	*/
	void setOffice(Office office);

	/**
	@brief Operator to print out data within a candidate object to an ostream

	@param out ostream to print to
	@param c candidate with data to print
	*/
	friend ostream & operator<<(ostream &out, Candidate &c);

};


#endif
