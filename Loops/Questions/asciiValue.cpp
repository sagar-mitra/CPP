#include <iostream>
using namespace std;

// Question: Write a program to print all the ASCII values and their equivalent characters of 26 alphabets.

int main() {

    for (char ch = 'A'; ch <= 'Z'; ch++) {
        cout << ch << ": " << int(ch) << endl;
    }

    return 0;
}