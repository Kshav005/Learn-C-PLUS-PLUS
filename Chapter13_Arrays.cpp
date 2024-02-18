#include <iostream>
using namespace std;

int main() {

    // Array is a collection of items of similar type.
    // For example, if you want to store 1 million data, then you cannot make 1 million variables for the task. That's where array is used. You can imagine it to be a box that can store items in it.

    // Also remember that the first place in an array is at index 0. Index is just the position in an array and an array looks like this : [1, 3, 5, 6, 1, 3, 3]
    // In the above example of array. The first element is 1 at index 0, second is 3 at index 1 and so on.

    // To initialize an array in C++
    int numbers[] = {1, 3, 5, 6, 1, 3, 3};

    // Another way is to specify length of array beforehand
    int abc[4] = {1, 1, 2, 3};

    // One more way is to it
    int z12[3];
    z12[0] = 15;
    z12[1] = 49;
    z12[2] = 1;

    // If you want to print a particular index from the array then 
    cout << "The number on index 2 in [1, 3, 5, 6, 1, 3, 3] is : " << numbers[2] << endl;

    // You can also change the value of a particular index in the array.
    numbers[2] = 1000;
    cout << "The number on index 2 in [1, 3, 5, 6, 1, 3, 3] now is : " << numbers[2] << endl;

    // You can also print out all the elements of an array using loops!
    for (int i=0; i<7; i++) {
        cout << "Element " << i << " : " << numbers[i] << endl;
    }

    // Let's learn about using pointers inside an array.
    // There is a term called Pointer Arithmetic which is actually a formula for finding out new address.
    // Formula => New Addr. = Current Addr. + i * size_of_datatype, where 'i' is index.
    // The name of variable itself gives the index of the first element. For example, we had an array called 'numbers', so if you try to print just the 'numbers' then you will get an address which is of actually the first element '1'.
    cout << endl;
    int *z = numbers;
    cout << "element 0 : " << *z << endl;
    cout << "element 1 : " << *(z+1) << endl;
    cout << "element 2 : " << *(z+2) << endl;
    cout << "element 3 : " << *(z+3) << endl;
    cout << "element 4 : " << *(z+4) << endl;
    cout << "element 5 : " << *(z+5) << endl;
    cout << "element 6 : " << *(z+6) << endl;

    // Hope you understood the concept in this chapter. Now you can try implementing all the concepts by yourself in order to learn effectively.

}