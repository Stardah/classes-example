#include <iostream>
#include "Book.h"
#include "MyBook.h"
#include "Beer.h"

// Константная ссылка запрещает вызывать 
// не const методы
void process(const Book& book)
{
    book.print1();
    // Не const метод
    //book.print2();
    return;
}

int main()
{
    // book это объект, а не ссылка, поэтому 
    // не нужно писать book = Book(), хотя и можно 
    Book book;
    //Book book = Book();
    book.print1();
    book.print2();
    book.print3();
    
    process(book);

    // book это указатель на объект, поэтому 
    // нужно писать book = new Book()
    const Book* pBook = new MyBook(); //&book;
    //Book book = Book();
    pBook->print1();
    //(*(&book)).print1();
 
    // print2 не const, то есть потенциально 
    // может изменить объект, компилятор это не разрешит
    // pBook->print2();

    // Объект созданный через new нужно удалять самостотельно
    delete pBook;

    //
    const Beer* beer = new Beer();

    delete beer;
}
