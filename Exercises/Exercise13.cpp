// In this exercise, you need to create a Point class which takes 2 arguments as x and y then add a function which displays the point and create another function which takes in 2 arguments of Point and finds out the distance between them.
// If you don't know the distance formula then the formula goes as : 
// d = rootover((x2-x1)^2 + (y2-y1)^2)
// If you couldn't understand the formula then just google the 'distance formula' and you will get the formula there. If you couldn't solve the problem then don't worry, the answer is always provided below for you!















#include <iostream>
// For square root and power, import cmath
#include <cmath>
using namespace std;

class Point {
    int x, y;
    public : 
        // Constructor here
        Point(int a=0, int b=0) {
            x = a, y = b;
        }

        void display(void) {
            cout << "(" << x << ", " << y << ")" << endl;
        }
        
        void distance(Point a, Point b) {
            x = b.x - a.x;
            y = b.y - a.y;
            x = pow(x, 2), y = pow(y, 2);
            int res = x + y;
            cout << "d = " << sqrt(res);

        }
};

int main() {
    // We test our class now
    Point a(1, 3);
    Point b(3, 2);
    a.display();
    b.display();

    Point ans;
    ans.distance(a, b);
}

// Congrats on completing the exercise! It seems like you are learning effectively very well. Keep coding!