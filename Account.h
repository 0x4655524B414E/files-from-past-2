#pragma once

class Account
{
private:

protected:
	double balance;

public:
	Account(double init_balance);

	double getBalance() const;

	bool deposit(double amount);
	bool withdraw(double amount);
};
