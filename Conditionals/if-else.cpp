#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Enter the value for a: ";
    cin >> a;

    // Implementing if-else
    if(a%2 == 0) {
        cout << "The number " << a << " is a even number." << endl;
     } else {
        cout << "The number " << a << " is a odd number." << endl;
     }
} 