// Hello and welcome to another tutorial! In this chapter, we are going to study about what and how static variables are used.
// They often come in handy when you want to make variable which doesn't forget it's count!
// So, static variables are those variables whose value gets preserved in the memory.
// Let's learn through an example. Suppose that you want to count about how many times a function has ran inside the program. You can either count it through stating a variable outside the function but you can use the keyword 'static' for a count variable inside the function.

#include <iostream>
using namespace std;

// Ignore this class for sometime and skip to the line 24
class Car {
    static int newnum;
    public:
        void getValue(void) {
            newnum++;
            cout << "The value of static variable is now : " << newnum << endl;
        }
};

// We specify static variable value like this.
int Car :: newnum;      // Default value is 0.
// Now, move to the main function and continue where we left off.



// So, here's our function and let's create a static variable
void Counting(void) {
    static int num = 0;
    num++;
    cout << "Increased by one! " << "("<< "num = "<< num << ")" << endl;
}

int main() {

    // Now when you run the function, we can see the value of num is increasing!
    Counting();
    Counting();
    Counting();
    Counting();

    // For class, you cannot define a static variable inside the class itself. You need to mention it explicitely, i.e. outside the class and outside the main function. Move to line 9.

    // We create an object.
    Car a;
    a.getValue();
    a.getValue();
    a.getValue();

    // Hence, we get to see the value of 'newnum' getting increased every time, we run the function.
    // But, you might think what's the use because you could have used the normal variable because it had worked the same. But suppose, you add one more object. Basically, we are creating objects to define that we are adding a new car. So, for car 'a' the count will work but if you create another object 'b' then the 'newnum' will be reset to 0. But we have to know how many times we ran a function, no matter through which object. That's where static variable is used.
    Car b;
    b.getValue();
    b.getValue();
    b.getValue();
}