#include <iostream>
#include <memory>
#include "kuman.h"

int main()
{
	Car c1(DutDut("TOROSPI", 5));
	std::shared_ptr<Car> car1 = std::make_shared<Car>(c1);
	car1->get_DutDut()->horn();
}