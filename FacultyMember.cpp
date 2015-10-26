// Class FacultyMember member-function definitions

#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;

#include "FacultyMember.h"

// FacultyMember constructor
FacultyMember::FacultyMember(const string &first, const string &last, const string &sin, 
	const string &office, const string &courses) 
	// explicit call to base-class Employee's constructor
	: Employee(first, last, sin)
{
	facultyOffice = office;
	facultyCourses = courses;

	cout << "FacultyMember constructor\n" << endl;
}

// FacultyMember destructor
FacultyMember::~FacultyMember()
{
	cout << "FacultyMember destructor\n" << endl;
}

// Set office 
void FacultyMember::setOffice(const string &office)
{
	facultyOffice = office;
}

// Get office
string FacultyMember::getOffice() const
{
	return facultyOffice;
}

// Set courses
void FacultyMember::setCourses(const string &courses)
{
	facultyCourses = courses;
}

// Get courses
string FacultyMember::getCourses() const
{
	return facultyCourses;
}

// Print FacultyMember object
void FacultyMember::print() const
{
	// Invoking Employee print object
	Employee::print();

	cout << "\n  Office: " << facultyOffice
		 << "\n Courses: " << facultyCourses
		<< endl << endl;
}
