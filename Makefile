all: employee.o SalariedEmployee.o HourlyEmployee.o test.o
	g++ employee.o SalariedEmployee.o HourlyEmployee.o test.o -o a.out

employee.o: employee.cpp employee.h
	g++ -c employee.cpp

SalariedEmployee.o: SalariedEmployee.cpp SalariedEmployee.h
	g++ -c SalariedEmployee.cpp

HourlyEmployee.o: HourlyEmployee.cpp HourlyEmployee.h
	g++ -c HourlyEmployee.cpp

test.o: test.cpp employee.h
	g++ -c test.cpp

clean:
	rm *.o
