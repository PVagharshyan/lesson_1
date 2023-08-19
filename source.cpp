#include <iostream>
#include "Library.h"
int Book::m_id = 0;
int Reader::m_id = 0;

int main() {
    Library l;
    Reader r("Poxos");
    Book b("Poqrik ISHXAN");
    l.add_book(b);
    l.add_reader(r);
    l.print_Library_books();
    l.print_Library_readers();
    l.assigns_to_reader(r, 1);
    //l.assigns_to_reader(r, 1); //throw
    return 0;
}
