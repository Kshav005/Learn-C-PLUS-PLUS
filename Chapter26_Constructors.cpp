// This chapter is going to be important as we are going to study about constructors in this chapter and about destructors soon. If you have learnt python then you might know about these two terms.
// Those who don't know, a constructor is a special function which is automatically called when object is created. We will learn about destructors later on.
// Earlier we saw that we had to set values of variable using a function which went as 'setFi' but if you observe other datatypes like int, we see that we just assign them values without using such functions.
// This is done using the help of constructors!
#include <iostream>
using namespace std;

// Here we will continue with our Fi datatype
class Fi { 
    // By default, it is private
    int a, b, c;
    public:

        // The constructor goes with the same name as the class
        Fi(int x=0, int y=0, int z=0) {
            // We set a default value too, incase the user doesn't mention values.
            a = x, b = y, c = z;
        }

        // Now we can perform the Inum operation
        void Inum(Fi a1, Fi a2) {
            a = a1.a + a2.a;
            b = a1.b + a2.b;
            c = a1.c + a2.c;
        }

        // And a display function
        void Display() {
            cout << a << "e" << " + " << b << "r" << " + " << c << "t" << endl;
        }


};

int main() {

// Now we use our class without using 'set' function
Fi num1(3, 4, 5);
Fi num2(3, 4, 5);
Fi num3;
num3.Inum(num1, num2);
num3.Display();
// And our code works!

// We can also initialize like this below
Fi num4 = Fi(4, 2, 3);
num4.Display();
}
// Important : 
// 1. Constructor starts with the name of the class.
// 2. It is called automatically once the object is created.
// 3. Constructors do not return any values or cannot have a return type.
// 4. Constructor overloading is possible!


// In the next chapter, we will be studying default constructor and we will see how to create like this. This one, which we studied is called Parameterized constructor as it takes in arguments.