// Welcome to another chapter and we will learn about how we can read and write inside a file!
// In python, we learnt about it and using C++, we will be doing it this time, so that we understand more things quickly.
// Then, we will move to Inheritance.

// So, in order to use the features of reading and writing a file, you need to import a header file
#include <fstream>
#include <iostream>
using namespace std;

// The useful classes to use from the 'fstream' are :
// 1. fstreambase
// 2. ifstream      --> derived from fstreambase
// 3. ofstream      --> derived from fstreambase

// There are 2 ways to open a file.
// Using a constructor or using the member function 'open()'

int main() {

    // Opening a file using constructor ('ofstream' represents to 'write')
    ofstream out("textFiles/file1.txt");
    out << "This is a text file created for Chapter 29!";

    // To read a file using constructor ('ifstream' represents to 'read')
    ifstream in("textFiles/file2.txt");
    
    // Creating a string and giving it the info of the file
    string info;
    in >> info;           // However this will only store the 1st word

    // To get the whole info, we use 'getline(in, variablename)'
    getline(in, info);
    cout << info;

    // It is suggested to close the file after the work. A path which is opened should be closed in the end. Even though it doesn't matter if you don't close the file.
    // But it's a good practice and you will understand the importance of closing a file in the future when you start using multiple files in a program.
    in.close();
    out.close();

    // As this method involves the use of constructors, thus you can change the name of 'in' and 'out'. You can give it any name but just remember that 'ifstream' is for reading and 'ofstream' is for writing.
    // This is enough for this chapter, we will study more about it later on and see what you can do more in files! Happy coding!
    // Also you can now attempt exercises till 14!
}