#include <iostream>
using namespace std;

// Question: WAP to print reverse of a given number.

int main() {
    int n, rev = 0;
    cout << "Enter the number: ";
    cin >> n;

    while (n > 0) {
        int lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
        n /= 10;
    }

    cout << rev << endl;
    return 0;
}