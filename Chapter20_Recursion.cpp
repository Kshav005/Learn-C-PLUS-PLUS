// Welcome to one of the important concepts in programming! It's called recursion.
// Don't worry, recursion is just like a loop, however in a form of function.
// When a function calls itself, then it's known as recursion.
// It's mostly used to create programs like fibonacci series and calculating factorial of a number (which we are going to do here).
// Let's create our template 
#include <iostream>
using namespace std;

// Here's a factorial function.
// Factorial of 5 = 5 * 4 * 3 * 2 * 1 = 120
// Factorial of 4 = 4 * 3 * 2 * 1 = 24
// Factorial of 7 = 7 * 6 * 5 * 4 * 3 * 2 * 1 = 5040
// It is represented using '!'. So, 5! = 120
int factorial(int num) {
    if (num <= 1) {
        return 1;
    }
    return num*factorial(num-1);
}

int main() {
    // Try running the function!
    cout << factorial(5) << endl;

    // And if you see, we get the value as wanted. 
    // Recursion is a tough concept for most of the beginners and it's hard to understand how does it work. But recursion can prove to be solution for most your problems.
    // The factorial function, multiplies itself again and again. After then, it also checks the condition which is if num <= 1. Because if multiply it with 0 then the answer will be 0. Hence, we should stop it before it reaches 0.
    // The function calling itself continues until you apply a base condition which makes the function stop from running again. 'return' is also used to break out of loop (if loop is applied inside a function).

    // Hence, this was the main example of Recursion. You can now complete exercises till 6. We will meet in the next chapter!
}