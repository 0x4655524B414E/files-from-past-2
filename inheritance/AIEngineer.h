#pragma once
#include "Employee.h"

// Employee Class -> Base Class/Super Class
// AI Engineer Class -> Derived Class/Sub Class
//
class AIEngineer : public Employee
{
private:
	string* deepLearningFrameworks[10];
	int numberOfDLFrameworks;

public:
	AIEngineer(string identity, string fullname, double salary, string iban, string deepLearningFramework);

};
