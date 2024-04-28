// In C++, OOPs play an important role.
// Moreover, it is equally important to save time. Hence, inheritance is used. 
// In english, inheritance means to take some of the features. So, in Cpp, you can inherit a class from the original class and add more features to it. 
// Understand it as a parent and child. If a parent loves cake, then the child will also love cake along with some of the more features of their orn. 
// By the same method, inheritance is used in class to avoid wasting time in creating the same class.
// The parent class is known as base class.

// There are 5 types of inheritance :-
// 1. Multiple 
// 2. Hierarchical 
// 3. Hybrid
// 4. Multilevel
// 5. Single

// Single inheritance : the derived class has only one base class.
// Multiple inheritance : a derived class has more than one base class. For eg => A child have qualities of both the parents
// Hierarchical inheritance : involves several derived class with one class.
// Multilever inheritance : Derived class is derived from another derived class which is again derived from base class.
// Hybrid inheritance : multiple + multilever inheritance


// Let's learn how to create a single inheritance first and then we will cover other types in the chapters later.

#include <iostream>
using namespace std;


// Suppose there is a class of Organisms (in a general way).
// Base class
class Organisms {

    public :
    string specieName;
    int weight, height;
    string Habitat;
    bool veg;
        Organisms(string name="Unknown", int w=1, int h=1, string habitat="Unknonw", bool veg=false) {
            specieName = name, weight = w, height = h, Habitat = habitat, veg = veg;
        }
        void display(void) {
            cout << "Specie name : " << specieName << endl;
            cout << "Weight (Height) : " << weight << " (" << height << ")" << endl;
            cout << "Habitat : " << Habitat << endl;
            cout << "Vegetarian : " << veg << endl;
        }
};

// Derived class
// Syntax - class derClass : visiblityMode baseClass {}
// By default, the visibility mode is 'private'. So, if you skip writing visibility mode and jump to writing baseClass, then it will be private.

// What does happen with public and private during inheritance?
// Public mode : Public members of base class become public members of derived class
// Private mode : Public members of base class become private members of derived class

// Note - Private members of base class are not inherited into the derived class!
class Animal : public Organisms {
    public : 
        Animal(void) {
            Habitat = "Land";
        }
};

int main() {

    // Now you can use the derived class and base class functions!
    Animal a1;
    a1.display();

    // And with this, the chapter ends! In the next chapter, we will continue with the inheritance concept.
}