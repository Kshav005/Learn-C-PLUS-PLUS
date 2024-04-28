// In this chapter, we are going to learn about virtual base class and it's applications.

// It is a way to resolve ambiguity of data member.

#include <iostream>
using namespace std;

// Base Class
class Student1 {
    protected : 
        string name = "Base";
    public : 
        void show(void) {
            cout << "Name : " << name << endl;
        }
};

class Test : public Student1 {
    protected : 
        int testmarks;
    public :
        void show() {
            name = "BaseInherited 1";
            Student1::show();
        }
};

class Sports : public Student1 {
    protected: 
        int sportmarks;
    public : 
        void show(void) {
            name = "BaseInherited 2";
            Student1::show();
        }
};

class Result : public Test, public Sports {
    protected : 
        int marks = 100;
    public : 
        void show(void) { 
            Student1::show();
        }
};
// Above line will show error because it will face an ambiguity.
// If you inherit as virtual then it will solve the problem. Below the corrected code 
// Base Class
class Student2 {
    protected : 
        string name = "Base";
    public : 
        void show(void) {
            cout << "Name : " << name << endl;
        }
};

// To solve ambiguity, inherit using the keyword 'virtual'
class Test2 : virtual public Student2 {
    protected : 
        int testmarks;
    public :
        void show() {
            name = "BaseInherited 1";
            Student2::show();
        }
};

class Sports2 : virtual public Student2 {
    protected: 
        int sportmarks;
    public : 
        void show(void) {
            name = "BaseInherited 2";
            Student2::show();
        }
};

class Result2 : public Test2, public Sports2 {
    protected : 
        int marks = 100;
    public : 
        void show(void) { 
            Student2::show();
        }
};


int main() {
    Sports obj;
    obj.show();             // Will throw error

    Sports2 obj2;
    obj2.show()             // Will not throw an error.

    // And hence, just by using 'virtual', we solved the ambiguity problem
}