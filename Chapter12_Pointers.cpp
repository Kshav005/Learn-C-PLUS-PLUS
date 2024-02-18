#include <iostream>
using namespace std;

int main() {

    // A pointer is a datatype in C++ which hold the address of other datatypes.
    // First of all, let's initialize a variable
    int a = 4;

    // o depict a pointer,
    int* b = &a;            // This is the way to create a pointer

    // & --> symbol for address of operator
    // * --> derefrence operator

    // When you try to print the variable, you will recieve the address of 'a'
    cout << b << endl;      // address is actual address of the variable inside the memory of the computer

    // If you want to know the value stored in the '*' while printing.
    cout << *b << endl;

    // Pointer-to-Pointer variable is a variable which stores the address of another pointer.
    int** c = &b;

    // If you try to print the value of pointer-to-pointer variable
    cout << **c;        // Make sure you add same number of '*' used in initialization of the variable.

    // This is the end for this chapter, we are going to learn about arrays in the next chapter which is very interesting!
}