#pragma once

#include <iostream>
class Book // struct?
{
public:
	Book();
	virtual ~Book() = default;

	// inline функция объявляется и 
	// определяется прямо в классе
	void print1() const {
		std::cout << "Print 1" << std::endl;
	}

	// Объявление функции
	void print2();
	
	// Объявление функции
	void print3();
};

// inline функция определяется вне класса
inline void Book::print2()
{
	std::cout << "Print 2" << std::endl;
}
