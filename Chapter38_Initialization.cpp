// In this chapter, we are going to study about Initialization and it's used in constructors to make assignment of arguments much easier.
// It's a short topic, so let's start
#include <iostream>
using namespace std;

class Base {
    int x, y;
    public : 
        // Constructor
        // The change is that outside the brackets, you enter the members and inside the brackets come the arguments. This will set the data members' value according to the arguments in the brackets.
        Base(int a, int b) : x(a), y(b) {
            cout << "The values are : " << x << " and " << y << endl;
        }
};

int main() {
    Base obj(3, 5);

// And that's all! The chapter is complete and I hope you have completed all the exercises till 15. We will meet in the next chapter.
}