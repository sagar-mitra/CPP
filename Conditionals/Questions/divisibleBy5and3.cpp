#include <iostream>
using namespace std;

// Question: Take positive integer input and tell if it is divisible by 5 and 3.

int main() {
    int a;

    cout << "Enter the value for a: ";
    cin >> a;

    if(a%3 == 0 && a%5 == 0) {
        cout << "The number is divisible by 3 and 5" << endl;
     } else {
        cout << "The number is not divisible by 3 and 5" << endl;
     }

     return 0;
} 