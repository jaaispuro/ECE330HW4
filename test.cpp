/* File: test.cpp */
// File to test the basic employee class

#include<iostream>
#include <string>
#include "employee.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"

using namespace std;

int main() 
{
	Employee
		e1 (001, "Jones", "Booker", "T", 22),
		   e2 (002, "Hendrix", "Jimi", "NMI ", 14),
		   e3 (003, "Morrison", "Jim", "D", 03);
	SalariedEmployee
		se1(004, "Jones", "John", "P", 15, 2000),
		se2(005, "Lennon", "John", "NMI ", 20, 5000, .5);
	HourlyEmployee
		he1(006, "Halen", "Eddie", "V", 18, 35, 15.50),
		he2(007, "Grohl", "Dave", "NMI ", 21, 49, 12.25);	
	  e1.printEmployee();
	  e2.printEmployee();
	  se1.printSalariedEmployee();
	  se2.printSalariedEmployee();
	  he1.printHourlyEmployee();
	  he2.printHourlyEmployee();
	        

}
