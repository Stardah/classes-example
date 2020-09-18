#pragma once
#include "Drink.h"
class Beer : public Drink
{
public:
	Beer() 
		: Drink()
	{
		std::cout << "Beer::constructor()" << std::endl;
	};
	~Beer() {
		std::cout << "delete beer\n";
	};
};

