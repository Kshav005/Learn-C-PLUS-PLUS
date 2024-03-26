// This exercise is going to be a little fun. You have to create a binary conversion program which takes binary values from the user and checks if it's valid or not. Hint : import the 'string' header file and use it's 'at' function! All the best.
// Don't worry if you are unable to solve the problem, you can have a look at the solution below which is provided below in order to check how every thing works.

















#include <iostream>
#include <string> 
using namespace std;

string checkBinary(string num) {
    for (int i = 0; i < num.length(); i++)
    {
        if (num.at(i)!='0' && num.at(i)!='1') {
            return "Invalid Binary number :(";
        };
    }
    return "Yes, it is!";
}

int main() {
    string a;
    cout << "Enter a binary number : ";
    cin >> a;
    cout << checkBinary(a);
}

// Hence the exercise has been completed! Now you can move on to attempting more exercises or learn chapters.