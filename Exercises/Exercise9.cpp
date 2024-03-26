// Just like last exercise, you need to create a function which takes in binary number from a user, everything is same except checking if it's valid. This time, you have to take out the 1's complement of it. If you don't know what is 1's complement, then it's just inverting the binary digits.
// For example : 10101 becomes 01010, 1101 becomes 0010 and so on.
// If you couldn't solve the problem then have a look at the solution below. Good luck coding!
















#include <iostream>
using namespace std;

string Ones(string s) {
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='0') {
            s.at(i) = '1';
        }
        else if (s.at(i)=='1') {
            s.at(i) = '0';
        }
    }
    return s;
}

int main() {
    string a;
    cout << "Enter binary number : ";
    cin >> a;
    cout << Ones(a);    
}

// The exercise has been completed! Congrats!