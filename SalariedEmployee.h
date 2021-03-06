/* SalariedEmployee.h */

#include <string>
#include "employee.h"

using namespace std;

class SalariedEmployee : public Employee
{
	public:
		SalariedEmployee(long = 0, const string & ="" , const string & ="", const string & = "", int =0, double =0, double = 1); //constructor
		
		
		void setSalary(const double);
		double getSalary() const;
		void setFraction(const double);
		double getFraction() const;
		double calcSalary(const double, const double);
		void printSalariedEmployee();

	public:
		double mySalary;
		double myFraction;
};

