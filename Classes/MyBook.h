#pragma once
#include "Book.h"
class MyBook : public Book // ������ Book ������ �� ��������� (private)
{
public:
    MyBook();

    // ������� print1 ��� ������� �����
    using Book::print1;

    void foo() {
        // ���������� ������ ������������ ������
        this->print2();
    }
};
