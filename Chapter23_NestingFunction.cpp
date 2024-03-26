// We learnt about how we create classes and how it's a extension of structures in C++.
// However, structures had limitations as it's members were public and we couldn't insert methods in it. Methods are just variables which can be used inside classes.
// Classes can have methods and properties.
// It can make few members as private and public.
// You needn't use 'typedef' to create an alias for your class.
// We also learnt that we cannot change private members of the classes. However, you can use another function to manipulate such variables.

// When you call another function inside function of a class, then you needn't create an object for that. You just need to mention it.
// Let's see if it works.
#include <iostream>
using namespace std;

class People {
    private : 
        int a = 10;
    public : 
        void fun1(void);
        void Hello(void) {
            cout << "Ran by Hello function!";
        }
};

// You can create functions outside the class! Use the syntax - class::function_name
// However, just like function prototype, you need to mention the function first, inside the class.
void People::fun1(void) {
    cout << "Ran by Fun1 function" << endl;
    Hello();
}

int main() {
    People b;
    b.fun1();

    // As you can see, the function ran as expected! Inserting function inside another function is known as function nesting.
    // Hence, the chapter is over! Let's meet in the next chapter and we will continue about OOPs.
}

