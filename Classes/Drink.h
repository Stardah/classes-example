#pragma once
#include <iostream>
class Drink
{
public:
	Drink() 
	{
		std::cout << "Drink::constructor()\n";
		this->size = 0;
		this->ratings = nullptr;
	};

	Drink(int size, const int* ratings) 
	{
		std::cout << "Drink::constructor(size, ratings)\n";
		this->size = size;
		this->ratings = new int[size];
		for (int i = 0; i < size; i++)
		{
			this->ratings[i] = ratings[i];
		}
	}

	virtual ~Drink() 
	{
		std::cout << "delete drink ratings\n";
		delete[] this->ratings;
	};

	void order() const 
	{
		std::cout << "Order a drink " << std::endl;
	}

private:
	int* ratings;
	int size;
};

