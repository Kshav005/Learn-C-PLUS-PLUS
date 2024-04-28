// In this exercise, a file is provided here with the name 'read.txt'. You have to write the content of read.txt into the 'write.txt' replacing the spaces with a comma, between the sentences. Think you can do it? Prove it!
// If you couldn't solve the problem, then don't worry. The solution is provided below in order to learn about how the logic should be implemented.

















#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream input("read.txt");
    ofstream output("write.txt");

    string word;
    getline(input, word);

    // We will start a for loop to change spaces
    for (int i=0; i<word.length(); i++) {
        if (word[i] == ' ') {
            word[i] = ',';
        }
    }
    output << word;
}

// The exercise has been completed! Congratulations on doing so!