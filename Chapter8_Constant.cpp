// Just like in JavaScript, we can use 'const' to initialize a non changing variable. Those who don't know about it, don't worry, we will be understanding what is 'const'.

// So a constant variable is those variables which cannot be changed/edited. You can not change their datatype, their value, etc.
// To initialize such variables, we use the keyword 'const'.

#include <iostream> 
using namespace std; 

int main() {
    const int a = 32;
    // Now if you try to edit it and print the value,
    a = 34;         // It will throw an error.
    cout << a;

    // Using constants is a good practice for those values which are constant like pi or gravity. When we will learn about pointers, we will understand the use of const.

    // This chapter was small but I hope the meaning of constant is clear! We will meet in the next chapter.
}