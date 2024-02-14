// In this chapter, we are going to understand what manipulators are and how they play an important role sometimes.
// So, you might have seen in previous chapters that we used a keyword 'endl' which is endline. It is actually a manipulator. 
// Manipulators are the items which are used in formatting the output.
// We will learn about few of them in this chapter!

#include <iostream>
#include <iomanip>      // We will use this to get more manipulators.
using namespace std;

int main() {
    int a = 50, b = 300, c = 4000, d = 86853;

    // setw(int) used to create a width. You can understand better by printing the line of codes which are  given below!
    cout << setw(5) << a << endl;
    cout << setw(5) << b << endl;
    cout << setw(5) << c << endl;
    cout << setw(5) << d << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    // Now you may have understood what it meant! By default, when you use setw, everything is right aligned.
    // We will study about more of these in the later chapters! Happy coding.

}
