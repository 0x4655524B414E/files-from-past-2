#include "Bank.h"

Bank::Bank()
{
	this->numberOfCustomers = 0;
	for (Customer *customer : customers)
	{
		customer = nullptr;
	}
}
/*
Bank::Bank(const Bank &other)
{
	this->numberOfCustomers = other.numberOfCustomers;
	for (int i = 0; i < this->numberOfCustomers; i++)
	{
		Customer *otherCustomer = other.customers[i];
		this->customers[i] = new Customer(otherCustomer->getFirstName(), otherCustomer->getLastName());
	}
}
*/
Bank::~Bank()
{
	for (int i = 0; i < this->numberOfCustomers; i++)
	{
		delete this->customers[i];
	}
	
}
int Bank::getNumberOfCustomers() const
{
	return this->numberOfCustomers;
}
Customer *Bank::getCustomer(int index)
{
	if (index >= 0 && index < this->numberOfCustomers)
	{
		return this->customers[index];
	}
	return nullptr;
}
void Bank::addCustomer(std::string firstName, std::string lastName)
{
	if (this->numberOfCustomers < 10)
	{
		this->customers[this->numberOfCustomers] = new Customer(firstName, lastName);
		this->numberOfCustomers++;
	}
}