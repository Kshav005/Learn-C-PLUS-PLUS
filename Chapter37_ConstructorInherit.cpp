// This chapter is going to be important as it is very conceptual and often asked in interviews. 
// To revise, constructor is a special function which is automatically invoked when object is created. It starts with the same name as the constructor.
// But how will a constructor run if the class is inherited? For this problem, this chapter is created!

// First of all let's understand some things -------
// If base class constructor doesn't have any arguments, then there is no need of any constructor in the derived class.
// But if there are arguments required in base class constructor, then derived class has to pass arguments to the base class constructor.
// If both have constructors, then base class constructor is executed first.
// In multiple inheritance, suppose there are 3 classes - A, B & C, where A and B are base classes and C is inherited from both of them. If, while inheriting, you wrote 'public A' first then it's constructor will be called first, then comes B Same goes if 'public B' is written first.
// In multilevel inheritance, constructors are executed according to the order of inheritance. For eg - C is inherited from B and B is inherited from A, then A's constructor will be ran first, then B's constructor and lastly C's constructor.

// SPECIAL CASE OF VIRTUAL BASE CLASS
// The constructors of virtual base classes are invoked first than non-virtual base classes.
// If there are multiple virtual base classes, then they will be invoked in the order they are inherited.
// Hence, Virtual constructor --> Non-Virtual constructor --> Derived class constructor

// Let's start the coding!
#include <iostream>
using namespace std;

// Let's start with the example for single inheritance
class Base1 {
    public : 
        Base1() {
            cout << "Base1 ran!" << endl;
        }
};
class Inherit1 : public Base1 {
    public : 
        Inherit1() {
            cout << "Inherit1 ran!" << endl << "--------------------" << endl;
        }
};


// Starting with Multiple Inheritance here
class Base2A {
    public : 
        Base2A() {
            cout << "Base2A ran!" << endl;
        }
};
class Base2B {
    public : 
        Base2B() {
            cout << "Base2B ran!" << endl;
        }
};
class Inherit2 : public Base2B, public Base2A {
    public : 
        Inherit2() {
            cout << "Inherit2 ran!" << endl << "--------------------" << endl;
        }
};


// Starting with virtual classes
class Base3A {
    public : 
        Base3A() {
            cout << "Base3A ran!" << endl;
        }
};
class Base3B {
    public : 
        Base3B() {
            cout << "Base3B ran!" << endl;
        }
};
class Inherit3 : public Base3B, virtual public Base3A {
    public : 
        Inherit3() {
            cout << "Inherit3 ran!" << endl << "--------------------" << endl;
        }
};


// Let's learn about how we can handle classes which require arguments
class Base4A {
    string a4;
    public : 
        Base4A(string x) {
            a4 = x;
            cout << "Base4A ran! The value is : " << a4 << endl;
        } 
};
class Base4B {
    string b4;
    public : 
        Base4B(string x) {
            b4 = x;
            cout << "Base4B ran! The value is : " << b4 << endl;
        } 
};

// Now when we create inherited class, we require arguments. C++ offers a short way to do so.
class Inherit4 : public Base4B, virtual public Base4A {
    string c4;
    public : 
        // For taking arguments for both classes, we need to sum the no. of arguments required by both the classes, i.e. 1 for A and 1 for B, making it 2. Moreover, we want our inherited constructor to have an argument too. So, that makes it 3.
        // The syntax goes like : 
        Inherit4(string a, string b, string c) : Base4A(a), Base4B(c) {
            c4 = b;
            cout << "Inherit4 ran! The value is : " << c4 << endl << "--------------------" << endl;
        }

        // This makes our class complete and it will run without any errors!
};


int main() {
    // Calling all 4 classes
    Inherit1 a;     
    Inherit2 b;     
    Inherit3 c; 
    Inherit4 d("first", "second", "third");    
}

// With these, you completed one of the most important concept! Congrats!!!
