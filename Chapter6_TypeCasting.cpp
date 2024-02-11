// In this chapter, we are going to understand about typecasting and a way to remove the use of 'std' again and again because it can be a nuisance if keep on focusing using that.

#include <iostream>
using namespace std;        // Add this line to stop using 'std::' again and again!

int main() {
    float a = 12.5;     // It is a float variable.
    double b = 12.5;     // It is a double variable which can contain more decimal places than float.

    // Generally, when you think what datatype can '12.5' be then you will get that it's a float but it's not! It's double by default. Hence, if you want to change a double into a float, then you need to write it as '12.5f' where 'f' is float.
    // You may think why to do that if we already initialize using 'float', then why use it. It's actually typecasting, so you can use this concept in functions. 
    // Also, same is done with 'double long', you can use '12.5l' to convert it into long double number.
    // There is no strictness on case. You can also use capital 'F' for float and for other data type too.

    // There is a function 'sizeof' which gives the number of bits taken by a datatype.
    // Let's use it to find the difference in float and double.
    cout << "12.5F -> " << sizeof(12.5F) << endl; 
    cout << "12.5L -> " << sizeof(12.5L) << endl; 
    cout << "12.5 default -> " << sizeof(12.5) << endl; 

    // In the first line of code, we will recieve the output as 4 because a float number takes 4 bit in space. Second line of code will show 12 while 3rd line, by default will show 8.
    // It proves that a float datatype takes 4 bits, a long double takes 12 bits and default (double) takes 8 bits. Hence, you can use your preferred datatype and manage the space of memory used by the program, enabling in fast conditions. 
    // Also the output may be different in different machines as the size of register varies.

    // This topic completes here and in the next chapter, we are going to look at reference variables in C++! See you next time.

}