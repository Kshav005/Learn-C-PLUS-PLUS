// In this exercise, you need to create a function which takes in pointer parameters and using this, take 2 inputs from the user and then store them into the variable. After that, use the function and in the first variable put the value multiplied by 10 and the second value, the value should be added to the original first value.
// For eg -> Input------------- a = 4, b = 5
        //   Output------------ a = 4*10 = 40, b = 5 + 4 = 9 
// If you couldn't do so, then don't worry! The solution is provided below for you. You can have a look at it but first always try to solve it on your own. All the best!







#include <iostream>
using namespace std;

void Swap(int *a, int *b) {
    int temp = *a; 
    *a *= 10;
    *b += temp;
}

int main() {
    int x, y;
    cout << "Enter number 1 : ";
    cin >> x;
    cout << "Enter number 2 : ";
    cin >> y;
    cout << "Before : " << x << ", " << y << endl;
    Swap(&x, &y);
    cout << "After : " << x << ", " << y << endl;
}

// Hence, the exercise completes here! Congrats on doing so. You were able to learn pointers concept really well!