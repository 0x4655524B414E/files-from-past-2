#include "Employee.h"

Employee::Employee(string identity, string fullname, double salary, string iban) :
	identity(identity),
	fullname(fullname),
	salary(salary),
	iban(iban)
{
	
}
double Employee::get_salary() const
{
	return this->salary;
}
string Employee::get_iban() const
{
	return this->iban;
}
bool Employee::increaseSalary(double ratio)
{
	return this->salary *= (1.0 + ratio);
}


