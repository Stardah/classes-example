#pragma once

#include <iostream>
class Book // struct?
{
public:
	Book();
	virtual ~Book() = default;

	// inline ������� ����������� � 
	// ������������ ����� � ������
	void print1() const {
		std::cout << "Print 1" << std::endl;
	}

	// ���������� �������
	void print2();
	
	// ���������� �������
	void print3();
};

// inline ������� ������������ ��� ������
inline void Book::print2()
{
	std::cout << "Print 2" << std::endl;
}
