// Welcome to anothe important chapter in the field of coding.
// We use OOPs to stylize our program and organize it in a beautiful way.
// The main reason C++ was created was OOPs. Otherwise, the concepts which we have studied earlier are in C language too.
// OOPs contain classes and objects. As the size of the program increases, the readability decreases. So, here we use classes to make them efficient to read.
// Class treats data as a critical element.
// let's study about some terms first.
// 1. INHERITANCE - Properties of one class in another class.
// 2. POLYMORPHISM - Ability to take more than one forms.
// 3. MESSAGE PASSING - Object.message() call format.
// 4. DYNAMIC BINDING - Code which will execute is not known until the program runs.

// Classes contains methods and variables.
// Let's start creating our template.

#include <iostream>
using namespace std;

// We use 'class' to create classes. If you remember, we learnt about a data type called structure. With the same method, we can use 'class' without using 'typedef'.

class Animal    // 'Animal' is the name given to this template
{
    private: 
        int a, b, c;        // 'private' means only the functions inside this class can access the variables inside it.
    public:                 // You can access 'public' from outside the class too!
        int e, f, g;
        
        // Function here
        void fun() {
            cout << "SUM OF THIS IS : " << e+f+g;
        }
};
int main() {

    // Use the 'class' with the same method as 'struct'
    Animal Dog;
    // Now you can specify the variables here except private variables.
    // Setting the variables
    Dog.e = 5;
    Dog.f = 1;
    Dog.g = 2;
    Dog.fun();      // As you can see, we got our variables.
    
    // But if you try to set the private variables then it will throw an error.

}