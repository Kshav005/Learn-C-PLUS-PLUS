// Now if you know operators are very useful in arithmetic terms. And in C++, we have same operators like we have in JavaScript. If you didn't study about JavaScript (JS) then don't worry, we will still cover everything here!
// Let's quickly create our basic template of our program.

#include <iostream>

int main() {
    int a = 10, b = 5;
    std::cout << "Sum (+) = 10 + 5 => " << a+b;
    std::cout << "\nDifference (-) = 10 - 5 => " << a-b;
    std::cout << "\nProduct (*) = 10 * 5 => " << a*b;
    std::cout << "\nQuotient (/) = 10 / 5 => " << a/b;      // Results in integer if both numbers are integers.
    std::cout << "\nRemainder (%) = 10 % 5 => " << a%b;
    std::cout << "\nIncreament (10+1) = ++10 => " << ++a;
    std::cout << "\nDecreament (5-1) = --5 => " << --b;
    std::cout << "\nGreater than (>) = 10>5 => " << (a>b);
    std::cout << "\nGreater or equal to (>=) = 10<=5 => " << (a<=b);
    std::cout << "\nEqual (==) = 10==5 => " << (a==b);
    std::cout << "\nNot Equal (!=) = 10!=5 => " << (a!=b);
    std::cout << "\n AND (&&) = 10>5 && 10==10 => " << (a>b && a==a);   // Returns true if both values are true
    std::cout << "\nOR (||) = 10>5 || 10==10 => " << (a>b || a==a); // Returns true if any one of the value is true
    std::cout << "\nNOT (~) = ~(10!=5) => " << (~a!=b); // Turns the returned condition opposite, like - True will become False and vice versa
}

// These are the basic operators which can be used in C++!
// We will learn about references and typecasting in the next 2 chapters. See you soon!