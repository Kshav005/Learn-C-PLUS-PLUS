// Suppose you have a multiple inherited class and both the base classes have a functino which has same name. What do you think, which one inherited class will use? And how to resolve this? 
// This concept is called Resolving the ambiguity in inheritance.
// First of all let's copy our old class!

#include <iostream>
using namespace std;

class Base1 {
    public : 
        void show() {
            cout << "Base1 Class" << endl;
        }
};

class Base2 {
    public : 
        void show() {
            cout << "Base2 Class" << endl;
        }
};
class Derived: public Base1, public Base2 {
    int x;      // Move into the main functino

    // Ignore below one for now
    // To solve the problem, you just need to create a function with the same name and specify which base class function should be invoked.
    public : 
        void show() {
            Base2::show();
            // Now program will run smoothly (Now you can go back to the main function end line).
        }
};

int main() {

// Let's test which functino will run.
Derived a;
a.show();

// We get to see that we get an error about 'show' function being ambiguous. What can we do to solve this problem? In order to solve the problem look at line 26.
}

// Hope you understood what ambiguity is about and how to solve it. OOPs is going to be finished in few more chapters!