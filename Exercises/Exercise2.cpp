// We have learnt about conditional statements. Now let's see if same can be used for strings too!
// In this exercise, you have to create a program in which the user enters his favorite car brand and you have to give any output of your choice based on some of the examples of car brands that user might enter.
// If you couldn't solve the problem, then don't worry. The solution is provided below and you can have a look at it! But make sure you try it out yourself first in order to see if you have learnt anything.
















#include <iostream>
using namespace std;

int main() {
    string a;
    cout << "Enter your favorite car brand (in lower case) : ";
    cin >> a;
    
    if (a == "porsche") {
        cout << "Woah! Porsche is a good choice. 911 turbo is my favourite!";
    }
    else if (a == "ferrari") {
        cout << "Ferrari is a luxury brand and makes cool cars.";
    }
    else if (a == "bmw") {
        cout << "BMW m3 gtr is one of my favourite and you may know why!";
    }
    else if (a == "toyota") {
        cout << "Toyota, i see! What's your thought about supra?";
    }
    cout << endl;
}

// Congrats on writing a beautiful program! Keep on learning like that.