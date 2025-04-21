#include <iostream>
using namespace std;

// Question: Take integer input and print the absolute value of that integer.


int main() {
    int num;
    
    cout << "Enter num: ";
    cin >> num;

    // First way
    // if(num >= 0) {
    //     cout << num << endl;
    // } else {
    //     cout << -num << endl;
    // }

    // Second way
    if(num < 0) {
        num = -num;
    }

    cout << num << endl;

    return 0;
}