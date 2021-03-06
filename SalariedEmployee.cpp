/* SalariedEmployee.cpp */

#include <iostream>
#include <iomanip>

#include <string>

#include "SalariedEmployee.h"

using namespace std;

//constructor
SalariedEmployee::SalariedEmployee(long id, const string &last, const string &first, const string &initial, int dept, double sal, double frac)
{
	myIdNum = id;
	myLastName = last;
	myFirstName = first;
	myMiddleInitial = initial;
	myDeptCode = dept;
	mySalary = sal;
	myFraction = frac;
}

void SalariedEmployee::setSalary(const double sal)
{
	mySalary = sal;
}
double SalariedEmployee::getSalary() const
{
	return mySalary;
}

void SalariedEmployee::setFraction(const double frac)
{
	myFraction = frac;
}

double SalariedEmployee::getFraction() const
{
	return myFraction;
}
double SalariedEmployee::calcSalary(const double sal, const double frac)
{
	double salary = sal * frac;
	
	return salary;
}

void SalariedEmployee::printSalariedEmployee()
{
	cout << endl;
	cout << "Employee ID Number: " << getIdNum() << endl;
	cout << "Name: " << getLastName() <<", " << getFirstName() << " " <<
		getMiddleInitial() << ". " << endl;
	cout << "Dept Code: " << getDeptCode() << endl;
	cout << "Salary: " << SalariedEmployee::calcSalary(mySalary, myFraction) << endl;

}
