// Welcome back to another tutorial!
// Here, we will know about the other method of opening a file, which is using a member function.

#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // This method is a simple one but it's your choice whether you want to work with the files in this way or the other.
    // First we create our variable.
    ifstream input;
    string sentence;

    // Now we use the function
    input.open("textFiles/file1.txt");
    getline(input, sentence);
    cout << sentence << endl;

    // And this is how it works!
    input.close();

    // Here's an awesome way to read a file which has unknown number of lines. Because 'getline()' is only used to use the line and not the whole file. So, if your file has n lines, you need to run 'getline' n number of times.
    // To prevent that hard way, we use 'eof' and 'while' loop.
    ifstream in("textFiles/file3.txt");
    string line;
    int i=1;
    while (in.eof()==0) {
        getline(in, line);
        cout << "Line " << i << " = " << line << endl;
        i++;
    }
    // This is the way by which you can print the lines one by one.
}

// Hence, the file I/O topic is now complete! From the next chapter, we are going to focus on OOPs back again as said. 
// Hope you understood File I/O and can use it to create awesome and handy programs.