#pragma once
#include "Account.h"
#include <string>

class Customer
{
private:
	std::string firstName;
	std::string lastName;
	int numberOfAccounts;
	Account *accounts[5]; // composition

public:
	Customer(std::string f, std::string l);

	std::string getFirstName() const;
	std::string getLastName() const;
	Account *getAccount(int index) const;

	void addAccount(Account *account);

};
