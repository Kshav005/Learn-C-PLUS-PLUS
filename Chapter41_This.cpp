#include <iostream>
using namespace std;

class A {
    int a;
    int b;
    public : 
        // What do you think happens, if the name of the variable is same as the argument variable?
        void show1(int a) {
            a = a;
        }
        void get1() {
            cout << "Value : " << a << endl;
            // When you run this function, you will get a garbage value which is of course really bad. Let's see, in the next 'function', how to solve this!
        }
        
        void show2(int b) {
            // There's a pointer called 'this' and is used with an arrow
            this->b = b;
        }
        void get2() {
            // This will work!
            cout << "Value : " << b << endl;
        }
};

// We can also use 'this' for another purpose too!
class B {
    int x;
    public : 
        B & set(int x) {
            this->x = x;
            return *this;       // This returns the object which called it.
        }
        void get() {
            cout << "Val = " << x << endl;
        }
};


int main() {
    A x;
    x.show1(33);
    x.get1();
    x.show2(10);
    x.get2();

    // Checking for class B
    B y;
    
    // Since the 'set' function returns the object, thus we can apply another function
    y.set(3).get();
    

}