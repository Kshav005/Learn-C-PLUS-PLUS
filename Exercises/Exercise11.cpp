// This is going to be a special exercise as you need to create an array and try to append items by asking the user that how many items he/she wants to store.
// If you couldn't solve the question, then don't worry! The solution is provided below in order to help you. Good luck!

















#include <iostream>
using namespace std;

int main() {
    int a;
    string b;
    cout << "How many items you need to put?\n";
    cin >> a;
    string lis[a];
    for (int i=0; i<a; i++) {
        cout << "Enter item " << i+1 << " : ";
        cin >> b;
        lis[i] = b;
    }

    cout << "Final Array : ";
    for (int j=0; j<a;j++) {
        if (j!=a-1) {
            cout << lis[j] << ", ";
        }
        else {
            cout << lis[j];
        }
    }

// Hence, the exercise has been completed! Congrats if you did it on your own, otherwise keep on trying! You will achieve the goal someday.
}