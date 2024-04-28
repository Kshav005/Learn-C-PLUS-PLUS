// We have already discussed about Multilever inheritance in the previous chapters. Now we will see and discuss it thoroughly here!
// Multilevel Inheritance goes like : A - B - C, where '-' before alphabet represents, 'inherited from'. So, B is inherited from A and so on.
// This is also multilevel : A - B - C - D - E - F - G -------, it can be any number.
#include <iostream>
using namespace std;

// Suppose we have overall base class as Planets.
class Planets {
    protected : 
        string name;
        int radius, distance, number;
        bool Habitable;

    public : 
        void setInfo(string x, int r, int d, int n, bool h) {
            name = x, radius = r, distance = d, number = n, Habitable = h;
        }
        void showInfo(void) {
            cout << "Name : " << name << endl;
            cout << "Number : " << number << endl;
            cout << "Radius : " << radius << endl;
            cout << "Distance : " << distance << endl;
            cout << "Habitable : " << Habitable << endl;
        }
};

// Creating Inherited class
class HabitablePlanet: public Planets {
    public : 
        void setIn(string x, int r, int d, int n) {
            name = x, radius = r, distance = d, number = n, Habitable = true;
        }
};

// Creating another Inherited Class
class DefaultVal: public HabitablePlanet {
    public : 
        void set(int n) {
            number = n;
            name = "PlanetX" ;
            radius = 5, distance = 30, Habitable = true;
        }
};


int main() {
    DefaultVal obj1;
    obj1.set(1);
    obj1.showInfo();

    // And this is how you can implement multilevel inheritance in C++!
    // In the next chapter, we will be looking at multiple inheritance.
}
