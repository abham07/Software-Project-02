// Employee class definition represents a employee
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using std::string;

class Employee
{
public:
	// Employee constructor
	Employee(const string &, const string &, const string &);
	// Employee destructor
	~Employee();

	// Getters and Setters
	void setFirstName(const string &);
	string getFirstName() const;

	void setLastName(const string &);
	string getLastName() const;

	void setSocialInsuranceNumber(const string &);
	string getSocialInsuranceNumber() const;

	// print Employee object
	void print() const;

private:
	// private data members
	string firstName;
	string lastName;
	string socialInsuranceNumber;
};

#endif