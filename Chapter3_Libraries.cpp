// C++ comes with many libraries and you need to import them whenever you want to use them inside your program.
// One such library is 'iostream' which is used to take input from the user. It is also used to print out something as an output.

// let's try importing!
#include <iostream>

int main() {
    // To take an input, you need to initialize a variable and then use 'cin' with '>>' brackets.
    // '<<' is called insertion operator.
    // '>>' is called extraction operator.
    int a, b;
    std::cout << "Enter num 1 : \n";
    std::cin >> a;
    std::cout << "Enter num 2 : \n";
    std::cin >> b;
    std::cout << "The sum is : " << a+b;       // Hence, we created a simple addition program.

    // Such useful libraries are called header files which are used to enhance the functionalies. They are of 2 types : 
    // 1. System header files - Comes with the compiler.
    // 2. User defined header files - Written by a programmer.

    // In future, we might study about some of them! In the next chapter, we will cover the Operators that are used in C++.
}