// Created by Lucas Stoltman 2021

/*

Remember! When compiling, you need to do the g++ command to all .cpp files!
So a good command to compile would be:

$ g++ *.cpp -o run

*/

// HELLO WORLD EXAMPLE
/*
#include <iostream>

int main() {
    std::cout << "Hello World" << std::endl;  
}
*/

// BASIC USER INPUT EXAMPLE
/*
#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "How old are you (in years)?" << endl;
    cin >> age;
    cout << "that is " << (365*age) << " days." << endl;
}
*/

#include <iostream>
#include "book.h"
using namespace std;

int main() {

    Book book1, book2, book3;

    cout << "Greetinge, welcome to the library of congress." << endl;

    book1.set_title("Dune");
    book1.set_author("Herbert");
    book1.set_length(451);
    book1.set_bookmark(1);

    book2 = book1;
    book2.set_author("Jimmy Jazz");

    // book1.print_details(cout)
    // book2.print_details(cout)
    return 0;
}