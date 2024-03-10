#pragma once
#include <iostream>

class DutDut
{
private:
	const std::string sound;
	int dut_time;

public:
	DutDut(const std::string &sound = "DOOT", const int &dut_time = 1);
	void const horn() const;
};

class Car
{
private:
	int tire_count;
	DutDut *korna {nullptr};

public:
	Car(DutDut korna = DutDut(), const int &tire_count = 4);
	DutDut* get_DutDut() const;
};