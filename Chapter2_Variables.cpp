// I hope you know basic programming terms because this tutorial will not cover all these easy things. It's just for revising and learning C++.
// We have same datatypes in c++ to as in other languages.
// Comments are written using '//'.
// To write multi-line comments we use '/*' for start and '*/'.

#include <iostream>

int main()
{
    // We can define variables using 'datatype variable = value'
    // We have 5 data types mainly : int, float, double, string, char & bool.
    // 1. int : 1, 2, 3, etc.
    // 2. float : 1.1, 2.2, 3.1, etc.
    // 3. double (same like float but contains big decimals) : 3.28391313123213, 9.343424242, etc.
    // 4. bool : true, false
    // 5. string (inside double quotes) : "hi", "haha", etc.
    // 6. char (inside single quotes and single letter) : 'h', 'r', 'k', etc.

    int a = 7;   // This shows that 'a' variable can hold only integer values.
    int b = 8;
    int c = 4, d = 10;
    
    // Let's try printing it out
    std::cout << a;


    // A variable is of two types : global & local.
    // Global : Declared outside function
    // Local : Declared inside function (cannot be used by other functions)


    // The data types are of 3 types : 
    // 1. Built-in (examples are above - int, char)
    // 2. User Defined (struct, union, enum)
    // 3. Derived (array, pointer, function)
    bool flag = true;
    char si = 'g';


    // Also, remember that using 2 cout will not create in a new line, rather they both will be in the same line :-
    std::cout << "Hey";
    std::cout << "there";

    // You can also write like this :-
    std::cout << " hey " << "there";

    // Can be used to add variables too :-
    std::cout << " Nice variable is " << c << " and " << d;

    // If you want to create a new line, then you have too add '\n' in the end of every output.
    std::cout << "\nBrother\n";
    std::cout << "Bro\n";

    // The boolean in C++ works like 1 for True and 0 for False. So if you try to print the 'true', you will recieve those integer values instead.
    std::cout << true;      // will print 1
    std::cout << false;     // will print 0
}

// The rules of making variables is same as other coding languages. Just make sure your variable name starts with an underscore (_) or any alphabet. Then you can add numbers after the initial if you like. Also, they are case sensitive. Don't forget that you cannot use reserved keywords as variables!
// Hope you learnt something, will meet you in the next chapter!
