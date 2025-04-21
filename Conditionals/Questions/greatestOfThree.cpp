#include <iostream>
using namespace std;

// Question: Take 3 positive integers input and print the greatest of them.

int main() {
    int a,b,c;

    cout << "Enter 1st number: ";
    cin >> a;

    cout << "Enter 2nd number: ";
    cin >> b;

    cout << "Enter 3rdt number: ";
    cin >> c;

    if(a>b && a>c) {
        cout << a << " is the greatest number" << endl;
    } else if(b>a && b>c) {
        cout << b << " is the greatest number" << endl;
    } else {
        cout << c << " is the greatest number" << endl;
    }

    return 0;
}