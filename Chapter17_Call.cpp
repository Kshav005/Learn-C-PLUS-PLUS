// In this chapter, we are going to talk about 'call by reference' and 'call by value' in function!
// Well, if you want to learn swapping of variables then this concept is highly suggested.
// 'Call by value' is the default calling method of calling a function. So, we will study what is 'call by reference' and you will be able to tell the difference between them after learning it.
// Let's create that basic function and get to know how it works.

#include <iostream>
using namespace std;

// We used 'void' because our function is not returning anything.
void swap1(int a, int b) {
    int temp = a;               // Here we create a temporary variable which takes the value of a
    a = b;                      // Then we give the value 'b' to variable 'a'.
    b = temp;                   // At last, the variable 'b' gets the value of old 'a' which was in 'temp' variable.
}

// Ignore it for now.
void swap2(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Let's try using the function now.
    int a = 5, b = 10;
    cout << "Swap1" << endl;
    cout << "Original a, b => " << a << ", " << b << endl;
    swap1(a, b);
    cout << "New a, b => " << a << ", " << b << endl;

    // If you run the above line, you will find that nothing has changed and that's why where pointers play a key role this method is known as call by reference where we provide the address in the arguments. Look at Line 16 of this file and then come back here.
    // Now we will pass address.
    int x = 5, y = 10;
    cout << "Swap1" << endl;
    cout << "Original x, y => " << x << ", " << y << endl;
    swap2(&x, &y);
    cout << "New x, y => " << x << ", " << y << endl;

    // Now the variables are actually swapped!
    // This one works because we provided the memory location which was overwritten by the function and the variables read the memory location for the value. This is called 'call by reference' using pointers. 

    // We can also use reference variables to do so! But for that, I give you this task to figure out how can you use reference variables and perform the same function. This time, no answer will be given and you will be able to use your brain to figure out some way. If you couldn't solve then just google it and try to understand how it works.
}