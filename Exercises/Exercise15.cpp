// In this exercise, you need to create 2 classes. One is Simple Calculator and other one is Scientific Calculator. Add addition and subtraction in the simple one and put power and square root in the scientific one. Make sure scientific calculator knows what simple calculator know.
// For your help, the solution is provided below and you can have a look at it if you find it hard to solve the problem! Good luck!!

















#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator {
    public : 
        void Addition(int x, int y) {
            cout << x+y << endl;
        };
        void Subtraction(int x, int y) {
            cout << x-y << endl;
        };
};

class ScientificCalculator: public SimpleCalculator {
    int z, abc;
    public : 
        ScientificCalculator(int x) {
            z = x;
        }
        void SquareRoot(void) {
            cout << sqrt(z) << endl;
        }
        void Power(void) {
            cout << "Enter power : ";
            cin >> abc;
            cout << pow(z, abc) << endl;
        }
};

int main() {

ScientificCalculator obj(3);
obj.Addition(4, 5);
obj.Power();
}

// Hence, the exercise is complete!