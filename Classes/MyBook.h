#pragma once
#include "Book.h"
class MyBook : public Book // Методы Book скрыты от окружения (private)
{
public:
    MyBook();

    // Открыли print1 для внешней среды
    using Book::print1;

    void foo() {
        // Используем методы абстрактного класса
        this->print2();
    }
};
