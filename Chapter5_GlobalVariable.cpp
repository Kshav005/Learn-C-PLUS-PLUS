// Hello and welcome to another tutorial. Let's first create our template.
#include <iostream>

int c = 20;         // Initializing 2 global variables (variable which is created outside function)
int ab = 7;

int main() {
    int c = 10;         // This is a local variable, which means no changes will apply on the global variable if we add or do any operation on it.
    std::cout << c+2;           // This effect will only take place on this 'c' which is inside the function.
    std::cout << std::endl; // 'endl' is endline and acts as '\n'

    // To make changes on the global variable, we will use scope resolution operator (::)
    std::cout << ::c << std::endl;      // Here we got our global variable
    std::cout << ::ab << std::endl;

    // Let's try using an operator on the global variable.
    ::c = ::c + ::ab;
    std::cout << ::c;       // c + ab = 20 + 7 = 27!
}