#pragma once
#include "Account.h"
#include "Customer.h"
#include <string>

class Bank
{
private:
	Customer *customers[10];
	int numberOfCustomers;

public:
	Bank();
	Bank(const Bank &other) = delete; //copy constructor
	~Bank();

	int getNumberOfCustomers() const;
	Customer *getCustomer(int index);
	void addCustomer(std::string firstName, std::string lastName);

};
