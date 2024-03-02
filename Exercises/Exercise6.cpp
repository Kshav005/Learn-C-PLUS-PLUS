// In this exercise, you have to use recursion in order to print out the fibonacci series. Take the user input and perform the function based on it. 
// For those, who don't know, Fibonacci series is same like Factorial, the difference is just that here we use addition instead of multiplication in factorial. 
// If you couldn't solve the question, then the solution is provided below for you!
















#include <iostream>
using namespace std;

int fibo(int a) {
    if (a <= 0) {
        return a;
    }
    return a + fibo(a-1);
}

int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;
    cout << "The fibonacci series result is : " << fibo(num);
}

// The exercise has been completed! Congrats.