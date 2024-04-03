// Object Oriented programming in C++ is quite a lengthy topic as it has so many topics which can be hard to understand.

// So, in this chapter, we will be studying about Passing objects as function.
// We know that the variable which we initialize using 'int', 'string' etc. are actually classes and thus we use sum of the functions from them.
// For example, in python, we have a list and we use certain function using that list.
// So, here we are going to create our own datatype and try to add some functions to it.

#include <iostream>
using namespace std;

// This datatype will be known as Fi
class Fi {
    private:
        // which is actually created from 3 numbers
        int a, b, c;
    
    public:
        // So, we allow the user to use a function to turn integer values to Fi datatype. Since, our members (variables of class) are private, thus we cannot change them outside this class explicitly.
        // Thus, we initialize implicitly through this function.
        void SetFi(int x, int y, int z) {
            a = x, b = y, c = z;

            // And we make a way to write Fi datatype numbers, eg = 2e+3r+4t 
        }

        // We create another function to display our numbers
        void DisplayFi() {
            cout << a << "e" << " + " << b << "r" << " + " << c << "t" << endl;
        }

        // From here, we are going to add some of the basic operations.
        // First function = Inum : It is an operation which sums up 2 Fi numbers (e to e, r to r, t to t).
        void Inum(Fi x, Fi y) {         // We ensure that both parameters should be of Fi datatype
        a = x.a + y.a;
        b = x.b + y.b;
        c = x.c + y.c;
        } 

        // Second function = YurnTwo : This operation multiplies the number of particular place (e, r, t) to itself and adds 2 to it.
        void YurnTwo(Fi x) {
            a = (x.a*x.a)+2;
            b = (x.b*x.b)+2;
            c = (x.c*x.c)+2;
        }

        // Our datatype is complete and let's test it.
};


int main() {
    // We test our functions.
    Fi num1, num2;
    num1.SetFi(3, 2, 2);
    num2.SetFi(1, 1, 3);
    num1.DisplayFi();
    num2.DisplayFi();

    // We see that our basic functions are working great!
    // Now is the time to check our operation functions.
    Fi inumOp, yurnOp;
    inumOp.Inum(num1, num2);
    yurnOp.YurnTwo(num1);

    // Let's see, if it did what we wanted it to.
    inumOp.DisplayFi();
    yurnOp.DisplayFi();

    // We can see that it is working! Hence, this is the way that you can use objects as parameters inside the class like we used the object 'x' & 'y' of datatype Fi inside the class itself.
    // Let's meet in the next chapter and learn even more!
}