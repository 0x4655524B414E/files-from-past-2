#include "Vehicle.h"

Vehicle::Vehicle(double maxLoad) : maxLoad(maxLoad * 9.8)
{

}
double Vehicle::getLoad() const
{
	return this->load;
}
double Vehicle::getMaxLoad() const
{
	return this->maxLoad;
}
bool Vehicle::addBox(double weight)
{
	weight *= 9.8;
	if (weight <= 0)
	{
		return false;
	}
	if (this->load + weight > this->maxLoad)
	{
		return false;
	}
	this->load += weight;
	return true;
}

