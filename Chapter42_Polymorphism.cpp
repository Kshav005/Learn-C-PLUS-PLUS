// In this chapter, we are going to learn about one of the most important topic called 'Polymorphism'.
// It refers to multiple forms of a particular thing.
// For eg -> A woman can be a sister, mother, daughter, etc. So, basically '1 name, multiple roles'.
// In C++, example can be function overloading.

// There are two types of polymorphism => Runtime and Compile Time
// In Compile Time Poly. (Or early binding), the decision is taken that function is going to be called. It can be done by 2 methods, i.e., function overloading and operator overloading.
// While in Runtime poly., it is achieved only by virtual functions. In this,after compilation and execution of the program, it is decided which function to be ran using the type of pointer mentioned.

// So, in this chapter, we will be looking at some of the major concepts which are used to implement Runtime Polymorphism
// Let's learn about Pointers to Derived classes!

#include <iostream>
using namespace std;

// Base
class Base {
    public : 
        void show(void) {
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
    // Creating a pointer to base class
    Base *x;
    x->show();      // This will of course run correctly.

    // But what if we give this pointer the address of derived class object?
    Derived y;
    x = &y;
    // And run the function
    x->show();

    // To our surprise, we see no big change and still we get the result from the base class function!
    // Since, the pointer is initialized with a base class, there's no change in the result. This means that even storing the address of the derived class inside the base class pointer, you cannot access the members of the derived class and the main focus of the pointer will be the base class itself.
    // Hence, you might think that there is no way of using the derived class function with this method but wait!
    // Since, we are learning about Runtime polymorphism then no doubt there is a way! That is virtual functions which we are going to study in the next chapter!
}
