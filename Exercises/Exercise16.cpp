// In this exercise, create a program which has a class containing all the area functions of different shapes. Don't bother putting every shape, only put the main ones. Remember to return the area (do not print it).
// If you couldn't solve the problem, then don't worry! You can always refer to the solution provided below. All the best!

















#include <iostream>
using namespace std;

class Area {
    public : 
        float Circle(float radius) {
            return (3.14*radius*radius);
        }
        float Rectangle(float length, float breadth) {
            return (2*(length+breadth));
        }
        float Square(float side) {
            return (4*side);
        }
        float Cuboid(string areaType="total", float length, float breadth, float height) {
            if (areaType=="curved") {
                return (2*length*breadth + 2*breadth*height + 2*length*height);
            }
            return (2*(length*breadth + breadth*height + length*height));
        }
        float Cube(string areaType="total", float side) {
            if (areaType=="curved") {
                return 6*side*side;
            }
            return 4*side*side;
        }
        float Sphere(float radius) {
            return 4*3.14*radius*radius;
        }

};


int main() {

}