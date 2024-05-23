// Pointers play a key role in OOPs, and can be used further to make useful programs.
// Hence, we are going to learn about them in Inheritance with a little bit of extra information.

#include <iostream>
using namespace std;


int main() {
    int x = 10;
    // We can use 'new' keyword to allocate a value to a memory location
    // It may sound confusing but basically, this (below)
    int *a1 = &x;

    // and this 
    int *a2 = new int(5);

    // The only difference is that, in the first one, you must initialize the value with a variable while you can directly enter the value in the second one.
    // You can use any data type
    float *a3 = new float(4.5);
    
    // For arrays
    int *a5 = new int[3];
    a5[0] = 3, a5[1] = 38, a5[2] = 4;
    cout << a5[0] << ", " << a5[1] << ", " << a5[2] << endl;

    // This is called dynamically memory allocation.
    // Since 'new' is here, there is 'delete' too! Totally opposite of 'new', as it is used to free up memory.
    delete[] a5;        // for arrays
    delete a3;
    cout << a5[0] << ", " << a5[1] << ", " << a5[2] << endl;

    // If you print values again after deleting, then you will recieve random numbers.
}
