#include <iostream>
using namespace std;

// Question: WAP to print sum of digits of a given number.

int main() {
    int n, sum = 0;
    cout << "Enter the number : ";
    cin >> n;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    cout << "Sum is: " << sum;
    return 0;
}