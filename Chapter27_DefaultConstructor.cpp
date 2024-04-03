// Without any delay, let's start
#include <iostream>
using namespace std;

class Car {
    static int total;
    string CarName;
    int price;

    public : 
            // Now we create default constructor for this class.
            Car(void) {
                // We set some random values
                CarName = "Random Car";
                price = 25000;
                total++;
            }

            // Also, you can use the concept of constructor overlaoding! It is the same as function overloading.
            Car(string c, int p) {
                CarName = c, price = p;
            }
            
            void disp(void) {
                cout << "The car is : " << CarName << " (Price - " << price << ")"<< endl;
                cout << "YOU HAVE " << total << " CARS IN TOTAL!" << endl;
            }

};

// We use static variable
int Car::total=0;

int main() {
    // Now we use the class.
    Car a1;
    Car a2;
    Car a3;
    Car a4;
    Car a5;
    a2.disp();
    a1.disp();

    // You can see that it works perfectly!
    // So, in this chapter we have covered that you can have 2 types of constructors and how we can use constructor overloading. There are of-course more types but we might study them in the later chapters. OOPs is really lengthy concept so it will time consuming to learn and explain.
    // In the next chapter, we will look at some more concepts related to Constructors. Till then, happy coding!
    // Also, now you can complete exercises till 13! Good luck.
}