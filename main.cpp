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
#include "bookshelf.h"
using namespace std;

int main() {

    Book book2, book3;

    cout << "Greetings, welcome to the library of congress." << endl;

    Book book1("Dune", "Herbert", 451, 1);
    book1.TurnPage(1);
    
    book1.PrintDetails(cout);

    return 0;
}
