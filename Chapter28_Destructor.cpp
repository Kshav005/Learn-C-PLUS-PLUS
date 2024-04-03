// In this chapter, we will start studying about destructor. As it's name says, destruct means to destroy.
// It is used to destroy and free up the memory which is used up by the constructor.
// It never takes an argument as it is used to destroy the dynamic memory allocated and it doesn't return any value.

// As destructor is opposite of constructor, so to initialize a destructor we use the '~' sign with the class name. For eg => ~className() {}
// A destructor is ran automatically when it exits a block of code.

// Let's look at the example.
#include <iostream>
using namespace std;

class Ui {
    int a;
    public : 
        // Constructor
        Ui(int) {
            cout << "Object created!" << endl;
        }

        // Destructor 
        ~Ui() {
            cout << "Object destroyed to free up memory" << endl;
        }

};

int main() {
    // Let's create an object
    Ui a(3);

    // We create a block
    {
        // Creating another object
        Ui b(4);
        cout << "Block entered" << endl;
    }

    // Now let's print and see what's the observation.
    // As you can see, object was created 2 times, then we entered the block.
    // After that, at the end of the block, C++ invoked a destructor and destroyed the object 'b'.
    // After it, object 'a' also got destroyed as it was inside another block under the 'main' function.
}

// We have covered quite a lot of information regarding OOPs. Few concepts still remain like inheritance. 
// However, we will complete it after taking a break. During this break, we will cover about File I/O in the next chapters. After it completes, we will continue with the OOPs.
// Till then keep learning and growing!
