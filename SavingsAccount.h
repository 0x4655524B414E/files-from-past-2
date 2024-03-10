#pragma once
#include "Account.h"

class SavingsAccount : public Account
{
private:
	double interestRate;

public:
	SavingsAccount(double balance, double interestRate) : Account(balance), interestRate(interestRate)
	{

	}

};
