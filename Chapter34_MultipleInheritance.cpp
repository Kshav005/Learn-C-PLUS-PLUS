// Without wasting any time, let's create 2 base classes

#include <iostream>
using namespace std;

// Suppose, we have a base class called 'People'
class People {
    protected :
        string name;
        string job;
        string company;
        int age;

    public :
        void setBasic(string n, int a) {
            name = n, age = a;
        }
};

// Another base class 
class Student {
    protected :
        int clas;
        float percentage;

    public : 
        void setBasic2(int n, float a) {
        clas = n, percentage = a;
        }
};

// Using multiple classes at once
class Coder: public Student, public People {
    public : 
        void Show(void) {
            job = "Coder";
            cout << "Name : " << name << endl;
            cout << "Job : " << job << endl;
            cout << "Percentage : " << percentage << endl;
        } 
};



int main() {

// Testing the class
Coder obj;
obj.setBasic("ABC", 32);
obj.setBasic2(12, 78.43);
obj.Show();
}