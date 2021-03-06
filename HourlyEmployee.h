/* HourlyEmployee.h */

#include <string>
#include "employee.h"

using namespace std;

class HourlyEmployee : public Employee
{
	public:
		HourlyEmployee(long = 0, const string & = "", const string & = "", const string & = "", int =0, double =0, double =0);
		void setHoursWorked(const double);
		double getHoursWorked() const;
		void setHourlyRate(const double);
		double getHourlyRate() const;
		double calcPay();
		void printHourlyEmployee();

	public:
		double myHoursWorked;
		double myHourlyRate;
		double myOvertime;
		double myPay;
};

