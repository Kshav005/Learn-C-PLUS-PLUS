// In this exercise, ask the use to enter a number between 1 to 10. You need to make sure the user enters the number between the range and keep on asking for the number from the user until they type in number 7. (Hint : Use infinite loop)


















#include <iostream>
using namespace std;

int main() {
    int b;
    while (true) {
        cout << "Enter a number between 1 to 10 : ";
        cin >> b;
        
        if (b<=0 || b>10) {
            cout << "This is not a number between 1 to 10!" << endl;
        }
        else if (b==7) {
            cout << "Nice.";
            break;
        }
    }
}

// The exercise is complete. Nice work!