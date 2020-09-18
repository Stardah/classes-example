#include <iostream>
#include "Book.h"
#include "MyBook.h"
#include "Beer.h"

// ����������� ������ ��������� �������� 
// �� const ������
void process(const Book& book)
{
    book.print1();
    // �� const �����
    //book.print2();
    return;
}

int main()
{
    // book ��� ������, � �� ������, ������� 
    // �� ����� ������ book = Book(), ���� � ����� 
    Book book;
    //Book book = Book();
    book.print1();
    book.print2();
    book.print3();
    
    process(book);

    // book ��� ��������� �� ������, ������� 
    // ����� ������ book = new Book()
    const Book* pBook = new MyBook(); //&book;
    //Book book = Book();
    pBook->print1();
    //(*(&book)).print1();
 
    // print2 �� const, �� ���� ������������ 
    // ����� �������� ������, ���������� ��� �� ��������
    // pBook->print2();

    // ������ ��������� ����� new ����� ������� �������������
    delete pBook;

    //
    const Beer* beer = new Beer();

    delete beer;
}
