// In this exercise, you need to create a function prototype which will print 'something' the number of times the user want it to. In other words, take integer input from user and pass it as an argument to the function prototype which will print 'something' equal to the integer. Make sure that the user enters the number between the range 1 to 100.
// If you couldn't solve the question, then don't worry! You  can always look below for the solution, but make sure you try it first of all.

















#include <iostream>
using namespace std;

string Loop(int);

int main() {
    int a;
    cout << "Enter a number : ";
    cin >> a;
    Loop(a);
}

string Loop(int x) {
    if (x>100 or x<1) {
        cout << "Please provide number from 1 to 100.";
    }
    else {
        for(int i=0; i<x; i++) {
            cout << "something" << endl;
        }
    }
}

// The exercise has been completed! Congrats for doing so!!!