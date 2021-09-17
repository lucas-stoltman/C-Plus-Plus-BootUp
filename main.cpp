// Created by Lucas Stoltman 2021

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

int main() {

    Book book1,book2, book3;

    std::cout << "Greetinge, welcome to the library of congress." << std::endl;

    book1.set_title_ = "Dune";
    book1.set_author_ = "Herbert";
    book1.length_ = 451;
    book1.bookmark_ = 1;

    book2 = book1;
    book2.author_ = "Jimmy Jazz";


cout << book1.author() << endl;
cout << book2.author() << endl;
}


