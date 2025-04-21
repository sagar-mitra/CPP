#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Enter the value for a: ";
    cin >> a;

    if(a>99 && a<1000) {
        cout << "It's a three digit number" << endl;
     } else {
        cout << "It's a not three digit number" << endl;
     }

     return 0;
} 