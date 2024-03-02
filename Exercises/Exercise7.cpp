// In this exercise, you need to create a number guessing game. The program should generate a random number from 1 to 10 and based on that, give the user 3 chances to guess the number. At every guess, display whether it's high or low. 
// You can use the 'rand' function to get a random number. If you couldn't understand how to use it then search it on your browser and complete the exercise using it. 
// Good luck, also the solution is provided below if you weren't able to solve it.
















#include <iostream>
using namespace std;
#include <cstdlib>  
#include <ctime>  

int main() {
    srand(time(0));
    cout << "-------------------WELCOME TO THE GAME--------------" << endl;
    int num = ((rand()%10)+1), lives = 3, guess;

    while (lives != 0) {
        cout << "Your guess : ";
        cin >> guess;
        if (guess<=0 || guess>10) {
            cout << "Your guess should be between 1 to 10." << endl;
        } 
        else if (guess < num) {
            cout << "Higher" << endl;
        }
        else if (guess > num) {
            cout << "Lower" << endl;
        }
        else {
            cout << "You won!! The number was = " << num;
            break;
        }
        lives--;
        if (lives==0) {
            cout << "You lost all your lives :(" << endl;
            cout << "The number was = " << num;
        }
    }
}