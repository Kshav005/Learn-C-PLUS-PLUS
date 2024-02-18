// In this chapter, we are going to study about Union which is similiar like structures but it's mostly recommended because of better memory management.

#include <iostream>
using namespace std;

int main() {
    union TravelPlace {
        int countryID;
        int stateID;
    };

    // It's used to choose only 1 variable to fill out of others.

    // Suppose, I want the user to fill any of the options. It's their choice if they want to fill their place with state id or country id. Remember, only 1 can be chosen out of others. If you try to use more than one, then the data will be overwritten.
    // It is used to optimize memory.

    // Suppose, every option takes 4 byte worth space. If you had create structure of the same, then it would have covered 4*4 = 16 bytes of space in memory.
    // But in Union, it shares the memory bytes. So, the max memory allocated will the largest spaced variable. 

    union TravelPlace a;
    a.countryID = 232;
    cout << a.countryID << endl;      // Here you will recieve the value of the data entered.

    // But if you add value of another.
    a.stateID = 834;
    cout << a.countryID << endl;      // Here you will recieve the recent value even though you gave value to another variable.

    // Thus, we will learn more about it's uses in the later chapters! Happy coding. 
}