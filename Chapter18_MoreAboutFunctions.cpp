// In this chapter, we are going to understand more about function about how we can provide default parameters and shortcut to create functions!

// Let's get started.
#include <iostream>
using namespace std;

// Let's create a basic function
int diff(int a, int b) {
    return a-b;
}

// So, first of all. Why should we learn about inline functions, i.e. shortuct to make functions?
// At macro scale, when you call the function around 100 times, it will look fast to you but actually it takes a little bit of time to edit, write and return. If you are writing one liner function just like above then of course, it will be really seem like time wastage for the function. That's when we use inline functions.
// To use inline functions, we use the keyword 'inline' while making the function. Below is the example.
inline int differ(int a, int b) {
    return a-b;
}

// The above code will be much faster!
// You cannot use inline functions for every function. Like you might think that you can make any function 'inline' but actually it will cost you a lot of memory. This 'inline' function uses the cache memory instead of main memory and if you are a CS student then you might know that cache is much faster than main memory but with very little space.
// That's why it's recommended to use inline for those functions which are really short like 2 or 3 lines of code inside the function.
// Don't use inline functions for recursion (we will study in later chapters).
// Don't use for static variables (we will study in later chapters).
int main() {
    int a = 5, b = 2;
    cout << diff(a, b) << endl;
    cout << differ(a, b) << endl;
}

// This was a small chapter, next chapter will also be quite small but these concepts are quite important for learning C++. Happy coding!