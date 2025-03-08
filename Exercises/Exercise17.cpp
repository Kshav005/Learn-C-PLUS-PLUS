// In this exercise, you need to create a class 'ThreeDim' which contains x, y and z coordinates as integers.
// 1. default constructor to initialize data members as zero
// 2. parameterized constructor to initialize data members to values passed
// 3. function 'out' which displays the coordinates of the class
// If you couldn't solve the problem then don't worry, the solution is provided below! Good luck!!














#include <iostream>
using namespace std;

class ThreeDim {
    int x, y, z;
    public : 

        // Default constructor
        ThreeDim() {
            x = 0, y = 0, z = 0;
        }

        // Parameterized constructor
        ThreeDim(int a, int b, int c) {
            x = a, y = b, z = c;
        }

        void out() {
            cout << "(" << x << ", " << y << ", " << z << ")" << endl;
        }
};


int main() {

    // Using the class
    ThreeDim obj1;      // Calling default constructor
    obj1.out();
    ThreeDim obj2(1, 2, 5);      // Calling parameterized constructor
    obj2.out();
}

// Congrats on completing this exercise!