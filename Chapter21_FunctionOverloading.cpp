// This chapter is going to cover the topic of function overloading!
// In C++, you can have 2 same name functions which can take different arguments. 
// Let's check the example below.

#include <iostream>
using namespace std;

// Creating a function
int hello(int a, int b) {
    return a+b;
}

// Creating another function with the same name but different arguments
int hello(int a) {
    return a;
}

int main() {
    cout << hello(5, 7) << endl;
    cout << hello(5) << endl;

    // As you can see, C++ can automatically figure out which function to use, by taking the no. of arguments passed.
    // This is called Function Overloading, C++ just checks out the type of argument which is taken by function. Suppose 1st function takes in 2 arguments and you also gave 2 arguments in the function call, then C++ will use that function.
}

// This is it for this chapter and in the next chapter, we are going to study about one of the most important topics in C++, which is OOP (Object Oriented Programming).