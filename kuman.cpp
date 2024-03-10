#include "kuman.h"

DutDut::DutDut(const std::string &sound, const int &dut_time)
 : dut_time(dut_time), sound(sound)
{

}
void const DutDut::horn() const
{
	for (size_t i = 0; i < this->dut_time; i++)
	{
		std::cout << this->sound << " ";
	}
	std::cout << std::endl;
}

Car::Car(DutDut korna, const int &tire_count)
 : korna(&korna), tire_count(tire_count)
{
	
}
DutDut* Car::get_DutDut() const
{
	return this->korna;
}
