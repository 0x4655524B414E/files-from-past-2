#pragma once

class Vehicle
{
private:
	double load;
	double maxLoad;

public:

	Vehicle(double maxLoad);

	double getLoad() const;
	double getMaxLoad() const;

	bool addBox(double weight);
};
