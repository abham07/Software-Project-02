// FacultyMember class definition represents a faculty member
#ifndef FACULTY_H
#define FACULTY_H

#include <string>
using std::string;

// Include base-class Employee header file
#include "Employee.h"

// FacultyMember class inherits publicly from Employee
class FacultyMember : public Employee
{
public:
	// FacultyMember constructor
	FacultyMember(const string &, const string &, const string &, const string &, const string &);
	// FacultyMember destructor
	~FacultyMember();

	// Getters and Setters
	void setOffice(const string &);
	string getOffice() const;

	void setCourses(const string &);
	string getCourses() const;

	// Print FacultyMember object
	void print() const;

private:
	// Private data members
	string facultyOffice;
	string facultyCourses;
};

#endif