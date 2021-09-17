// Created by Lucas Stoltman 2021

// HELLO WORLD EXAMPLE
/*
#include <iostream>

int main() {
    std::cout << "Hello World" << std::endl;  
}
*/

BASIC USER INPUT EXAMPLE
#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "How old are you (in years)?" << endl;
    cin >> age;
    cout << "that is " << (365*age) << " days." << endl;
}