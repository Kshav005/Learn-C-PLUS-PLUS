// In this chapter, we will look at another visibility mode which is really helpful for inheritance.

#include <iostream>
using namespace std;

// Have you thought of creating a variable which you want to be inherited but private. 
// As you know, private members are not inherited and moreover, cannot be accessed outside the class.
// But you want a variable which you want to inherit and not let the user access it outside of the class.
// To solve that, C++ has a visibility mode called 'protected'.
// Variables under protected act as private but they can be inherited!
// Let's build a class and see the example.

class Base {
    protected :
        int a = 8;
    private :
        int b = 10;
    public : 
        Base(){}
        void show(void) {
            cout << a << endl << b << endl;
        }
};

class Derived: public Base {

                                // public derive      private derive     protected derive
    // Public members              Public              Private           Not Inherited   
    // Private members             Private             Private           Private
    // Protected members           Protected           Private           Protected

    public : 
        void ShowA(void) {
            cout << a << endl;
        }
        void ShowB(void) {
            cout << b << endl;          // Error
        }
};


int main() {
    Derived obj;
    obj.ShowA();
    obj.ShowB();
}

// Hope you understood the concept! Let's move to the next chapter.