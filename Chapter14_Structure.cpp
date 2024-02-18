#include <iostream>
using namespace std;

int main() {

    // Structure is user defined datatype which is available in C++ and it's used to combine different datatypes. In array, as we noticed, that it contains elements of same datatype. You cannot have strings and integers in one array and vice versa.

    // 'struct' is the keyword for making structures.
    struct Car {
        int carID;         // The structure contains the elements which we want to include. You can say, we are making a form in other way. It can take in different variables and store them.
        string carName;
        bool Launched;
    };

    // Now we will use it!
    struct Car Porsche;     // Giving name to our collection
    Porsche.carID = 3232;
    Porsche.carName = "911 Turbo";
    Porsche.Launched = true;

    // Hence we created an element in structure!
    // You can print different variables of the element.
    cout << Porsche.carName << endl;

    // You can make more elements.
    struct Car Pagani;
    Pagani.carID = 30;
    Pagani.carName = "Zonda";
    Pagani.Launched = true;

    // You can use the keyword 'typedef' to create alias of your structure!
    typedef struct Hero {
        string name;
        bool isHuman;
        int position;
    } hro;      

    // In above line, we can use this structure with the name 'hro' now, without the 'struct'!
    hro Hulk;
    Hulk.name = "Bruce Banner";
    Hulk.isHuman = true;
    Hulk.position = 3;

    cout << Hulk.name << endl;

    // This was all needed for this chapter, if there's something more to cover, we will study it in the next chapter!
    
}