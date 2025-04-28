#include <iostream>
using namespace std;

// Question: WAP to count digits of a given number.

int main() {
    int n, count = 0;
    cout << "Enter the number : ";
    cin >> n;

    while (n > 0) {
        count++;
        n = n / 10;
    }

    cout << count;
    return 0;
}