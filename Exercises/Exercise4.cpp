// In this exercise, you are given an array [100, 3, 23, 543, 1232, 24].
// Use while and do-while loop to print the elements one by one.
// Dont't stress if you couldn't solve the exercise! Solution is always provided below for your help but remember, trying is must. Good luck!
















#include <iostream>
using namespace std;

int main() {
    int arr[] = {100, 3, 23, 543, 1232, 24};
    int i = 0, j = 0;

    // USING WHILE LOOP
    while (i<6) {
        cout << "Element " << i << " : " << arr[i] << endl;
        i++;
    }
    cout << endl;

    // USING DO-WHILE LOOP
    do {
        cout << "Element " << j << " : " << arr[j] << endl;
        j++;
    }
    while (j<6);

    // The exercise has been completed! Congrats and I hope you learnt something from this exercise.
}
