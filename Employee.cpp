// Class Employee member-function definitions

#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;

#include "Employee.h"

// Employee constructor
Employee::Employee(const string &first, const string &last, const string &sin)
	: firstName(first), lastName(last), socialInsuranceNumber(sin)
{
	firstName = first;
	lastName = last;
	socialInsuranceNumber = sin;

	cout << "Employee constructor\n" << endl;
}

// Employee destructor
Employee::~Employee()
{
	cout << "Employee destructor\n" << endl;
}

// Set first name
void Employee::setFirstName(const string &first)
{
	firstName = first;
}

// Get first name
string Employee::getFirstName() const
{
	return firstName;
}

// Set last name
void Employee::setLastName(const string &last)
{
	lastName = last;
}

// Get last name
string Employee::getLastName() const
{
	return lastName;
}

// Set SIN number
void Employee::setSocialInsuranceNumber(const string &sin)
{
	socialInsuranceNumber = sin;
}

// Get SIN number
string Employee::getSocialInsuranceNumber() const
{
	return socialInsuranceNumber;
}

// Print Employee object
void Employee::print() const
{
	cout << "Employee: " << getFirstName() << ' ' << getLastName()
		 << "\n     SIN: " << getSocialInsuranceNumber();
}
