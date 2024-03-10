#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double balance) : Account(balance)
{

}
CheckingAccount::CheckingAccount(double balance, double overdraftProtection)
: Account(balance), overdraftProtection(overdraftProtection)
{

}
bool CheckingAccount::withdraw(double amount)
{
	if (amount <= 0)
	{
		return false;
	}
	if (amount > (balance + overdraftProtection))
	{
		return false;
	}
	this->balance -= amount;
	return true;
}