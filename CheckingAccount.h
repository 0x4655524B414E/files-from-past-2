#pragma once
#include "Account.h"

class CheckingAccount : public Account
{
private:
	double overdraftProtection;

public:
	CheckingAccount(double balance);
	CheckingAccount(double balance, double overdraftProtection);
	bool withdraw(double amount);
};
