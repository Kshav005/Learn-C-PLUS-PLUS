// Welcome to the continuation of the runtime polymorphism! In this chapter, we are going to look at a solution which lets you use the derived class which was a major issue in our recent chapter! The solution is 'virtual function'. 
// We learnt about virtual class earlier and it's really similar to that.
// Basically it's used to tell C++ that the function of derived class is must to use, then we use 'virtual' function. If 'virtual' function is created, then the base class' function will not run even if you change the address.
// Let's try!

#include <iostream>
using namespace std;

// Base
class Base {
    public :
        // Just use 'virtual' as prefix 
        virtual void show(void) {
            cout << "BASE CLASS" << endl;
        }
};

// Derived
class Derived : public Base {
    public : 
        void show(void) {
            cout << "DERIVED CLASS" << endl;
        }
};

int main() {
    Base *x;
    Derived y;
    x = &y;
    x-> show();      // The problem is solved! It was just a one word solution.

    // Let's try running the original too
    Derived *z;
    z-> show();

    // It won't work now but you call it directly without using pointers.
    // There are some rules which should be kept in mind while working with such functinos :
    // 1. They cannot be static.
    // 2. Can be accessed by object pointers.
    
    // Hence, with this, we complete our OOPs syllabus! Now you can keep practicing and solve questions for building your concepts as strong as possible.
}