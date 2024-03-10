#include "Customer.h"

Customer::Customer(std::string f, std::string l) : firstName(f), lastName(l)
{
	this->numberOfAccounts = 0;
	for (int i = 0; i < 5; i++)
	{
		this->accounts[i] = nullptr;
	}
}
std::string Customer::getFirstName() const
{
	return this->firstName;
}
std::string Customer::getLastName() const
{
	return this->lastName;	
}
Account *Customer::getAccount(int index) const
{
	if (index < 0 || index >= this->numberOfAccounts)
	{
		return nullptr;
	}
	return this->accounts[index];
}
void Customer::addAccount(Account *account)
{
	if (account == nullptr) return;
	if (this->numberOfAccounts == 5) return;
	
	this->accounts[this->numberOfAccounts] = account;
	this->numberOfAccounts++;
}

