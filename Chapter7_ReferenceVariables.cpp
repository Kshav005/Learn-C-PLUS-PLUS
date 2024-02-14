// Reference variables are used to create alias of a particular variable.
// For example, I want my variable 'abc' to have a nickname (alias) 'cd', which means the operations which I perform on 'cd' should also reflect on 'abc'.
#include <iostream>
using namespace std;

int main() {
    int a = 3;
    
    // To initialize reference variable, we use '&'
    int & b = a;
    a+=2;
    cout << a << endl << b << endl;

    // If you print the above lines, you will recieve the same value of both variables.
    b += 10;
    cout << a << endl << b;

    // We will read about constants in the next chapter! Till then happy coding!!
}