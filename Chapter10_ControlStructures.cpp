// In this chapter, we are going to study about conditions and ocntrol structures, which is further used for many cases.
// Control structures are used to provide logic to the program.

// We have 3 basic control structures - SEQUENCE, SELECTION AND LOOP STRUCTURES.
// Sequence structure is simple, straight-forward which takes place step by step without any conditions.
// Selection structure is same like sequence structure but there is a concept of conditions in it. For eg - We have if-else to move into either direction.
// Loop structure consists of loop along with conditions. If the condition is true then it performs an operation and vice versa.

// These 3 of them help us in the program.

// Now let's study about 3 of them by writing programs!
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "What is your age? : ";
    cin >> num;

    // Implementing conditions by using 'if (condition) {____program_here____}'
    if (num>=18) {
        cout << "Wow! You are eligible to vote.";
    }
    else {
        cout << "You are still a kid" << endl;
    }

    /// If you are thinking, how to apply more conditions, more than one conditions then we use another keyword 'else if'.
    int i;
    cout << "Enter a number between 10 and 50 : ";
    cin >> i;

    if (i<10) {
        cout << "It's not greater than 10!";
    }
    else if (i>50) {
        cout << "It's greater than 50!";
    }
    else {
        cout << "Good work :D";
    }
    
    // Of course, you can implement the program more effectively using the keyword 'and' but in order to make you understand 'else if', I had to do it. You can use multiple 'else if', so you needn't worry about the limit but it's better if you can make better programs without using unecessary conditions.
    // However, there are 2 rules that you need to understand.
    // 1. There can be no 'else' and 'else if' without 'if'.
    // 2. 'if' can be used alone too, i.e. without 'else'.
    // 3. You can use 'if else' conditions inside of another 'if else' too!

    // Time to study about another way to implement selection structures.
    // This one is called 'switch-case' statement.
    int a;
    cout << endl << "Enter a num : ";
    cin >> a;
    switch (a)              // switch (variable_you_want_to_focus)
    {
    case 18:             // case condition_here;
        cout << "You are 18";         // Program to execute if condition is true
        break;              // 'break' is used to break and come out of the condition (basically end the program).

    // You can have any number of cases.
    case 30 :
        cout << "You are 30 :)" << endl;
        break;
    case 50 :
        cout << "You are 50 and old :(" << endl;
        break;
    
    default:            // works like 'else' if no condition matches
        cout << "No matching case found, ending........" << endl;
        break;
    }

    // If you don't use 'break' then it will print all the cases after it if some case matches. You can try running it by removing 'break'.
}