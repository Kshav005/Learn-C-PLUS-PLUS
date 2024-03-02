#include <iostream>
using namespace std;

// Sometimes, you want to have default values of parameters when the user doesn't pass it as an argument.
// For example, you have a sum function which accepts 2 integers. Now, if user gives only 1 integer value then your code won't run. But what if you already set the 2nd integer's default value?
// Basically it would mean that it would consider the default value if the user doesn't pass the 2nd integer. Let's see!

// Here is a function which takes string as argument
string fun(string a) {
    cout << "You typed : " << a << endl;
}

string funn(string a="This is default value.") {
    cout << "You typed : " << a << endl;
}

int main() {
    fun();      // Thus, this will give an error if you don't give it arguments that it require.
    funn();     // It will work even if you don't give it argument
    
    // You just need to use the '=' sign to assign default values to the parameters. These types of parameters are known as default parameters.
    // Also, while writing default arguments keep in mind to write them in end (after all required parameters). You cannot keep default arguments before required arguments.
}