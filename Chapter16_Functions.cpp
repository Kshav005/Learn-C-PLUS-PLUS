#include <iostream>
using namespace std;

// A FUNCTION is an important concept which helps you to minimize the lines of codes. For example, this 'main' is a function which is automatically ran in C++. 
// That's why we include most of the commands under it. 

// You can give parameters and a name to a function, that is why this chapter is made in order to learn about function!

// Usually we add a line 'return 0' in the end of this function. Return is used to get a value from a function. You have to use 'cout' to print out the returned value. 
// Let us create a simple addition function.


// We gave the function name as 'addition' and passed arguments inside the brackets. We want the function to take 2 values for the function to work that is 'a' and 'b' after which the function will return the sum of them. Remember to create function outside the 'main' function.

int addition(int a, int b) {
    return a+b;
}

// For now, ignore this function below 
int Add2(int a) {
    cout << a+2 << endl;
}

// Ignore this one too;
int Print(int a);       // Can be also written as 'int Print(int)'.

int main() {

// The variables used in the function are local variables as you know. So, you can use the variables with same name inside this function and they will work as different variables.

    int x = 5, y = 9;
    cout << addition(x, y) << endl;     // Here we passed 'x' and 'y' to the function to treat them as 'a' and 'b'. 
    // When the function is created, these variables are called parameters and when variables are used for function just like above one, then it's called argument. 
    // In one sentence, we gave 'x' and 'y' as arguments to the function 'addition' which takes in 2 integers 'a' and 'b' as parameters. The usage of function after passing arguments is known as calling a function.
    // If you used return in the function then you need to use 'cout' on the function call, and if you used 'cout' inside your function then you needn't use 'cout' during the call. Let's see an example.
    // I created a function called 'Add2'.
    // Now, I can just call the function without printing it.
    int z = 4;
    Add2(z);            // You can see, it was automatically printed.

    // If you insert function after 'main' function then C++ will throw an error, so you should write all your functions before 'main'.
    // But there is a term called 'function prototype' which enables C++ to know about the functions which are to be used when you put your function after 'main'. For the example, I created a function after 'main'. Have a look at it, then return here.

    // Now move to Line 25 and see that I have added a line which specifies the function name and the arguments. Now, you are able to use the function inside this 'main'! This is called function prototype.
    Print(5);

    // Is parameter necessary to use in function? NO.
    // You can use 'void' instead of 'int' to specify a 'non parameter' taking function.
    /* 
    void Function() {
        program here
    } 
    */

   // Also, you need to specify the datatype during the function naming according to the datatype of returned value.
   // If you function returns a string then use 'string Function_name()' and so on.

   // Hence, this chapter is completed! Now you can complete all exercises till 5 if you haven't yet. Happy coding!

}

// Function speified in the end
int Print(int a) {
    cout << "This function is called!";
}