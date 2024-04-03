// In this exercise, you need to create a function which takes in pointer parameters and using this, take 2 inputs from the user and then store them into the variable. After that, use the function and swap the values in the variables.
// If you couldn't do so, then don't worry! The solution is provided below for you. You can have a look at it but first always try to solve it on your own. All the best!







#include <iostream>
using namespace std;

void Swap(int *a, int *b) {
    int temp; 
    temp = *a;
    *a = *b;
    *b = temp;
    cout << "After Swapping : " << *a << ", " << *b;
}

int main() {
    int x, y;
    cout << "Enter number 1 : ";
    cin >> x;
    cout << "Enter number 2 : ";
    cin >> y;
    cout << "Before Swapping : " << x << ", " << y << endl;
    Swap(&x, &y);
}

// Hence, the exercise completes here! Congrats on doing so. You were able to learn pointers concept really well!