// Also known as parameterized class
// It helps you to create classes of different data types. Suppose you want to create an imaginary number class. Now, it can be int, float or double. You cannot create different class for each datatype, right?
// That's where template is used and it's important for competitive programming.

// Now we will learn about how to create it.
#include <iostream>
using namespace std;

// Use the keyword 'template' and create a class variable 'T' or any other name
template <class T=int>          // Assume it like function, you can have '=' to specify default datatype to be used

class Complex{
    // Then use 'T' wherever change in datatype happens
    T a;
    T b;
    public :
        Complex(T x=0, T y=0) : a(x), b(y) {} 
        Complex add(Complex x, Complex y) {
            a = x.a + y.a, b = x.b + y.b;
        }
        void display() {
            cout << a << " + " << b << "i" << endl; 
        }
};

int main() {
    // Now you can use it, inside the '<>' brackets, specify the datatype
    Complex <float> a1(3.3, 4.5), a2(1.5, 2.5), a3;
    Complex <> a4(4, 5);        // If you are using default datatype, still you need to use '<>' but you can leave it as this only to show that C++ needs to use default datatype here.
    a3.add(a1, a2);
    a3.display();

    // Similarly, you can have multiple parameters inside a template
    // template <class T, class G>
    // This will help in those class which take 2 values of different datatypes. 
    // You can have more parameters but remember that they should be seperated with commas.

}