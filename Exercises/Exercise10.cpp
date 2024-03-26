// Now is the ultimate time to test your 'class' sklls. You have to create a class for Binary numbers and create functions inside it like read (which takes input from user), display (shows the number), one's complement (from exercise 9) and if it's valid or not (from exercise 8).
// Do you think you can do this without any help? If no, then the solution is provided below. Good luck!

#include <iostream>
using namespace std;

class Binary {
    private :
        string a;
    public : 
        void read(void) {
            cout << "Enter a binary number : ";
            cin >> a;
        }
        void display(void) {
            cout << a << endl;
        }
        void Ones(void) {
            for (int i = 0; i < a.length(); i++) {
                if (a.at(i)=='0') {
                    a.at(i) = '1';
                }
                else if (a.at(i)=='1') {
                    a.at(i) = '0';
                }
            }
        }
        void checkBinary(void) {
            bool flag = false;
            for (int i = 0; i < a.length(); i++) {
                if (a.at(i)!='0' && a.at(i)!='1') {
                    cout << "Invalid Binary number :(" << endl;
                    flag = false;
                    break;
                }
            }
            if (flag) {
                cout << "Yes, it is!" << endl;
            }
        }
};

int main() {
    Binary u;
    u.display();
    u.read();
    u.display();
    u.Ones();
    u.display();
}

// If you have completed this exercise, then congrats and even if you took some help and solved it then still congrats to you. Don't worry, just keep practicing and you will learn in not time! 