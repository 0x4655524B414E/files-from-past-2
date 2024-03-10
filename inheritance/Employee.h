#pragma once
#include <iostream>
using namespace std;

class Employee
{
private:
	string identity;
	string fullname;
	double salary;
	string iban;

public:
	Employee(string identity, string fullname, double salary, string iban);
	double get_salary() const;
	string get_iban() const;
	bool increaseSalary(double ratio);
	
};
