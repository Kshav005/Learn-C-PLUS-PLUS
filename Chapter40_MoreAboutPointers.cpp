// In this chapter, we will be looking at some of the important concepts related to both pointers and OOPS.
// Pointers are also used for pointing at objects too and here we will see how and why are they important!
// Let's start
#include <iostream>
using namespace std;

class Complex { 
    float a, b;
    public : 
        void setData(int x, int y) {
            a = x, b = y;
        }

        void show() {
            cout << a << " + " << b << "i" << endl;
        }


};

int main() {

    // Let's create an object
    Complex a;
    a.setData(3, 5);
    a.show();

    // The above was the general way but now let's try using pointers
    Complex b;
    Complex (*ptr) = &b;            // Pointing to the object

    // And if we try running it using pointer
    (*ptr).setData(5, 5);       
    (*ptr).show();

    // There will be no error and the code will run smoothly as before
    // When you create and use a pointer to access the class then there's another way of doing it by using '->' operator
    Complex *abc = new Complex;         // This is also correct
    abc->setData(2, 4);
    abc->show();

    // The above line is also correct and you need not use the '*' symbol for this one!
    // All these ways discussed are all correct and you can use either of the style. But, as suggested you should start using '->'.
    // We can also make an array of objects!
    Complex *cd = new Complex[3];


    // If you use the above line, then it will allocate memory worth 3 space.
    // Now, you can use either for loop or list slicing to initialize values.
    float j, k;
    for (int i=0; i<3; i++) {
        cout << "Enter a : ";
        cin >> j;
        cout << "Enter b : ";
        cin >> k;
        cd->setData(j, k);
        cd->show();
        cd++;

        // This below line will reset the pointer to it's original place
        if (i == 2) {
            cd -= 3;
        }
    }
    cd->show();

    // And by using input and for loop, we let the user decide to create and store objects in an array.

}