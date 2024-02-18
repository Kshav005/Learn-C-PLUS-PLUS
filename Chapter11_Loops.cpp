// Welcome back to anotehr chapter in which we are going to study about the loop structure, mainly for loop, while loop and do-while loop. If you are familiar with coding languages then you might know about them but still we are going to discuss about it here!

// Let's create our template.
#include <iostream>
using namespace std;

int main() {
    // So, first of all. Loops are used to make task easier by repeating a certain program again and again in order to achieve something. For example, if I tell you to print numbers till 100, then would you use 'cout' 100 times?
    // That's where loops make it easier in just few steps!

    // 1. FOR LOOP 
    for (int i=0; i<100; i=i+2) {
        cout << i << endl;
    }

    // Let's understand the syntax.
    // First of all, we used 'int i=0' to initialize a variable which will be used to count the number of times we have to do a task. So initially, it is 0 but you can change it to any number of times you want.
    // Secondly, in 'i<=100', we specified when to end the loop. I did it to 99 to print total 100 numbers (0 is also printed, remember!). So, I gave it a condition when to stop the loop.
    // 3rd is 'steps' where you can define steps for a loop. Like skipping 2/3 or any times. I wanted to be continous so I did it to +1. If you had done 'i=i+2', it would have been -> 0, 2, 4, 6, 8, 10.......so on. 
    // Inside the curly brackets, I specified the program which needs to be run. After each iteration (cycle), the program will increase the value of 'i' by 1 and confirms the condition 'i<100'. If the condition becomes false, then the loop will stop at that instant.
    // Infinite loop can also be run in for loop if the condition never fails. It should be avoided as it takes up a lot of memory.

    // 2. WHILE LOOP
    int num = 0;
    while (num < 100) {
        cout << num << endl;
        num++;
    }
 
    //  while (condition) {
    //     program_here
    // }

    // You can replace 'true' with condition if you want to make your while loop run infinitely but remember, it can consume memory. In this chapter, we will also learn about stopping a loop too.

    // 3. DO-WHILE LOOP
    // The syntax goes -

    // do {
    //     program
    // }
    // while (condition)

    // First, let's make a small program for a view
    int b = 3;
    do
    {
        cout << b << endl;
        b += 3;
    }
    while (b<=30);
    
    // Alright, I hope you understood a little bit from the above code. Basically, C++ executes the 'do' statement and then checks the condition. It means, if you try to put up an impossible condition which cannot be true, still C++ will execute the 'do' program and will check the condition in 'while'. If it's false, then stops the program.
    // This is the only difference in while and do-while loop.


    // Next we are going to understand about 'break' and 'continue'. They both are used under if-else statements inside the loop.
    
    // 1. BREAK 
    // It is used to break out of the loop permanently. You can use this keyword in both loops and switch-case statements.
    
    int z = 0;
    // Starting an infinity loop
    while (true)  {
        z++;
        cout << z << endl;

    // We say, if value of 'z' becomes 100, then break out of the loop.
        if (z==100) {
            break;
        }
    // As this condition is written after the output, therefore we will get the last print integer 100. But if you put it before 'cout' then it would be till 99.
    }

    // 2. CONTINUE
    // Used to break out of the loop at that instant and start again (not from beginning though).

    for (int ui=0; ui<=15; ui++) {
                
        // We say that if value of 'ui' is 13 then don't print it and break the loop. Start from next number.
        if (ui == 13) {
            continue;
        }
        cout << ui << endl;         // You can see, it will not print 13 as it was told to continue the loop.


        // Hence, this was the chapter. You can now start doing Exercise 2 & 3! All the best.
    }
    

}
