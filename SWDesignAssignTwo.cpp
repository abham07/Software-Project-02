// SWDesignAssignTwo.cpp : Defines the entry point for the console application.
// Test driver program for Employee and FacultyMember classes

#include "stdafx.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "FacultyMember.h"

int _tmain(int argc, _TCHAR* argv[])
{
	// SINGLE USER INPUT EXAMPLE
	{
		string firstName, lastName, sin, office, course;
		
		cout << "Enter first name: ";
		cin >> firstName;
		cout << "\nEnter last name: ";
		cin >> lastName;
		cout << "\nEnter SIN: ";
		cin >> sin;
		cout << "\nEnter office: ";
		cin >> office;
		cout << "\nEnter course: ";
		cin >> course;

		FacultyMember employee(firstName, lastName, sin, office, course);
		employee.print();
	}
	
	/*
	// Instantiate FacultyMember object
	{
		FacultyMember employee("Abad", "Hameed", "999-999-999", "AT4020", "ENGI3050, ENGI3558, ENGI3014");

		cout << "Employee information received by get functions:\n"
			<< "\nFirst Name: " << employee.getFirstName()
			<< "\n Last Name: " << employee.getLastName()
			<< "\n       SIN: " << employee.getSocialInsuranceNumber()
			<< "\n    Office: " << employee.getOffice()
			<< "\n   Courses: " << employee.getCourses()
			<< endl;

		cout << "\n\nEmployee information via print function: \n" << endl;

		// Call to FacultyMember print object
		employee.print();
	}
	*/

	// Another FacultyMember object
	{
		FacultyMember employee("Joe", "Brown", "123-456-789", "CB2023", "MATH4030, MATH3071, PHYS1070");
		employee.print();
	}

	// Another FacultyMember object
	{
		FacultyMember employee("Anam", "Ahmad", "012-292-013", "AC4444", "HEP4214, HEP4215, HEP4216, THM6043");
		employee.print();
	}

	system("pause");
	return 0;
}
