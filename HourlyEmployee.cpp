/* HourlyEmployee.cpp */

#include <iostream>
#include <iomanip>

#include <string>

#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(long id, const string &last, const string &first, const string &initial, int dept, double hWorked, double hRate)
{
	myIdNum = id;
	myLastName = last;
	myFirstName = first;
	myMiddleInitial = initial;
	myDeptCode = dept;
	myHoursWorked = hWorked;
	myHourlyRate = hRate;
	myOvertime = 0;
}

void HourlyEmployee::setHoursWorked(const double hWorked)
{
	myHoursWorked = hWorked;
}
double HourlyEmployee::getHoursWorked() const
{
	return myHoursWorked;
}
void HourlyEmployee::setHourlyRate(const double hRate)
{
	myHourlyRate = hRate;
}
double HourlyEmployee::getHourlyRate() const
{
	return myHourlyRate;
}
double HourlyEmployee::calcPay()
{
	if (myHoursWorked > 40)
	{
		myOvertime = myHoursWorked - 40;		
	}
	myPay = (myHoursWorked * myHourlyRate) + (myOvertime * .5);
	return myPay;
}

void HourlyEmployee::printHourlyEmployee()
{
	cout << endl;
	cout << "Employee ID Number: " << getIdNum() << endl;
	cout << "Name: " << getLastName() << ", " << getFirstName() << " " <<
		getMiddleInitial() << ". " << endl;
	cout << "Dept Code: " << getDeptCode() << endl;
	cout << "Hours Worked: " << HourlyEmployee::getHoursWorked() << endl;
	cout << "Hourly Rate: " << HourlyEmployee::getHourlyRate() << endl;
	cout << "Pay: " << HourlyEmployee::calcPay() << endl;
}
